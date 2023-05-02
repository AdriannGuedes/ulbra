using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Impressoras
{
    public class Zebra : IImpressoraDeCodigoDeBarra
    {
        public void ImprimirEtiquetas(Produto produto)
        {
            Console.WriteLine("\n");
            Console.WriteLine("Zebra");
            Console.WriteLine("--------------");
            Console.WriteLine("Resolução: 600dpi \nTamanho da etiqueta: 15cm x 7cm \nTipo de etiqueta: Poliéster");
            Console.WriteLine("Imprimindo código de barras : "+produto.codBarra);
        }
        
    }
}