using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ativ4
{
    public interface ICalculadora
    {
        void Somar(int n1, int n2);
        void Subtrair(int n1, int n2);
        void Dividir(int n1, int n2);
        void Multiplicar(int n1, int n2);
    }
}