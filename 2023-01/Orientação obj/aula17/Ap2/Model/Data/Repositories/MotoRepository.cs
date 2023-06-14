using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Ap2.Domain.Entities;
using Ap2.Domain.Interfaces;

namespace Ap2.Data.Repositories
{
    public class MotoRepository : IMotoRepository
    {

        private readonly DataContext context;

        public MotoRepository(){
            this.context=new DataContext();
        }

         public IList<Moto> GetAll()
        {
           return context.Motos.ToList();
        }
        public Moto GetById(int entityId)
        {
            return context.Motos.SingleOrDefault(m=>m.Id==entityId);
        }

        public Veiculo GetByPlaca(string placa)
        {
            //como nao existe veiculo no banco, é preciso checar as placas em carros e motos:
            var carro = context.Carros.SingleOrDefault(c=>c.Placa==placa);
            var moto = context.Motos.SingleOrDefault(m=>m.Placa==placa);

            if (moto != null)
            {

                return moto;
            }
            if (carro != null)
            {

                return carro;
            }

            return null;
        }

        public bool Save(Moto entity)
        {
            //primeiro se checa se ja não existe a placa escolhida
            if (GetByPlaca(entity.Placa) != null)
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

        public bool Update(Moto newEntity)
        {
            var temmoto = context.Motos.SingleOrDefault(m=>m.Placa==newEntity.Placa);
            //Cria um objeto com valor igual a "moto existente"

            if (temmoto != null)
            {
                //se encontrar uma moto, atualiza suas propriedades
                temmoto.Modelo = newEntity.Modelo;
                temmoto.Marca = newEntity.Marca;
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