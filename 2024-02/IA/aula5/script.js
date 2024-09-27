const perguntas = [
    {
        pergunta: "É Homem?",
        subElemento: {
            sim: {
                pergunta: "Ele joga futebol?",
                subElemento: {
                    sim: "Neymar",
                    nao: "Ayrton Senna"
                }
            }
        },
    },
    {
        pergunta: "É Mulher?",
        subElemento: {
            sim: {
                pergunta: "Ela é modelo",
                subElemento: {
                    sim: "Gisele Bündchen",
                    nao: "Margot Robbie"
                }
            }
        },
    },
    {
        pergunta: "É Personagem animado?",
        subElemento: {
            sim: {
                pergunta: "Ele é do Dragon Ball?",
                subElemento: {
                    sim: "Goku",
                    nao: "Naruto"
                }
            }
        },
    },
    {
        pergunta: "É um animal?",
        subElemento: {
            sim: {
                pergunta: "Ele é o melhor amigo do homem?",
                subElemento: {
                    sim: "Cachorro",
                    nao: "Vaca"
                }
            }
        },
    },
];

const arrayDeRespostasPossiveis = ["Neymar", "Ayrton Senna", "Gisele Bündchen", "Margot Robbie", "Goku", "Naruto", "Cachorro", "Vaca"];

// Informa ao usuário para ele pensar em uma das opções válidas
console.log("Pense em uma das opções abaixo para eu tentar adivinhar");
arrayDeRespostasPossiveis.forEach(resposta => {
    console.log(resposta);
});

const readline = require('readline');

const resposta = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

async function fazPergunta(pergunta) {
    return new Promise((resolve) => {
        resposta.question(pergunta, (resposta) => {
            resolve(resposta);
        })
    });
}

async function processarPergunta(perguntaAtual) {
    let respostaUsuario = await fazPergunta(`${perguntaAtual.pergunta} (1 para SIM, 2 para NÃO)\n`);

    if (respostaUsuario == 1) {
        if (typeof perguntaAtual.subElemento.sim === 'string') {
            console.log(perguntaAtual.subElemento.sim);
            resposta.close();
        } else {
            await processarPergunta(perguntaAtual.subElemento.sim);
        }
    } else if (respostaUsuario == 2) {
        if (typeof perguntaAtual.subElemento.nao === 'string') {
            console.log(perguntaAtual.subElemento.nao);
            resposta.close();
        } else {
            await processarPergunta(perguntaAtual.subElemento.nao);
        }
    } else {
        console.log("Resposta inválida. Tente novamente.");
        await processarPergunta(perguntaAtual); // Retry the same question
    }
}

async function iniciarPerguntas(perguntas) {
    for (const perguntaAtual of perguntas) {
        await processarPergunta(perguntaAtual);
        if (resposta.closed) break; // Exit the loop if response is closed
    }
}

iniciarPerguntas(perguntas);