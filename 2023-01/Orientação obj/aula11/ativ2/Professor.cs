using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ativ2
{
    public class Professor : IPessoa
    {
        public string nome{get; set;}
        public int idade{get;set;}
        public Professor(string nome, int idade){
            this.idade=idade;
            this.nome=nome;

        }
        public void Falar()
        {
            Console.WriteLine("Olá eu sou o professor "+nome+" e tenho "+idade+" anos.");
        }
    }
}