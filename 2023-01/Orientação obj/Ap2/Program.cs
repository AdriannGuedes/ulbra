using System;
using Ap2;
using Ap2.Data;
using Ap2.Data.Repositories;
using Ap2.Domain.Entities;

var db = new DataContext(); //instancia do banco

//Repositorios:
var vagaRepo = new VagaPepository(db);
var carroRepo = new CarroRepository(db);
var motoRepo = new MotoRepository(db);

// Aqui temos as variaveis para navegar no menu: 
int loopMenu = 1;
int selectOp;
int typeVeic;

//Adicionar e atualizar um veiculo
int idVeiculo;
string placaVeiculo;
string modeloVeiculo;
string marcaVeiculo;

//Program:
while (loopMenu != 0)
{
    mostarMenu();
    selectOp = Convert.ToInt32(Console.ReadLine());

    switch (selectOp)
    {
        case 1:
        typeVeic=selectTypeVehicle();
        if (typeVeic==1)
        {
            createMoto();
        }
        else if (typeVeic==2)
        {
            createCarro();
        }
        else
        {
            Console.WriteLine("Veiculo não suportado.");
        }
        break;

        case 2:
        typeVeic=selectTypeVehicle();
        if (typeVeic==1)
        {
            listAllVehiclesSystem();
            updateMoto();
        }
        else if (typeVeic==2)
        {
            listAllVehiclesSystem();
            updateCarro();
        }
        else
        {
            Console.WriteLine("Veiculo não suportado");
        }
        break;

        case 3:
        typeVeic=selectTypeVehicle();
        if (typeVeic==1)
        {
            listAllVehiclesSystem();
            deleteMoto();
        }
        else if(typeVeic==2)
        {
            listAllVehiclesSystem();
            deleteCarro();
        }
        break;

        case 4:
        listAllVehiclesSystem();
        idVeiculo=Convert.ToInt32(Console.ReadLine());
        ocuparVaga(idVeiculo);
        break;

        case 5:
        listAllVehiclesSystem();
        idVeiculo=Convert.ToInt32(Console.ReadLine());
        liberarVaga(idVeiculo);
        break;

        case 6:
        getEmpty();
        break;

        case 7:
        getOccupied();
        break;

        case 8:
        listAllVehiclesSystem();
        break;

        case 9:
        loopMenu=0;
        break;

        default:
        Console.WriteLine("Opção não suportada.");
        break;

        
    }

    
}


//Create(moto e carro):
void createCarro()
{
    Console.WriteLine("Insira a placa do carro:");
    placaVeiculo = Console.ReadLine();
    Console.WriteLine("Insira o modelo do carro:");
    modeloVeiculo = Console.ReadLine();
    Console.WriteLine("Insira a marca do veiculo:");
    marcaVeiculo = Console.ReadLine();

    if (!carroRepo.Save(new Carro()
    {
        Placa = placaVeiculo,
        Modelo = modeloVeiculo,
        Marca = marcaVeiculo

    }))
    {
        Console.WriteLine("Já existe um carro com esta placa cadastrada!");
    }
    else
    {
        Console.WriteLine("Carro cadastrado com sucesso!");
    }
}

void createMoto()
{
    Console.WriteLine("Insira a placa da moto:");
    placaVeiculo = Console.ReadLine();
    Console.WriteLine("Insira o modelo da moto:");
    modeloVeiculo = Console.ReadLine();
    Console.WriteLine("Insira a marca da moto:");
    marcaVeiculo = Console.ReadLine();

    if (!motoRepo.Save(new Moto()
    {
        Placa = placaVeiculo,
        Modelo = modeloVeiculo,
        Marca = marcaVeiculo

    }))
    {
        Console.WriteLine("Já existe uma moto com esta placa cadastrada!");
    }
    else
    {
        Console.WriteLine("Moto cadastrado com sucesso!");
    }
}

//Update(moto e carro):
void updateMoto()
{
    Console.WriteLine("Insira o Id da moto que deseja atualizar:");
    idVeiculo = Convert.ToInt32(Console.ReadLine());

    var motoToUpdate = motoRepo.GetById(idVeiculo);

    if (motoToUpdate == null)
    {
        Console.WriteLine("Moto não encontrada!!");
        return;
    }

    Console.WriteLine("Insira a nova placa da moto:");
    placaVeiculo = Console.ReadLine();
    Console.WriteLine("Insira o novo modelo da moto:");
    modeloVeiculo = Console.ReadLine();
    Console.WriteLine("Insira a nova marca da moto:");
    marcaVeiculo = Console.ReadLine();

    motoToUpdate.Placa = placaVeiculo;
    motoToUpdate.Modelo = modeloVeiculo;
    motoToUpdate.Marca = marcaVeiculo;

    motoRepo.Update(motoToUpdate);
    Console.WriteLine("Moto atualizada com sucesso!!");

}

