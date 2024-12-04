const evaluateMove = (move, penambah = 0) => {
    let sum = 0;
    if ('remove' in move) {
        if (move["removePiece"][1].toLowerCase() == "p")
            sum += 20 + penambah
        else
            sum += 60 + penambah
    }

    if ('promote' in move)
        sum += 40;

    if ('nextEat' in move) {
        sum += evaluateMove(move.nextEat);
    }
    return sum;
}

const minmax = (position, depth, alpha, beta, isMaximizingPlayer, sum, turn, color) => {
    jumlahNode++; // Contador de nós visitados
    
    // Obtém todos os movimentos possíveis para o turno atual
    let moves = getAllMoves(turn, position)
        .flatMap(m => spreadNextEat(m)); // Combina todos os movimentos e os possíveis "eat" em um único array

    // Ordena os movimentos aleatoriamente (pode ser substituído por uma heurística mais eficiente)
    moves.sort(() => Math.random() - 0.5);

    // Caso base: se a profundidade for 0 ou não houver mais movimentos, retorna o valor calculado
    if (depth == 0 || moves.length == 0) return [null, sum];

    let bestMove;
    let currentValue;

    // Max / Min values para controlar a busca
    if (isMaximizingPlayer) {
        let maxValue = Number.NEGATIVE_INFINITY; // Inicializa o valor máximo
        for (let move of moves) {
            let newPos = position;
            let newMove = move;

            // Aplica os "nextEat" até que não haja mais peças a serem comidas
            while ("nextEat" in newMove) {
                newPos = movePiece(newMove, newPos);
                newMove = newMove.nextEat;
            }

            newPos = movePiece(newMove, newPos); // Aplica o movimento atual
            currentValue = sum + evaluateMove(newMove, depth); // Avalia o movimento

            // Ajuste específico para peões (pode ser substituído por uma heurística mais sofisticada)
            if (newMove['piece'][1].toLowerCase() === "p") {
                if ((newMove['from'][1] === '1' && turn === "white") || (newMove['from'][1] === '8' && turn === "black"))
                    currentValue -= 10;
                else
                    currentValue += 10;
            }

            const [childBestMove, childValue] = minmax(newPos, depth - 1, alpha, beta, false, currentValue, turn === "white" ? "black" : "white", color);

            // Maximize the score
            if (childValue > maxValue) {
                maxValue = childValue;
                bestMove = newMove;
            }

            alpha = Math.max(alpha, childValue);

            // Alpha-beta pruning
            if (alpha >= beta) break;
        }
        return [bestMove, maxValue];
    } else {
        let minValue = Number.POSITIVE_INFINITY; // Inicializa o valor mínimo
        for (let move of moves) {
            let newPos = position;
            let newMove = move;

            // Aplica os "nextEat" até que não haja mais peças a serem comidas
            while ("nextEat" in newMove) {
                newPos = movePiece(newMove, newPos);
                newMove = newMove.nextEat;
            }

            newPos = movePiece(newMove, newPos); // Aplica o movimento atual
            currentValue = sum - evaluateMove(newMove, depth); // Avalia o movimento

            // Ajuste específico para peões (pode ser substituído por uma heurística mais sofisticada)
            if (newMove['piece'][1].toLowerCase() === "p") {
                if ((newMove['from'][1] === '1' && turn === "white") || (newMove['from'][1] === '8' && turn === "black"))
                    currentValue -= 10;
                else
                    currentValue += 10;
            }

            const [childBestMove, childValue] = minmax(newPos, depth - 1, alpha, beta, true, currentValue, turn === "white" ? "black" : "white", color);

            // Minimize the score
            if (childValue < minValue) {
                minValue = childValue;
                bestMove = newMove;
            }

            beta = Math.min(beta, childValue);

            // Alpha-beta pruning
            if (alpha >= beta) break;
        }
        return [bestMove, minValue];
    }
}