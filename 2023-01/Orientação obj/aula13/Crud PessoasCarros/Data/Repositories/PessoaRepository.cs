using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Crud_PessoasCarros.Domain.Entities;
using Crud_PessoasCarros.Domain.Interfaces;

namespace Crud_PessoasCarros.Data.Repositories
{
    public class PessoaRepository : IPessoaRepository
    {

        private readonly DataContext context;

        public PessoaRepository(DataContext context)
        {
            this.context=context;
        }

        public bool Delete(int entityId)
        {
           var Pessoa = GetById(entityId);
           context.Remove(Pessoa);
           context.SaveChanges();
           return true;
        }

        public IList<Pessoa> GetAll()
        {
            return context.Pessoas.ToList();
        }

        public Pessoa GetById(int entityId)
        {
            return context.Pessoas.SingleOrDefault(p=>p.Id == entityId );
        }

        public void Save(Pessoa entity)
        {
           context.Add(entity);
           context.SaveChanges();
        }

        public void Update(Pessoa entity)
        {
           var AlterarPessoa = context.Pessoas.Find(entity.Id);//encontra a pessoa pelo Id
           if (AlterarPessoa != null)
           {
            //atualiza as informações desejadas
            AlterarPessoa.Nome = entity.Nome;
            AlterarPessoa.Endereco = entity.Endereco;
            AlterarPessoa.Telefone = entity.Telefone;
            
            context.SaveChanges();
            
           }
        }
    }
}