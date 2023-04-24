using ativ5;

double valor = 150;

PagamentoBoleto boleto = new PagamentoBoleto();
boleto.EfetuarPagamento(valor);
boleto.ExtornarPagamento(valor);

PagamentoCartao cartao = new PagamentoCartao();
cartao.EfetuarPagamento(valor);
cartao.ExtornarPagamento(valor);

PagamentoPayPal paypal = new PagamentoPayPal();
paypal.EfetuarPagamento(valor);
paypal.ExtornarPagamento(valor);