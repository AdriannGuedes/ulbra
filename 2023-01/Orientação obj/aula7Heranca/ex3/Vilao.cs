using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ex3
{
    public class Vilao : Personagem
    {
       public Vilao(string nome, int forca, int inteligencia, string[]poderes):base(nome,forca,inteligencia,poderes){}

        public override void Lutar(Personagem oponente)
        {
            Console.WriteLine(Nome+" esta duelando com "+oponente.Nome);
            Console.WriteLine(Nome+" está dando um show hoje!!!");
            Console.WriteLine(Nome+" venceu a luta!!!");
        }
    }
}