public class Main {
    public static void main(String[] args) {
        Quadrado quadrado = new Quadrado();
        quadrado.lado=20;


        quadrado.calcularArea(quadrado.lado);
        quadrado.calcularPerimetro(quadrado.lado);

        Triangulo triangulo = new Triangulo(5, 5,5,5,5);
        triangulo.calcularArea();
        triangulo.calcularPerimetro();

        Retangulo retangulo = new Retangulo(4,4,4,4,4,4);
        retangulo.calcularArea();
        retangulo.calcularPerimetro();
    }
}