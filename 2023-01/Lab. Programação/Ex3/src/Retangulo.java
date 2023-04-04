public class Retangulo {

    int base;
    int altura;

    void calcularArea(){
        int area = base*altura;
        System.out.println("A area do retangulo é "+area);
    }

    void calcularPerimetro(){
        int perimetro = base+base+altura+altura;
        System.out.println("O peímetro do retângulo é "+perimetro);
    }
}
