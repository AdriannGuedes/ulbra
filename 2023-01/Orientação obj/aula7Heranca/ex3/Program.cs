using ex3;

Personagem Batman = new Heroi("Batman", 30, 90, new string[] { "Habilidades especiais", "Inteligência" });
Personagem Coringa = new Vilao("Coringa", 100, 50, new string[] { "Força", "Loucura esxtrema" });
Personagem SuperMan = new SuperHeroi("Superman", 80, 90, new string[] { "Força", "Visão de calor" });
Personagem LexLuthor = new SuperVilao("Lex Luthor", 40, 100, new string[] { "Inteligência", "Riqueza" });


Batman.Lutar(Coringa); 
// Homem de Ferro vs Thanos
Console.WriteLine();

SuperMan.Lutar(LexLuthor); 
// Superman vs Lex Luthor
Console.WriteLine();

// Usando super poderes
((SuperHeroi)SuperMan).SuperPoder(); 
// Superman usando seu super poder
Console.WriteLine();

((SuperVilao)LexLuthor).SuperPoder();
Console.WriteLine();