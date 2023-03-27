using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace aula04
{
    public class LivroRepository
    {
        public static List<Livro> books=new List<Livro>();

        public List<Livro>GetAll(){
            return books;
        }
        public Livro GetById(int id){
            return books.Find(li=>li.Id==id);
        }

        public void Deletar(int id){

        }

        public void Create(Livro livro){
            books.Add(livro);

        }
    }
}