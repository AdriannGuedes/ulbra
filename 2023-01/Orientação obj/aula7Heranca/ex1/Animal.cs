using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ex1
{
    public class Animal
    {
        public string Nome {get;set;}


        public Animal(string nome){
            this.Nome=nome;
        }

        public void Falar(string noise){
            Console.WriteLine(noise);

        }
    }
}