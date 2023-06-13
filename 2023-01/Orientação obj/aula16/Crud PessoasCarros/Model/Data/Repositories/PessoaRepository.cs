using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Crud_PessoasCarros.Domain.Entities;
using Crud_PessoasCarros.Domain.Interfaces;
using Microsoft.EntityFrameworkCore;

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
            return context.Pessoas.Include(x=>x.Cidade).ToList();
        }

        public Pessoa GetById(int entityId)
        {
            return context.Pessoas.Include(x=>x.Cidade).SingleOrDefault(p=>p.Id == entityId );
        }

        public void Save(Pessoa entity)
        {
            // entity.Cidade = context.Cidades.Find(entity.Cidade.Id);
           context.Add(entity);
           context.SaveChanges();
        }

        public void Update(Pessoa entity)
        {
            
            context.Pessoas.Update(entity);
            context.SaveChanges();
          
            
           
        }
    }
}