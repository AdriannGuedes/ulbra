public class ContaBancaria {

    public double numeroConta;
    public double saldo;
    public String titular;

    public void Depositar(double valor){
        saldo+=valor;
        System.out.println("Depósito de R$ "+valor+" efetuado / Saldo atual: "+saldo);
    }

    public boolean Sacar(double valor){
        if (saldo>=valor){
            saldo -=valor;
            System.out.println("Saque de R$"+valor+" efetuado / Saldo atual: "+saldo);
            return true;
        }
        else{
            System.out.println("Saldo insuficiente");
            return false;
        }

    }




}
