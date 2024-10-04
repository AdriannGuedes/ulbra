const perguntas = [
    {
        identificador: "verificar-carro-liga",
        pergunta: "O carro liga ou dá algum sinal de funcionamento?",
        respostas: [
            {
                respostaPossivel: "Sim",
                redireciona: "barulho-estranho"
            },
            {
                respostaPossivel: "Não",
                redireciona: "testar-bateria"
            },
            {
                respostaPossivel: "Não sabe/Não tem certeza",
                redireciona: "chamar-mecanico"
            },
        ]
    },
    {
        identificador: "testar-bateria",
        pergunta: "Você testou a bateria e ela apresentou algum problema?",
        respostas: [
            {
                respostaPossivel: "Sim",
                redireciona: "fim",
                diagnostico: "Bateria"
            },
            {
                respostaPossivel: "Não",
                redireciona: "testar-motor-arranque"
            },
            {
                respostaPossivel: "Não sei",
                redireciona: "chamar-mecanico"
            }
        ]
    },
    {
        identificador: "testar-motor-arranque",
        pergunta: "O motor de arranque apresenta algum problema?",
        respostas: [
            {
                respostaPossivel: "Sim",
                redireciona: "fim",
                diagnostico: "Motor de arranque"
            },
            {
                respostaPossivel: "Não",
                redireciona: "testar-alternador"
            },
            {
                respostaPossivel: "Não sei",
                redireciona: "chamar-mecanico"
            }
        ]
    },
    {
        identificador: "barulho-estranho",
        pergunta: "O carro faz algum barulho estranho ao ligar?",
        respostas: [
            {
                respostaPossivel: "Sim",
                redireciona: "verificar-escapamento"
            },
            {
                respostaPossivel: "Não",
                redireciona: "verificar-painel-luzes"
            },
            {
                respostaPossivel: "Não sei",
                redireciona: "chamar-mecanico"
            }
        ]
    },
    {
        identificador: "verificar-escapamento",
        pergunta: "Há algum problema visível no escapamento?",
        respostas: [
            {
                respostaPossivel: "Sim",
                redireciona: "fim",
                diagnostico: "Escapamento"
            },
            {
                respostaPossivel: "Não",
                redireciona: "verificar-painel-luzes"
            }
        ]
    },
    {
        identificador: "verificar-painel-luzes",
        pergunta: "Alguma luz de aviso acende no painel?",
        respostas: [
            {
                respostaPossivel: "Sim",
                redireciona: "verificar-oleo"
            },
            {
                respostaPossivel: "Não",
                redireciona: "fim"
            }
        ]
    },
    {
        identificador: "verificar-oleo",
        pergunta: "O nível do óleo está abaixo do recomendado?",
        respostas: [
            {
                respostaPossivel: "Sim",
                redireciona: "fim",
                diagnostico: "Nível de óleo baixo"
            },
            {
                respostaPossivel: "Não",
                redireciona: "fim"
            }
        ]
    },
    {
        identificador: "chamar-mecanico",
        pergunta: "Você precisará de um mecânico para continuar a análise.",
        respostas: []
    }
];

let diagnosticos = [];
const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

async function fazPergunta(pergunta, respostas) {
    return new Promise((resolve) => {
        let opcoes = "\n";
        for (let index = 0; index < respostas.length; index++) {
            opcoes += `${index} - ${respostas[index].respostaPossivel}\n`;
        }
        rl.question(pergunta + opcoes, (resposta) => {
            resolve(parseInt(resposta, 10));
        });
    });
}

async function processarPergunta(identificador) {
    const node = perguntas.find(item => item.identificador === identificador);

    if (!node || node.respostas.length === 0) {
        return false;
    }

    const respostaIndex = await fazPergunta(node.pergunta, node.respostas);
    const respostaEscolhida = node.respostas[respostaIndex];

    if (respostaEscolhida.diagnostico) {
        diagnosticos.push(respostaEscolhida.diagnostico);
    }

    if (respostaEscolhida.redireciona === 'fim') {
        return false;
    }

    return processarPergunta(respostaEscolhida.redireciona);
}

async function iniciarPerguntas() {
    await processarPergunta("verificar-carro-liga");
    rl.close();

    if (diagnosticos.length > 0) {
        console.log("Problemas identificados no carro:");
        diagnosticos.forEach(d => console.log(d));
    } else {
        console.log("Nenhum problema foi identificado.");
    }
}

iniciarPerguntas();