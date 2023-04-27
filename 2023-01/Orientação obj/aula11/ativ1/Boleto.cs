using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace aula11
{
    public class Boleto : IPagamento
    {
        public void Pagar(double valor)
        {
            Console.WriteLine("Pago com boleto no valor de R$: "+valor);

        }
    }
}