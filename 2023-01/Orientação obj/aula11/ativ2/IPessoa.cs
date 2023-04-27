using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace ativ2
{
    public interface IPessoa
    {
        public string nome{get;set;}
        public int idade{get;set;}
        public void Falar();
    }
}