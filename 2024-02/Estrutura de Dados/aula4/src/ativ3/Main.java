package ativ3;

public class Main {
    public static void main(String[] args) {
        Aluno[] alunos = new Aluno[8];
        alunos[0] = new Aluno("Carlos", 8.5, 7.0);
        alunos[1] = new Aluno("Ana", 6.0, 5.5);
        alunos[2] = new Aluno("Bruno", 7.5, 6.0);
        alunos[3] = new Aluno("Diana", 9.0, 8.5);
        alunos[4] = new Aluno("Eva", 4.0, 5.0);
        alunos[5] = new Aluno("Felipe", 10.0, 9.0);
        alunos[6] = new Aluno("Gabriel", 3.5, 4.5);
        alunos[7] = new Aluno("Heloisa", 7.0, 7.0);

        // Ordenar por média crescente
        OrdenarAluno.ordenarPorMedia(alunos);
        System.out.println("Alunos em ordem crescente de média:");
        for (Aluno aluno : alunos) {
            System.out.println(aluno);
        }

        // Filtrar e ordenar aprovados em ordem alfabética
        Aluno[] aprovados = OrdenarAluno.filtrarAprovados(alunos);
        OrdenarAluno.ordenarAprovados(aprovados);
        System.out.println("\nAprovados em ordem alfabética:");
        for (Aluno aprovado : aprovados) {
            System.out.println(aprovado);
        }

        // Filtrar e ordenar reprovados em ordem alfabética
        Aluno[] reprovados = OrdenarAluno.filtrarReprovados(alunos);
        OrdenarAluno.ordenarReprovados(reprovados);
        System.out.println("\nReprovados em ordem alfabética:");
        for (Aluno reprovado : reprovados) {
            System.out.println(reprovado);
        }
    }

}

