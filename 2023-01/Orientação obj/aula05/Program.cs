using aula05;

PessoaRepository repository=new PessoaRepository();
var op=1;
while (op!=0)
{
    Console.WriteLine("Informe a opção que deseja:\n 1-Adicionar Pessoa. \n 2-Deletar Pessoa. \n 3-Atualizar Pessoa. \n 4-Mostrar todos.");
    op=Convert.ToInt32(Console.ReadLine());
    switch (op)
    {
        case 1:
          Console.WriteLine("Digite o nome: ");
          string nome=Console.ReadLine();
          Console.WriteLine("Digite o telefone");
          string telefone=Console.ReadLine();
          repository.Attach(nome,telefone);
          Console.WriteLine("Pessoa adicionada!!");
        break;
        case 2:
          Console.WriteLine("Qual Id deseja deletar?");
          int id=Convert.ToInt32(Console.ReadLine());
          repository.Delete(id);
          Console.WriteLine("Pessoa deletada!");
        break;
        case 3:
          Console.WriteLine("Informe o Id para ser atualizado:");
          int id_novo=Convert.ToInt32(Console.ReadLine());
          Console.WriteLine("Informe o novo Nome:");
          string novo_nome=Console.ReadLine();
          Console.WriteLine("Informe o novo telefone:");
          string novo_telefone=Console.ReadLine();
          repository.Update(id_novo,novo_nome,novo_telefone);
          Console.WriteLine("Pessoa atualizada com sucesso!!");
        break;
        case 4:
          var list = repository.GetAll();
          list.ForEach(x => Console.WriteLine($"Id: {x.Id}, Nome: {x.Nome}, Telefone {x.Telefone}"));
        break;
        case 5:
          op=0;
        break;




    }

}