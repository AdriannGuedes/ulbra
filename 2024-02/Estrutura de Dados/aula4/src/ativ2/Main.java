package ativ2;

public class Main {
    public static void main(String[] args) {
        Funcionario func1 = new Funcionario( "Roberto", 1000);
        Funcionario func2 = new Funcionario("Ana", 1500);
        Funcionario func3 = new Funcionario( "Xuxa", 2000);
        //System.out.println(func1);

        Funcionario[] funcionarios = {func1, func2, func3};
        OrdenarFunc.ordemAlfabetica(funcionarios);

        OrdenarFunc.ordemAlfabetica(funcionarios);
        System.out.println("Ordem Alfabética:");
        for (Funcionario f : funcionarios) {
            System.out.println(f);
        }

        // Ordenar por salário crescente
        OrdenarFunc.salCrescente(funcionarios);
        System.out.println("\nOrdem Crescente de Salário:");
        for (Funcionario f : funcionarios) {
            System.out.println(f);
        }

        // Ordenar por salário decrescente
        OrdenarFunc.salDecrescente(funcionarios);
        System.out.println("\nOrdem Decrescente de Salário:");
        for (Funcionario f : funcionarios) {
            System.out.println(f);
        }
    }
}
