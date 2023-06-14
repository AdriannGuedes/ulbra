using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Ap2.Domain.Entities;
using Ap2.Domain.Interfaces;

namespace Ap2.Data.Repositories
{
    public class CarroRepository : ICarroRepository
    {
        private readonly DataContext context;

        public CarroRepository()
        {
            this.context=new DataContext();
        }

        

        public IList<Carro> GetAll()
        {
           return context.Carros.ToList();
        }

        public Carro GetById(int entityId)
        {
             return context.Carros.SingleOrDefault(a => a.Id == entityId);
        }

        public Veiculo GetByPlaca(string placa)
        {
            var carro = context.Carros.SingleOrDefault(g=>g.Placa==placa);
            var moto = context.Motos.SingleOrDefault(j=>j.Placa==placa);

            if (carro != null)
            {

                return carro;
            }
            if (moto != null)
            {

                return moto;
            }

            return null;

        }
        

        public bool Save(Carro entity)
        {
            if(GetByPlaca(entity.Placa) != null)
            {

                return false;
            }
            else
            {

                context.Add(entity);
                context.SaveChanges();
                return true;
            }
        }

        public bool Update(Carro newEntity)
        {
            var temcarro = context.Carros.SingleOrDefault(i=>i.Placa==newEntity.Placa);

            if (temcarro != null)
            {
                temcarro.Modelo=newEntity.Modelo;
                temcarro.Marca=newEntity.Marca;
                context.SaveChanges();
                return true;
                
            }
            else
            {
                return false;

            }
        }

        public bool Delete(int entityId)
        {
            var deletar = GetById(entityId);

            if (deletar != null)
            {
                context.Remove(deletar);
                context.SaveChanges();
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}