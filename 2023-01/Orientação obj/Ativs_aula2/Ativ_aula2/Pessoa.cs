using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Ativ_aula2
{
    public class Pessoa
    {
        public string nome;
        public int idade;

        public string Nome()
        {
            Console.WriteLine("Digite seu nome: ");
            nome=Console.ReadLine();
            return nome;
        }

        public int Idade()
        {
            Console.WriteLine("Digite sua idade: ");
            idade=Convert.ToInt32(Console.ReadLine());
            return idade;
        } 

        public void Apresentacao()
        {
            string pegarNome=Nome();
            int pegarIdade=Idade();

            Console.WriteLine("Olá "+pegarNome);
            Console.WriteLine("Você tem "+pegarIdade+" anos");
        }
    }
}