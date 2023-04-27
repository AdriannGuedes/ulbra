using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace aula11
{
    public interface IPagamento
    {
        void Pagar(double valor);
    }
}