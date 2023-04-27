using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace aula11
{
    public class Cliente
    {
        
        private IPagamento pagamento;

        public Cliente(IPagamento pagamento)
        {
            this.pagamento=pagamento;
        }

        public void Comprar(double valor)
        {
            pagamento.Pagar(valor);
        }
    }
}