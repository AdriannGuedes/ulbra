public class Retangulo extends FiguraGeometrica{
    int base;
    int altura;

    int l1;
    int l2;
    int l3;
    int l4;

    public Retangulo(int base, int altura, int l1, int l2, int l3, int l4)
    {
        this.base=base;
        this.altura=altura;
        this.l1=l1;
        this.l2=l2;
        this.l3=l3;
        this.l4=l4;
    }

    public void calcularArea(){
        int area = base*altura;
        System.out.println("A área do retangulo é "+area);

    }

    public void calcularPerimetro(){
        int perimetro = l1+l2+l3+l4;
        System.out.println("O perímetro do retangulo é "+perimetro);

    }




}
