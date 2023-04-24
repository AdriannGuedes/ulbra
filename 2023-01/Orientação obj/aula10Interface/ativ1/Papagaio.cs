using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace aula10Interface
{
    public class Papagaio : IAnimal
    {
        public void ExibirSom()
        {
            Console.WriteLine("Ricooo");
        }
    }
}