using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Crud_PessoasCarros.Domain.Entities;
using Crud_PessoasCarros.Domain.Interfaces;


namespace Crud_PessoasCarros.Data.Repositories
{
    public class CarroRepository : ICarroRepository
    {

        private readonly DataContext context;

        public CarroRepository(DataContext context)
        {
            this.context = context;
        }
        public bool Delete(int entityId)
        {
            var Carro = GetById(entityId);
            context.Remove(Carro);
            context.SaveChanges();
            return true;
        }

        public IList<Carro> GetAll()
        {
            return context.Carros.ToList();
        }

        public Carro GetById(int entityId)
        {
            return context.Carros.SingleOrDefault(c => c.Id == entityId);
        }

        public void Save(Carro entity)
        {
            context.Add(entity);
            context.SaveChanges();
        }

        public void Update(Carro entity)
        {
            context.Carros.Update(entity);
            context.SaveChanges();
           
            
        }
        

        
    }

}