using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace _Praticando
{
    public class Ativ1
    {
        public int n1;

        public string parImpar(int n1)
        {
            string retorno;
            if(n1%2==0)
            {
                retorno="Par";
            }
            else{
                retorno="Ímpar";
            }
            return retorno;

            

        }

        public void mensagem()
        {
            Console.WriteLine("Digite um número");
            n1=Convert.ToInt32(Console.ReadLine());
            string parouimpar=parImpar(n1);

            Console.WriteLine("O número "+n1+" é "+parouimpar);
        }
    }
}