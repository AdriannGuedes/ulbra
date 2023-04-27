using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace aula11
{
    public class CartaoCredito : IPagamento
    {
        public void Pagar(double valor)
        {
            Console.WriteLine("Pago com cartão de crédito no valor de R$: "+valor);

        }
    }
}