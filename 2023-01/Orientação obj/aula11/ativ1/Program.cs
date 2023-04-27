using aula11;

IPagamento cartao = new CartaoCredito();
IPagamento boleto = new Boleto();

Cliente cliente1 = new Cliente(cartao);
Cliente cliente2 = new Cliente(boleto);

cliente1.Comprar(500.00);
cliente2.Comprar(250.00);