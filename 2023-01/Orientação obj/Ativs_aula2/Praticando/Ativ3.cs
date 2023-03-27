using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace _Praticando
{
    public class Ativ3
    {
        public int num1;

        public int imprimirNum()
        { int i;
            for ( i=2; i<=num1; i++){ 
                int rest = i % 2;
                if (rest==0)
                {
                    Console.WriteLine(i);
                }
            }
            return i;
            
        
        
        }

        public void resultado()
        {
            Console.WriteLine("Insira um número: ");
            num1=Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("----------");

            int resultado=imprimirNum();
            

        }
    }
}