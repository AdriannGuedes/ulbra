public class Triangulo extends FiguraGeometrica{

    int base;
    int altura;
    int ladoA;
     int ladoB;
     int ladoC;

    public Triangulo(int base, int altura, int ladoA, int ladoB, int ladoC) {
        this.base=base;
        this.altura=altura;
        this.ladoA=ladoA;
        this.ladoB=ladoB;
        this.ladoC=ladoC;

    }

    @Override
    public void calcularArea() {
        double area = (base*altura)/2;
        System.out.println("A áre do triangulo é "+area);


    }

    @Override
    public void calcularPerimetro() {
        int perimetro = ladoA+ladoB+ladoC;
        System.out.println("O perímetro do triangulo é "+perimetro);

    }
}
