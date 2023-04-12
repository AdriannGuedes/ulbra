using Ap1_Estacionamento;

VagaRepository VagaRepo = new VagaRepository(20);
CarroRepository CarRepo = new CarroRepository(VagaRepo);
MotoRepository BikRepo = new MotoRepository(VagaRepo);

int resetMenu = 1;
int selectMenu;
int selectType;
int selectVaga;
string existPlaca = "";
string newPlaca = "";
string newModelo = "";
double newTanque = 0d;
int selectVagaNum;
int selectRead;
int minParked = 3;

while(resetMenu != 0){

    Console.WriteLine("Bem vindo ao sistema de controle de estacionamento //BRAND HERE//");
    Console.WriteLine("Selecione uma opção para efetuar");
    Console.WriteLine("1- Inserir Veículo\t2- Conferir Vagas\t3- Corrigir Veículo\t4- Liberar Vaga\t5- Sair do sistema\n");
    selectMenu = Convert.ToInt32(Console.ReadLine());

    switch(selectMenu){

        case 1:

            Console.Clear();
            Console.WriteLine("O veículo a ser inserido é uma moto ou um carro?\n1- Moto\t2- Carro\n");
            selectType = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("O veículo será estacionado em qualquer vaga ou uma em específico?\n1- Primeira Disponível\t2- Vaga Específica");
            selectVaga = Convert.ToInt32(Console.ReadLine());
                switch(selectType){

                    case 1:

                        Console.WriteLine("Insira a placa da moto (Única):\n");
                        newPlaca = Console.ReadLine();
                        Console.WriteLine("\nInsira o modelo da moto:\n");
                        newModelo = Console.ReadLine();
                        Console.WriteLine("\nPor medida de segurança, insira o volume de gasolina no tanque (em litros):\n");
                        newTanque = Convert.ToDouble(Console.ReadLine());

                        if(selectVaga == 2){

                            Console.WriteLine("\nEscolha a vaga onde inserir o veículo (Limite 30)");
                            selectVagaNum = Convert.ToInt32(Console.ReadLine());

                            Moto bike = new Moto(newPlaca, newModelo, newTanque);
                            BikRepo.CadastrarMoto(bike);
                            VagaRepo.Ocupar(bike, selectVagaNum);
                        }else{

                            Moto bike = new Moto(newPlaca, newModelo, newTanque);
                            BikRepo.CadastrarMoto(bike);
                            VagaRepo.Ocupar(bike);
                        }
                        break;
                    case 2:

                        Console.WriteLine("Insira a placa do carro (Única):\n");
                        newPlaca = Console.ReadLine();
                        Console.WriteLine("\nInsira o modelo do carro:\n");
                        newModelo = Console.ReadLine();
                        Console.WriteLine("\nPor medida de segurança, insira o volume de gasolina no tanque (em litros):\n");
                        newTanque = Convert.ToDouble(Console.ReadLine());

                        if(selectVaga == 2){

                            Console.WriteLine("\nEscolha a vaga onde inserir o veículo (Limite 30)");
                            selectVagaNum = Convert.ToInt32(Console.ReadLine());

                            Carro car = new Carro(newPlaca, newModelo, newTanque);
                            CarRepo.CadastrarCarro(car);
                            VagaRepo.Ocupar(car, selectVagaNum);
                        }else{

                            Carro car = new Carro(newPlaca, newModelo, newTanque);
                            CarRepo.CadastrarCarro(car);
                            VagaRepo.Ocupar(car);
                        }
                        break;
                    default:

                        Console.WriteLine("O tipo de veículo inserido não é compatível com o sistema.\n");
                        break;
                }
            break;
        case 2:

            Console.Clear();
            Console.WriteLine("Deseja conferir um veículo específico ou todas as vagas do estacionamento?\n1- Veículo\t2- Estacionamento\n");
            selectRead = Convert.ToInt32(Console.ReadLine());

            switch(selectRead){

                case 1:

                    Console.WriteLine("Procurar por uma moto ou um carro?\n1- Moto\t2- Carro\n");
                    selectType = Convert.ToInt32(Console.ReadLine());
                    Console.WriteLine("Insira a placa a ser procurada: ");
                    existPlaca = Console.ReadLine();

                    switch(selectType){
                        case 1:
                            
                            var checarMotoIndividual = BikRepo.ConferirMoto(existPlaca);
                            if (checarMotoIndividual != null){

                                Console.WriteLine("Moto encontrada");
                                Console.WriteLine("Placa: "+checarMotoIndividual.Placa+" | Modelo: "+checarMotoIndividual.Modelo+" | Tanque: "+checarMotoIndividual.Combustivel);
                            }
                            checarMotoIndividual = null;
                            break;
                        case 2:

                            var checarCarroIndividual = CarRepo.ConferirCarro(existPlaca);
                            if (checarCarroIndividual != null){

                                Console.WriteLine("Carro encontrado");
                                Console.WriteLine("Placa: "+checarCarroIndividual.Placa+" | Modelo: "+checarCarroIndividual.Modelo+" | Tanque: "+checarCarroIndividual.Combustivel);
                            }
                            checarCarroIndividual = null;
                            break;
                        default:

                            Console.WriteLine("O tipo de veículo inserido não existe no sistema.\n");
                            break;
                    }
                    break;
                case 2:

                    foreach (Vaga vei in VagaRepo.ListVagas()){

                        if(vei.EstaUsada){

                            Console.WriteLine("Vaga "+vei.VagaNum+": "+vei.Estacionado.GetType().Name+" | "+vei.Estacionado.Modelo+" | "+vei.Estacionado.Placa);
                        }
                    }
                    break;
                default:

                    Console.WriteLine("Opção não suportada, tent novamente.\n");
                    break;
            }
            break;
        case 3:

            Console.Clear();
            Console.WriteLine("\nVocê deseja atualizar uma moto (1) ou um carro (2)?");
            selectType = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Atenção, tenha certeza de conferir os dados e contatar um superior antes de alterar os dados.");
             switch(selectType){

                case 1:

                    Console.WriteLine("Insira a placa atual da moto a ser alterada:");
                    existPlaca = Console.ReadLine();
                    if(BikRepo.ConferirMoto(existPlaca) != null){

                        Console.WriteLine("Insira a nova placa para a moto "+existPlaca+":");
                        newPlaca = Console.ReadLine();
                        Console.WriteLine("Insira o novo modelo para essa moto");
                        newModelo = Console.ReadLine();
                        Console.WriteLine("Por fim, o volume do tanque da moto");
                        newTanque = Convert.ToDouble(Console.ReadLine());

                        BikRepo.AtualizarMoto(existPlaca,newPlaca,newModelo,newTanque);
                        VagaRepo.Corrigir(existPlaca,newPlaca,newModelo,newTanque);
                    }
                    break;
                case 2:

                    Console.WriteLine("Insira a placa atual do carro a ser alterado:");
                    existPlaca = Console.ReadLine();
                    if(CarRepo.ConferirCarro(existPlaca) != null){

                        Console.WriteLine("Insira a nova placa do carro "+existPlaca+":"); 
                        newPlaca = Console.ReadLine();
                        Console.WriteLine("Insira o novo modelo desse carro:");
                        newModelo = Console.ReadLine();
                        Console.WriteLine("Por fim, o volume do tanque do carro");
                        newTanque = Convert.ToDouble(Console.ReadLine());

                        CarRepo.AtualizarCarro(existPlaca,newPlaca,newModelo,newTanque);
                        VagaRepo.Corrigir(existPlaca,newPlaca,newModelo,newTanque);
                    }
                    break;
                default:

                    Console.WriteLine("Tipo de veículo não implementado no sistema");
                    break;
            }
            break;
        case 4:

            Console.WriteLine("Insira a placa do veículo que deseja remover:");
            existPlaca = Console.ReadLine();
            Console.WriteLine("O veículo ficou estacionado por quantos minutos?");
            minParked = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("O veículo a ser removido é uma moto(1) ou um carro(2)?");
            selectType = Convert.ToInt32(Console.ReadLine());

            switch(selectType){
                case 1:

                    BikRepo.RemoverMoto(existPlaca,minParked);
                    break;
                case 2:

                    CarRepo.RemoverCarro(existPlaca,minParked);
                    break;
                default:

                    Console.WriteLine("Veículo não suportado pelo sistema.");
                    break;
            }
            break;
        case 5:
            resetMenu = 0;
            break;
        default:
            
            Console.WriteLine("Opção não suportada, encerrando...");
            return;
    }
}