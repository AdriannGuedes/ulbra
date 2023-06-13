public class Triangulo implements FormaGeometrica{

    double base=5;
    double altura=6;
    double ladoA=7;
    double ladoB=8;
    @Override
    public double calcularArea() {
        return (base*altura)/2;
        
    }

    @Override
    public double calcularPerimetro() {
        return ladoA+ladoB+base;

    }
}
