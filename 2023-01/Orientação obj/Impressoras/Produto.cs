using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Impressoras
{
    public class Produto
    {
        private int id{get;set;}
        public int codBarra{get;set;}
        private double preco{get;set;}

        public Produto(int id, int codBarra, double preco)
        {
            this.id=id;
            this.codBarra=codBarra;
            this.preco=preco;
        }

    }
}