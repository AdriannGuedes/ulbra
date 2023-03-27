using aula04;

Livro livro = new Livro(92,"453535453455345","BD");
Livro livro1 = new Livro(93,"7686868","13");
Livro livro2 = new Livro(94,"67674645","177");
Livro livro3 = new Livro(95,"4565464645","171");

LivroRepository repository=new LivroRepository();

repository.Create(livro);
repository.Create(livro1);
repository.Create(livro2);
repository.Create(livro3);

foreach(var item)



say(livro.ISBN);
say(livro1.Titulo);

List<int> lista = new List<int>();

lista.Add(livro.Id);
lista.Add(livro1.Id);
lista.Add(livro2.Id);
lista.Add(livro3.Id);

foreach(var item in lista){
    say(item.ToString());
}

listaLivro.Add(livro);
listaLivro.Add(livro1);
listaLivro.Add(livro2);
listaLivro.Add(livro3);

foreach (var item in listaLivro){
    say($"O livro é : {item.titulo} e o ISBN é {item.ISBN}");
}

void say(string txt){
    Console.WriteLine(txt);
}


