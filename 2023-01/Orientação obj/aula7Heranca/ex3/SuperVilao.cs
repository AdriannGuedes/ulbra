using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ex3
{
    public class SuperVilao : Vilao {
        
        public SuperVilao(string nome, int forca, int inteligencia, string[]poderes):base(nome,forca,inteligencia,poderes){}

        public void SuperPoder(){
            Console.WriteLine(Nome+" usou seu super poder");

        }


    }
}