const cidades = [
    { nome: "A", x: 2, y: 3 },
    { nome: "B", x: 5, y: 4 },
    { nome: "C", x: 1, y: 7 },
    { nome: "D", x: 6, y: 1 },
    { nome: "E", x: 3, y: 8 }
];

const tamanhoPopulacao = 200;
const mutationRate = 0.01;
const geracoes = 10000;


function calcularDistancia(cidade1, cidade2) {
    const dx = cidade1.x - cidade2.x;
    const dy = cidade1.y - cidade2.y;
    return Math.sqrt(dx * dx + dy * dy);
}


function calcularDistanciaTotal(individuo) {
    let distanciaTotal = 0;
    for (let i = 0; i < individuo.length - 1; i++) {
        distanciaTotal += calcularDistancia(individuo[i], individuo[i + 1]);
    }
    distanciaTotal += calcularDistancia(individuo[individuo.length - 1], individuo[0]);
    return distanciaTotal;
}

function criarIndividuo() {
    const individuo = [...cidades];
    for (let i = individuo.length - 1; i > 0; i--) {
        const j = Math.floor(Math.random() * (i + 1));
        [individuo[i], individuo[j]] = [individuo[j], individuo[i]]; 
    }
    return individuo;
}

function criarPopulacao(tamanho) {
    const populacao = [];
    for (let i = 0; i < tamanho; i++) {
        populacao.push(criarIndividuo());
    }
    return populacao;
}

function aptidao(individuo) {
    const distancia = calcularDistanciaTotal(individuo);
    return 1 / distancia; 
}

function selecao(populacao) {
    const torneio = [];
    for (let i = 0; i < 5; i++) {
        torneio.push(populacao[Math.floor(Math.random() * populacao.length)]);
    }
    torneio.sort((a, b) => aptidao(b) - aptidao(a));
    return torneio[0];
}

function cruzamento(individuo1, individuo2) {
    const tamanho = individuo1.length;
    const filho = Array(tamanho).fill(null);
    const [inicio, fim] = [Math.floor(Math.random() * tamanho), Math.floor(Math.random() * tamanho)].sort((a, b) => a - b);

    for (let i = inicio; i <= fim; i++) {
        filho[i] = individuo1[i];
    }

    let j = 0;
    for (let i = 0; i < tamanho; i++) {
        if (!filho.includes(individuo2[i])) {
            while (filho[j] !== null) {
                j++;
            }
            filho[j] = individuo2[i];
        }
    }

    return filho;
}

function mutacao(individuo) {
    if (Math.random() < mutationRate) {
        const i = Math.floor(Math.random() * individuo.length);
        const j = Math.floor(Math.random() * individuo.length);
        [individuo[i], individuo[j]] = [individuo[j], individuo[i]]; 
    }
    return individuo;
}

function algoritmoGenetico() {
    let populacao = criarPopulacao(tamanhoPopulacao);

    for (let geracao = 0; geracao < geracoes; geracao++) {
        populacao.sort((a, b) => aptidao(b) - aptidao(a));

        console.log(`Geração: ${geracao}, Melhor distância: ${calcularDistanciaTotal(populacao[0])}`);

        const novaPopulacao = [];
        while (novaPopulacao.length < tamanhoPopulacao) {
            const pai1 = selecao(populacao);
            const pai2 = selecao(populacao);
            let filho = cruzamento(pai1, pai2);
            filho = mutacao(filho);
            novaPopulacao.push(filho);
        }

        populacao = novaPopulacao;
    }

    const melhorIndividuo = populacao[0];
    console.log("Melhor caminho encontrado:", melhorIndividuo.map(cidade => cidade.nome));
    console.log("Distância total:", calcularDistanciaTotal(melhorIndividuo));
}

algoritmoGenetico();