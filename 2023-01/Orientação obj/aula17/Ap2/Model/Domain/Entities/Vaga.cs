using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Ap2.Domain.Entities
{
    public class Vaga
    {
        public int Id {get;set;}
        public int? VeiculoId {get;set;}
        public Veiculo? Estacionado {get;set;}
    }
}