using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Crud_PessoasCarros.Domain.Entities
{
    public class Cidade
    {
        public int Id {get;set;}
        public string Nome {get;set;}

        public List<Pessoa> pessoas {get; set;}
        
    }
}