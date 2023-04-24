using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ativ2
{
    public class FormatarMinusculo : IFormatadorTexto
    {
        public void Formatar(string texto)
        {
            string textoMinusculo = texto.ToLower();
            Console.WriteLine(textoMinusculo);
        }
    }
}