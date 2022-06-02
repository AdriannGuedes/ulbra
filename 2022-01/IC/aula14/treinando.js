
//ativ1
var nome = "joao";
imprimir(nome);

var numero = 123456;
imprimir(numero);

function imprimir(valor) {
    console.log(`o conteudo é ${valor} e o tipo é ${typeof (valor)}`);
}
 
//ativ5
 var mediaAritmetica=0;
 var primeironumero=3;
 console.log("primeiro numero:" +primeironumero);

 var segundonumero=6;
 console.log("segundo numero:" + segundonumero);

 var terceironumero=9;
 console.log("terceiro numero" +terceironumero);

 mediaAritmetica= (primeironumero+segundonumero+terceironumero)/3;
 console.log("A media e:" +mediaAritmetica);

 //ativ6
 console.log("Simule as notas de um aluno da Ulbra, AP1, AP2, AS e media final:");
 var mediafinal=0;

 var ap1=1.5;
 console.log("avaliacao parcial 1:" +ap1);

 var ap2=2.5;
 console.log("avaliacao parcial 2:" +ap2);
 
 var as=6;
 console.log("A avaliacao semestral:" +as);

 mediafinal=ap1+ap2+as;
 console.log("A media final e:" +mediafinal);

 //ativ7
 console.log("Informe o nome e a idade de uma pessoa e imprima se esta pessoa é maior ou menor de idade");
 var nome="Adrian";
 console.log("O nome é:" +nome);

 var idade=18;
 console.log("Sua idade é:" +idade);

 if (idade>=18) {
     console.log("Você é ,maior de idade");
 }
 else{
     console.log("Você é menor de idade");
 }

 //ativ8
 console.log("Informe 3 numeros e mostre qual é o maior");
 var n1=10;
 console.log("O primeiro número é:" +n1);

 var n2=22;
 console.log("O segundo número é:" +n2);

 var n3=16;
 console.log("O terceiro número é:" +n3);

 if (n1>n2 && n1>n3) {
     console.log("O maior numero e:" +n1);
 }
 else if (n2>n1 && n2>n3) {
     console.log("O maior numero e:" +n2);
 }
 else if (n3>n2 && n3>n1) {
     console.log("O maior numero e" +n3);
 }

 



