using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace _Praticando
{
    public class Ativ2
    {
        public int n1;
        public int n2;
        public int n3;

        public double media()
        {
            return (n1+n2+n3)/3;
        }

        public void result()
        {
            Console.WriteLine("Informe a primeira nota: ");
            n1=Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Informe a segunda nota: ");
            n2=Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Informe a terceira nota: ");
            n3=Convert.ToInt32(Console.ReadLine());

            double mediafinal=media();
            Console.WriteLine("A sua média é "+mediafinal);
        }




    }
}