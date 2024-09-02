

 class aluno{
   constructor(nome, matricula,idade,curso){
       this.nome = nome;
       this.matricula = matricula;
       this.idade = idade;
       this.curso = curso;
   } 

   mostrarInfos() {
      return `Nome: ${this.nome}\n Matricula: ${this.matricula}\n Idade: ${this.idade}\n Curso: ${this.curso}`;
   }
    
 }

 const Aluno = new aluno("Adrian", 1278272, 20, "ADS");

//const infosAluno = Aluno.mostrarInfos();

console.log(Aluno.mostrarInfos());