public class Main {
    public static void main(String[] args) {

        Biblioteca biblioteca = new Biblioteca();

       Livro livro1 = new Livro("Carros", "Brian", 2000, true);
       Livro livro2 = new Livro("Motos", "Tiago", 2001, false);
       Livro livro3 = new Livro("Barcos", "João", 20010, true);
       Livro livro4 = new Livro("Lanchas", "Lucas", 2020, true);
       Livro livro5 = new Livro("Bikes", "Dalpz", 2023, true);
       Livro livro6 = new Livro("Biks", "Dalpz", 2023, true);

       biblioteca.AdicionarLivro(livro1);
       biblioteca.AdicionarLivro(livro2);
       biblioteca.AdicionarLivro(livro3);
       biblioteca.AdicionarLivro(livro4);
       biblioteca.AdicionarLivro(livro5);
       biblioteca.AdicionarLivro(livro6);

       System.out.println("----------");

       biblioteca.AtualizarLivro(livro2, "Fiat", "Marquins", 1984 );

       System.out.println("----------");

       biblioteca.RemoverLivro(livro4);

       System.out.println("----------");

       boolean disponibilidade = biblioteca.VerificarDisponibilidadeLivro(livro2);
       if (disponibilidade)
       {
          System.out.println("O livro está disponivel");
       }
       else {
          System.out.println("O livro está indispinivel");
       }









    }
}