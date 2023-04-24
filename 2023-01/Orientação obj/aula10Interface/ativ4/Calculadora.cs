using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ativ4
{
    public class Calculadora : ICalculadora
    {
        public void Somar(int n1, int n2)
        {
            double result = n1+n2;
            Console.WriteLine("A soma é "+result);

        }
         public void Subtrair(int n1, int n2)
        {
            double result = n1-n2;
            Console.WriteLine("O resultado da subtração é "+result);
            
        }
         public void Dividir(int n1, int n2)
        {
            double result = n1/n2;
            Console.WriteLine("A divisão é "+result);
            
        }
         public void Multiplicar(int n1, int n2)
        {
            double result = n1*n2;
            Console.WriteLine("O resultado da multiplicação é "+result);
        }
    }
}