public class Main {
    public static void main(String[] args) {
        Pessoa adrian = new Pessoa();
        Pessoa pessoa2 = new Pessoa("Alisson", "alisson@gmail.com");

        //adrian.nome = "Adrian";
        adrian.setNome("Adrian");
        //adrian.email = "adrianguedes902@gmail.com";
        adrian.setEmail("adrianguedes902@gmail.com");
        adrian.logar();
        System.out.println("Nome: "+ adrian.getNome());
        System.out.println("Email: "+ adrian.getEmail());

        Professor prof1 = new Professor("Juliano", "juliano@gmail.con");
        prof1.logar();

        Aluno aluno1 = new Aluno();
        aluno1.setNome("Ana");
        Aluno a2 = new Aluno();
        a2.setNome("Bernardo");

        Turma turma1 = new Turma("Estrutura de Dados", prof1, 30);

        turma1.inserirAluno(aluno1);
        turma1.inserirAluno(a2);
        turma1.listarAlunos();



    }
}