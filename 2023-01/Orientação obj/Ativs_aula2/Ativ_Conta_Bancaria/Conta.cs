

namespace Ativ_Conta_Bancaria
{
    public class Conta
    {
        public double Saldo { get; private set; }
        public int Numero { get; set;}

        public Conta(int numero){
            Numero = numero;
        }

        public void Depositar(double valor){
            Saldo += valor;
            Console.WriteLine($"Depósito de R${valor} efetuado / Saldo atual: {Saldo}");
        }

        public bool Sacar(double valor){
            if (Saldo >= valor) {
                Saldo -= valor;
                Console.WriteLine($"Saque de R${valor} efetuado / Saldo atual: {Saldo}");
                return true;
            } else {
                Console.WriteLine($"Saldo insuficiente.");
                return false;
            }
        }
        
    }
}