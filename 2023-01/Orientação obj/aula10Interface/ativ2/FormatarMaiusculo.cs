using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ativ2
{
    public class FormatarMaiusculo : IFormatadorTexto
    {
        public void Formatar(string texto)
        {
            string textoEmMaiusculo = texto.ToUpper();
            Console.WriteLine(textoEmMaiusculo); 
        }
    }
}