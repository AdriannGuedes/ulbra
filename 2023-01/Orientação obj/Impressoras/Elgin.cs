using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Impressoras
{
    public class Elgin : IImpressoraDeCodigoDeBarra
    {
        public void ImprimirEtiquetas(Produto produto)
        {
            
            Console.WriteLine("Elgin");
            Console.WriteLine("---------");
            Console.WriteLine("Resolução: 300dpi \nTamanho da etiqueta: 10cm x 5cm \nTipo de etiqueta: Papel adesivo");
            Console.WriteLine("Imprimindo código de barras : "+produto.codBarra);
        }
    }
}