using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ativ2
{
    public class FormatarInvertido : IFormatadorTexto
    {
        public void Formatar(string texto)
        {
            char[] chars = texto.ToCharArray();
            Array.Reverse(chars);
            string textoInvertido = new string(chars);
            Console.WriteLine(textoInvertido);
        }
    }
}