using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Crud_PessoasCarros.Domain.Entities
{
    public class Pessoa
    {
        public int Id {get;set;}

        public string Nome {get;set;}

        public string Telefone {get;set;}

        public string Endereco {get;set;}

        public Cidade Cidade {get;set;} 
    }
}