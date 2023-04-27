using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ativ2
{
    public class Escola
    {
        

        public void ApresentarPessoa(IPessoa pessoa)
        {
            pessoa.Falar();
             //a classe Escola recebe uma instância de uma classe que 
             //implementa a interface IPessoa em seu método ApresentarPessoa 
             //e chama o método Falar através desta referência

        }

    }
}