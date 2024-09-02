function carregar(){
    Home()
    document.getElementById('home').addEventListener('click', Home)
    document.getElementById('sobre').addEventListener('click', Sobre)
    document.getElementById('contato').addEventListener('click', Contato)
}

function Home() {
    const main = document.getElementById('main')
    main.innerHTML = `
    <h1>Home</h1>
    <p>Minha pág</p>
    `
}

function Sobre(){
    const main = document.getElementById('main')
    main.innerHTML = `
    <h1>Página Sobre</h1>
    `
}

function Contato(){
    const main = document.getElementById('main')

    //main.classList.add('temaDark')

    main.innerHTML = `
    <h1>Cadastro</h1>
    <form>
    <input id="nome" placeholder="Digite seu nome...">
    <br><br>
    <input id="email" type="email" placeholder="Digite seu email...">
    <br><br>
    <input  id="telefone" placeholder="Digite seu telefone...">
    <br><br>
    <button type="button" id="bntSalvar">Salvar</button>
    </form>
    `

    document.getElementById('btnSalvar').addEventListener('click', mostrarDados)
}

function mostrarDados(){
    const main = document.getElementById('main')
    const nome = document.getElementById('nome').value
    const email = document.getElementById('email').value
    const telefone = document.getElementById('telefone').value

    const contato = {
        nome:nome,
        email:email,
        telefone:telefone
    }

    main.innerHTML += `
     <p>${contato.nome}</p>
     <p>${contato.email}</p>
     <p>${contato.telefone}</p>
    `

    return contato
}