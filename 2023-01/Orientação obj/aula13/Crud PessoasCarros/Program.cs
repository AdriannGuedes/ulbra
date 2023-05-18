

using Crud_PessoasCarros.Data;
using Crud_PessoasCarros.Data.Repositories;
using Crud_PessoasCarros.Domain.Entities;

var db = new DataContext();
var carroRepository = new CarroRepository(db);

var pessoaRepository = new PessoaRepository(db);

Console.WriteLine("Inserindo pessoa");
// var pessoa = new Pessoa() {Id=1, Nome="Adrian", Telefone="51998403352", Endereco="Pára 225"};
// pessoaRepository.Save(pessoa);

// Console.WriteLine("\nInserindo um carro");
// var carro = new Carro() {Id=1, Modelo="Uno", Marca="Fiat", Ano=2009};
// carroRepository.Save(carro);

var UnoChange = carroRepository.GetById(1);
UnoChange.Modelo="Marea";
UnoChange.Marca="Fiaat";
UnoChange.Ano=2004;
carroRepository.Update(UnoChange);