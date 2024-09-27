let contato = {};

// Navegação da SPA
const links = document.querySelectorAll('#menu a');
const pages = document.querySelectorAll('.page');

function showPage(pageId) {
  pages.forEach(page => {
    if (page.id === pageId) {
      page.style.display = 'block';
    } else {
      page.style.display = 'none';
    }
  });
}

// Mostra a página de home ao iniciar
showPage('home');

links.forEach(link => {
  link.addEventListener('click', (event) => {
    event.preventDefault();
    const page = link.getAttribute('data-page');
    showPage(page);
  });
});

// Manipulação do formulário de contato
const contactForm = document.getElementById('contactForm');
const contactBody = document.getElementById('contactBody');
const tableContact = document.getElementById('tableContact');

contactForm.addEventListener('submit', (event) => {
  event.preventDefault();

  // Armazenando os dados no objeto literal
  contato = {
    nome: document.getElementById('nome').value,
    email: document.getElementById('email').value,
    telefone: document.getElementById('telefone').value,
  };

  // Exibindo os dados na tabela
  contactBody.innerHTML = `
    <tr>
      <td>${contato.nome}</td>
      <td>${contato.email}</td>
      <td>${contato.telefone}</td>
    </tr>
  `;

  // Mostrando a tabela após submissão
  tableContact.style.display = 'table';

  // Limpa o formulário após o envio
  contactForm.reset();
});