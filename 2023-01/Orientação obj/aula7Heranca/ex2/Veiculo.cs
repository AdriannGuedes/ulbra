using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ex2
{
    public class Veiculo
    {
        public string Modelo{get;set;}
        public Veiculo(string modelo){
            this.Modelo=modelo;
        }

        public void Acelerar(){
            Console.WriteLine("Acelerando "+this.Modelo+" !!");
        }
    }
}