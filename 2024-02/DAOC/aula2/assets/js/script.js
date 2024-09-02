

function mudarTitulo() {
    const titulo = document.getElementById('titulo')

    titulo.style.fontSize = "60px"
    titulo.style.color = "green"
    titulo.innerText = "Deu ruim mestre"
}

const button = document.querySelector('button')

button.style.padding = "10px"
button.style.display = "block"
button.style.margin = "10px auto"