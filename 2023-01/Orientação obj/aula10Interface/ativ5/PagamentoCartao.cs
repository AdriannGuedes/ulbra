using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ativ5
{
    public class PagamentoCartao : IPagamento
    {
         public void EfetuarPagamento(double valor)
        {
            Console.WriteLine("Pagamento de R$"+valor+" efetuado no cartão");

        }

        public void ExtornarPagamento(double valor)
        {
            Console.WriteLine("Estorno de pagamento de R$"+valor+" no cartão");
        }
    }
}