void updateCarro()
{
    Console.WriteLine("Insira o Id do carro que deseja atualizar:");
    idVeiculo = Convert.ToInt32(Console.ReadLine());

    var carroToUpdate = carroRepo.GetById(idVeiculo);

    if (carroToUpdate == null)
    {
        Console.WriteLine("Carro não encontrado!!");
        return;
    }

    Console.WriteLine("Insira a nova placa do carro:");
    placaVeiculo = Console.ReadLine();
    Console.WriteLine("Insira o novo modelo do carro:");
    modeloVeiculo = Console.ReadLine();
    Console.WriteLine("Insira a nova marca do carro:");
    marcaVeiculo = Console.ReadLine();

    carroToUpdate.Placa = placaVeiculo;
    carroToUpdate.Modelo = modeloVeiculo;
    carroToUpdate.Marca = marcaVeiculo;

    carroRepo.Update(carroToUpdate);
    Console.WriteLine("Carro atualizado com sucesso!!");

}

//Delete(moto e carro):

void deleteMoto()
{
    Console.WriteLine("Insira o Id da moto que deseja deletar:");
    idVeiculo = Convert.ToInt32(Console.ReadLine());

    if (motoRepo.Delete(idVeiculo))
    {
        Console.WriteLine("Moto deletada com sucesso!!");
    }
    else
    {
        Console.WriteLine("Moto não encontrada!");
    }

}

void deleteCarro()
{
    Console.WriteLine("Insira o Id do carro que deseja deletar:");
    idVeiculo = Convert.ToInt32(Console.ReadLine());

    if (carroRepo.Delete(idVeiculo))
    {
        Console.WriteLine("Carro deletado com sucesso!!");
    }
    else
    {
        Console.WriteLine("Carro não encontrado!");
    }

}

//Controle de vagas: 

//aqui ocupamos uma vaga
void ocuparVaga(int idVeiculo)
{
    if (vagaRepo.ParkVehicle(idVeiculo))
    {
        Console.WriteLine("Vaga ocupada com sucesso!");
    }
    else
    {
        Console.WriteLine("Não foi possivel ocupar a vaga!");
    }
}

//aqui liberamos uma vaga
void liberarVaga(int idVeiculo)
{
    if (vagaRepo.releaseVagancy(idVeiculo))
    {
        Console.WriteLine("Vaga liberada!!");
    }
    else
    {
        Console.WriteLine("não foi possivel liberar a vaga!");
    }
}

//aqui mostramos as vagas livres
void getEmpty()
{
    var emptyVagas = vagaRepo.GetAllEmpty();
    Console.WriteLine("Vagas livres:");

    foreach (var vaga in emptyVagas)
    {
        Console.WriteLine($"Id: {vaga.Id}");

    }
}

//aqui mostramos as vagas ocupadas
void getOccupied()
{
    var occupiedVagas = vagaRepo.GetAllParked();
    Console.WriteLine("Vagas ocupadas:");

    foreach (var vaga in occupiedVagas)
    {
        Console.WriteLine($"Id: {vaga.Id}, Veiculo: {vaga.VeiculoId}");
    }

}

//mostrar todos os veiculos no sistema
void listAllVehiclesSystem()
{
    var motos = motoRepo.GetAll();
    var carros = carroRepo.GetAll();

    Console.WriteLine("Motos:");
    foreach (var moto in motos)
    {
        Console.WriteLine($"Id: {moto.Id}, Modelo: {moto.Modelo}, Marca: {moto.Marca}, Placa: {moto.Placa}");
    }

    Console.WriteLine("Carros");
    foreach (var carro in carros)
    {
        Console.WriteLine($"Id: {carro.Id}, Modelo: {carro.Modelo}, Marca: {carro.Marca}, Placa: {carro.Placa}");
    }
}

//Opções do menu:
void mostarMenu()
{
    Console.WriteLine("Sistema de Estacionamento Rotativo v2.0");
    Console.WriteLine("Selecione uma opção:");
    Console.WriteLine("1- Criar veículo\n2- Editar veículo\n3- Apagar veículo");
    Console.WriteLine("4- Estacionar veículo\n5- Liberar vaga");
    Console.WriteLine("6- Listar vagas livres\n7- Listar vagas ocupadas");
    Console.WriteLine("8- Listar veículos cadastrados");
    Console.WriteLine("9 - Encerrar");
}

int selectTypeVehicle()
{
    Console.WriteLine("O veiculo é uma moto (1) ou um carro (2)?");
    typeVeic = Convert.ToInt32(Console.ReadLine());
    switch (typeVeic)
    {
        case 1:
            return 1;

        case 2:
            return 2;

        default:
            return 0;
    }
}


