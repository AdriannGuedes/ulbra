public class Biblioteca {

    Livro livro1;
    Livro livro2;
    Livro livro3;
    Livro livro4;
    Livro livro5;

    public void AdicionarLivro(Livro livro)
    {
        if (livro1 == null)
        {
            livro1=livro;
            System.out.println("Titulo: "+ livro.getTitulo()+ " Autor: "+ livro.getAutor()+" Ano Publicação: "+livro.getAnoPublicacao());
        }
        else if(livro2 == null)
        {
            livro2=livro;
            System.out.println("Titulo: "+ livro.getTitulo()+ " Autor: "+ livro.getAutor()+" Ano Publicação: "+livro.getAnoPublicacao());;
        } else if (livro3 == null)
        {
            livro3=livro;
            System.out.println("Titulo: "+ livro.getTitulo()+ " Autor: "+ livro.getAutor()+" Ano Publicação: "+livro.getAnoPublicacao());
        } else if (livro4 == null)
        {
            livro4=livro;
            System.out.println("Titulo: "+ livro.getTitulo()+ " Autor: "+ livro.getAutor()+" Ano Publicação: "+livro.getAnoPublicacao());
        } else if (livro5 == null)
        {
            livro5=livro;
            System.out.println("Titulo: "+ livro.getTitulo()+ " Autor: "+ livro.getAutor()+" Ano Publicação: "+livro.getAnoPublicacao());
        }
        else
        {
            System.out.println("Sem espaço na memória");
        }
    }

    public void RemoverLivro(Livro livro)
    {
        if (livro1 == livro)
        {
            livro1=null;
            System.out.println("\n" +livro.getTitulo()+" deletado");
        } else if (livro2 == livro)
        {
            livro2=null;
            System.out.println("\n" +livro.getTitulo()+" deletado");
        }
        else if(livro3 == livro)
        {
            livro3=null;
            System.out.println("\n" +livro.getTitulo()+" deletado");
        }
        else if(livro4 == livro)
        {
            livro4=null;
            System.out.println("\n" +livro.getTitulo()+" deletado");
        }
        else if(livro5 == livro)
        {
            livro5=null;
            System.out.println("\n" +livro.getTitulo()+" deletado");
        }

    }

    public void AtualizarLivro(Livro livro, String novoTitulo, String novoAutor, int novoAnoPublicacao)
    {
        livro.setTitulo(novoTitulo);
        livro.setAutor(novoAutor);
        livro.setAnoPublicacao(novoAnoPublicacao);
        System.out.println("Livro atualizado");
    }

    public boolean VerificarDisponibilidadeLivro(Livro livro)
    {
        return livro.isDisponibilidade();
    }

}
