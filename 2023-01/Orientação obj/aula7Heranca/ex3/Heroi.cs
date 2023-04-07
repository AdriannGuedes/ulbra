using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ex3
{
    public class Heroi : Personagem
    {
        public Heroi(string nome, int forca, int inteligencia, string[]poderes):base(nome, forca, inteligencia, poderes){}
        //metodo que sobrescreve o personagem como heroi e manda os atributos para a classe base

        public override void Lutar(Personagem oponente){
            Console.WriteLine(Nome+" está lutando com "+oponente.Nome);
            Console.WriteLine(Nome+" está atacando");
            Console.WriteLine(Nome+" Venceu!!!!");

        }
        
    }
}