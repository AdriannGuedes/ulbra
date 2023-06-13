public class Circulo implements FormaGeometrica {

    double raio=8;
    @Override
    public double calcularArea() {
        return Math.PI*Math.pow(raio,2);
    }

    @Override
    public double calcularPerimetro() {
        return 2*Math.PI*raio;
    }
}
