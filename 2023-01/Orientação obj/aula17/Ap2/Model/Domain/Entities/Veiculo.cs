using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Ap2.Domain.Entities
{
    public abstract class Veiculo
    {
        public int Id {get;set;}
        public string Placa{get;set;}
        public string Modelo {get;set;}

        public string Marca {get;set;}
        
    }
}