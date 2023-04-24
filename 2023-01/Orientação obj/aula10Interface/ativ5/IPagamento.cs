using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ativ5
{
    public interface IPagamento
    {
        void EfetuarPagamento(double valor);
        void ExtornarPagamento(double valor);
    }
}