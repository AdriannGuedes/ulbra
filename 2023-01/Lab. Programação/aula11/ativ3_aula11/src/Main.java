public class Main {
    public static void main(String[] args) {
        Quadrado quadrado = new Quadrado();
        quadrado.lado=20;

        FiguraGeometrica figuraGeometrica = new FiguraGeometrica();
        figuraGeometrica.calcularArea(quadrado.lado);
        figuraGeometrica.calcularPerimetro(quadrado.lado);
    }
}