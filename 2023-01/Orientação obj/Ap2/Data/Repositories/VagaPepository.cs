using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Ap2.Domain.Entities;
using Ap2.Domain.Interfaces;

namespace Ap2.Data.Repositories
{
    public class VagaPepository : IVagaRepository
    {

        private readonly DataContext dbContext;

        public VagaPepository(DataContext context)
        {
            this.dbContext=context;

        }
        

        public IList<Vaga> GetAll()
        {
           return dbContext.Vagas.ToList();
        }

        public Vaga GetById(int entityId)
        {
            return dbContext.Vagas.SingleOrDefault(v=>v.Id==entityId);
        }

        public bool Save(Vaga entity)
        {
            dbContext.Add(entity);
            dbContext.SaveChanges();
            return true;
        }

        public bool Update(Vaga newEntity)
        {
            dbContext.Vagas.Update(newEntity);
            dbContext.SaveChanges();
            return true;
        }

        public bool Delete(int entityId)
        {
            var deletar = GetById(entityId);
            dbContext.Remove(deletar);
            dbContext.SaveChanges();
            return true;
        }

        public Vaga FindVaga()
        {
            return dbContext.Vagas.FirstOrDefault(p=>p.Estacionado==null);
            //aqui procuramos a primeira vaga livre no estacionamento, com FirsOrDefault
        }

        public bool ParkVehicle(int idVei)
        {
            //variavel para avhar a vaga
            Vaga checkVaga = FindVaga();
            
            var acharMoto = dbContext.Motos.SingleOrDefault(m=>m.Id==idVei);
            var acharCarro = dbContext.Carros.SingleOrDefault(c=>c.Id==idVei); 

            //aqui puxa se o veiculo ja esta em outra vaga
            var conferirOneToOne = dbContext.Vagas.FirstOrDefault(o=>o.Estacionado!=null & o.VeiculoId==idVei);

            //aqui testa se tem outro veiculo ou nao 
            if (conferirOneToOne != null)
            {
                return false;
            } 

            //aqui confere se tem vagas disponiveis 
            if (checkVaga == null)
            {
                return false;
            }

            //aqui inserimos o veiculo na vaga:
            if(acharCarro != null & acharMoto == null)
            {
                checkVaga.VeiculoId = idVei;
                checkVaga.Estacionado = acharCarro;
                dbContext.SaveChanges();
                return true;
            }
            else if (acharCarro == null & acharMoto != null)
            {
                checkVaga.VeiculoId = idVei;
                checkVaga.Estacionado = acharMoto;
                dbContext.SaveChanges();
                return true;
            }
            else{
                return false;
            }

        }

        public bool releaseVagancy(int idVei)
        {
            //Variavel para achar uma vaga que possua
            //um VeiculoId igual aquele passado por parâmetro
            //Logo, uma vaga ocupada, pelo veículo específico
            //que estamos procurando
            var vagaComVeiculo = dbContext.Vagas.FirstOrDefault(m=>m.VeiculoId==idVei);

            if (vagaComVeiculo == null)
            {
                //em caso de nao te veiculo na vaga selecionada retorna false
                return false;
            }

            //aqui atualizamos a propriedade de veiculoId da instancia de vaga pra nulo, liberando assim a vaga
            vagaComVeiculo.VeiculoId=null;
            dbContext.SaveChanges();
            return true;

        }

         public List<Vaga> GetAllParked()
        {
            //SELECT *
            //FROM Vagas
            //WHERE Estacionado IS NOT NULL

            return dbContext.Vagas.Where(n=>n.Estacionado!=null).ToList();
        }

        public List<Vaga> GetAllEmpty()
        {
             //SELECT *
            //FROM Vagas
            //WHERE Estacionado IS NULL
            return dbContext.Vagas.Where(p=>p.Estacionado==null).ToList();
        }
    }
}