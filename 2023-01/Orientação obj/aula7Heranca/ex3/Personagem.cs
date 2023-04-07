using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ex3
{
 public class Personagem{
    public string Nome { get; set; }
    public int Forca { get; set; }
    public int Inteligencia { get; set; }
    public string[] Poderes { get; set; }
    //construtor para usar nas heranças:

    public Personagem(string nome, int forca, int inteligencia, string[]poderes){
        Nome=nome;
        Forca=forca;
        Inteligencia=inteligencia;
        Poderes=poderes;
    }

    public virtual void Lutar(Personagem oponente){
        Console.WriteLine(Nome+" está lutando com "+oponente.Nome);
        // virtual é usado para saber que este metodo pode ser subscrito em uma classe que herda este método
        //com a palavra chave override

    }

    }

    


     

    
}
    
