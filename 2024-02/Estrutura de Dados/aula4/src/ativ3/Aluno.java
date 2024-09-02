package ativ3;

public class Aluno {
        private String nome;
        private double nota1;
        private double nota2;
        private double media;

        public Aluno(String nome, double nota1, double nota2) {
            this.nome = nome;
            this.nota1 = nota1;
            this.nota2 = nota2;
            this.media = calcularMedia();
        }

        public String getNome() {
            return nome;
        }

        public double getNota1() {
            return nota1;
        }

        public double getNota2() {
            return nota2;
        }

        public double getMedia() {
            return media;
        }

        private double calcularMedia() {
            return (nota1 + nota2) / 2.0;
        }

        @Override
        public String toString() {
            return "Nome: " + nome + "\nNota 1: " + nota1 + "\nNota 2: " + nota2 + "\nMédia: " + media;
        }
}
