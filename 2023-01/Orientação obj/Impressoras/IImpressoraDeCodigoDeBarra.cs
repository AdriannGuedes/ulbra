using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Impressoras
{
    public interface IImpressoraDeCodigoDeBarra
    {
        void ImprimirEtiquetas(Produto produto);
    }
}