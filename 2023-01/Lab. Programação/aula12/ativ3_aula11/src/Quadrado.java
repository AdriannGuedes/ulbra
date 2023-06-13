public class Quadrado extends FiguraGeometrica{
    double lado;

    public void calcularArea(double lado){
        double area = lado*lado;
        System.out.println("A área do quadrado é igual a: "+area);
    }

    public void calcularPerimetro(double lado){
        double perimetro = lado + lado + lado +lado;
        System.out.println("O perimetro do quadrado é igual a: "+perimetro);
    }


}
