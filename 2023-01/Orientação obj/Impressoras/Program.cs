using Impressoras;

IImpressoraDeCodigoDeBarra Elgin = new Elgin();
IImpressoraDeCodigoDeBarra Zebra = new Zebra();

List<IImpressoraDeCodigoDeBarra> impressoras = new List<IImpressoraDeCodigoDeBarra>();

impressoras.Add(Elgin);
impressoras.Add(Zebra);

Console.WriteLine("Digite um códig de barras:");
string codBarras = Console.ReadLine();
Produto produto = new Produto(1, 2254798, 2.50);

foreach (IImpressoraDeCodigoDeBarra impressora in impressoras)
{
    impressora.ImprimirEtiquetas(produto);
}
