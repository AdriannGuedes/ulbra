// const data = [
//     { nome: "Daniel", idade: 25 },
//     { nome: "Maria", idade: 30 },
//     { nome: "João", idade: 22 },
//     { nome: "Ana", idade: 28 }
//   ];
  
//   // Função que cria a lista e insere no innerHTML do <ul>
//   function exibirPessoas() {
//     // Recupera o <ul> pelo ID
//     const ulElement = document.getElementById("idDesejado");
  
//     // Transforma o array de objetos em <li> usando map
//     const listaPessoas = data.map(item => {
//       return `<li>${item.nome} - ${item.idade} anos</li>`;
//     }).join(''); // .join('') para remover as vírgulas da lista
  
//     // Insere os <li> no innerHTML do <ul>
//     ulElement.innerHTML = listaPessoas;
//   }
  
//   // Chama a função para exibir a lista de pessoas
//   exibirPessoas();

const ola = mensagem => {
  console.log(mensagem)
}

const ola2 = function (mensagem) {
  console.log(mensagem)
}

ola("Olá")
ola2("Olá")