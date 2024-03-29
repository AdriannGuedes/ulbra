using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Ap1_Estacionamento
{
    public class CarroRepository
    {
         public static List<Carro> listCarros;
        private VagaRepository vagaRepo;

        public CarroRepository(VagaRepository vagRep){

            listCarros = new List<Carro>();
            this.vagaRepo = vagRep;
        }

        
        public List<Carro> ConferirTodosCarros(){

            return listCarros;
        }


        public bool UnicidadePlaca(string placa){

            return listCarros.Any(a => a.Placa == placa);
        }

        public void CadastrarCarro(Carro novoCar){

            if (UnicidadePlaca(novoCar.Placa)){

                Console.WriteLine("Já existe um carro com essa placa.");
                return;
            }
            listCarros.Add(novoCar);
        }

        public Carro ConferirCarro(string placa){
        
            var ResultCarro = listCarros.Find(b => b.Placa == placa);
            if (ResultCarro == null){

                Console.WriteLine("Não existe carro de placa "+placa);
            }
            return ResultCarro;
        }

        public void AtualizarCarro(string placa, string newPlaca, string newModelo, double newGas){

            int checkPlaca = listCarros.FindIndex(c => c.Placa == placa);

            if(checkPlaca == -1){

                Console.WriteLine("Placa inexistente");
                return;
            }
            if(UnicidadePlaca(newPlaca)){

                Console.WriteLine("Já existe um carro com essa placa no sistema");
                return;
            }

             listCarros[checkPlaca].reSetPlaca(newPlaca);
            listCarros[checkPlaca].reSetModelo(newModelo);
            listCarros[checkPlaca].Combustivel = newGas;

            Console.WriteLine("Placa: "+newPlaca+" | Modelo: "+newModelo+" | Tanque: "+newGas+"L");
        }

        public void RemoverCarro(string placa, int minEstacionados){

            Carro carRemoval = null;

            foreach(Carro carroPlaca in listCarros){

                if(carroPlaca.Placa == placa){

                    carRemoval = carroPlaca;
                    break;
                }
            }
            if(carRemoval != null){

                listCarros.Remove(carRemoval);
                vagaRepo.Desocupar(carRemoval,minEstacionados);
                
                Console.WriteLine("Removido do sistema carro de placa "+placa);
            }
        }
         


    }
}