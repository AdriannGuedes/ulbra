public class Retangulo implements FormaGeometrica {

    double base=25;
    double altura=5;

    @Override
    public double calcularArea() {
        return base*altura;

    }

    @Override
    public double calcularPerimetro() {
        return 2*(base+altura);
    }
}
