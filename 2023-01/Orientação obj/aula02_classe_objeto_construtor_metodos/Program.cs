// See https://aka.ms/new-console-template for more information



using aula02_classe_objeto_construtor_metodos;

Livro livroBD = new Livro(2323,"e344344","Banco de dados",240);


livroBD.Preco=290;
Console.WriteLine(livroBD.Id+"-"+livroBD.Isbn+"-"+livroBD.Preco);

Show("digite algo:");
var retorno=Console.ReadLine();

Show("o usuário retornou"+retorno);

Show("Digite um número");
var num=Console.ReadLine();

Par_impar MetodoParImpar= new Par_impar();
MetodoParImpar.ParImpar();


void Show(string msg){
    Console.WriteLine(msg);
}

Livro livro = new livro();



