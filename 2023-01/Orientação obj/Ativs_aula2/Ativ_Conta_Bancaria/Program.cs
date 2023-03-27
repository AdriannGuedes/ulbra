using Ativ_Conta_Bancaria;

 Conta contaAdrian = new Conta(8073);
  Show("Digite sua senha: ");
  var senha = Convert.ToInt64(Console.ReadLine());
  
  if (contaAdrian.Numero == 8073 && senha == 2407) {
    Show("Acessando sua conta");
    Show("");

    contaAdrian.Depositar(10000);

    contaAdrian.Sacar(2000);
    contaAdrian.Sacar(600);
    contaAdrian.Sacar(900);
  } else {
    Show("Dados inválidos!");
  }

  void Show(string msg) {
    Console.WriteLine(msg);
  }