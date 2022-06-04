/*alert('Oi...');

var resposta = confirm('Você é vegetariano ?');

if (resposta== true) {
    alert("Coma mais proteínas...");
    
}
else{
    alert("Coma menos gordura...");
}

var email = prompt('Digite seu e-mail');
alert(' O e-mail ' +email + 'será usado para span');*/

//Leia um valor e imprima os resultados: “É maior que 10” ou “Não é maior que 10” ou ainda “É igual a 10”
alert('Ativ.1');
var num=parseFloat(prompt('Digite um numero'));
if (num>10) {
    alert('O número digitado é maior que 10');
}
else if(num==10){
    alert('O número digitado é igual a 10');
}
else{
    alert('O número digitado é menor que 10');
}


//Some dois valores lidos e imprima o resultado
alert('Ativ.2');
var num1=parseFloat(prompt('Digite um numero:'));
var num2=parseFloat(prompt('Digite outro numero:'));

alert(num1+num2);

//Leia 2 valores e a operação a ser realizada (+, -, * ou /) e imprima o resultado (use um switch)
alert('Ativ.3');
var num1=parseFloat(prompt('Digite um numero'));
var oper=prompt('Digite uma das seguintes operações(+,-)');
var num2=parseFloat(prompt('Digite outro numero'));

switch (oper) {
    case '+':
        alert('A soma é ' + (num1+num2));
        break;
    case'-':
         alert('A subtração é ' + (num1-num2));
    case'*':
         alert('A multiplicação é ' + (num1*num2));
    case'/':
         alert('A divisão é ' + (num1/num2))
    default:
        alert('Operação inválida')
        break;
}

//Leia um nome e um valor n e imprima o nome n vezes usando o laço for
alert('Ativ.4');
var nome=prompt('Digite seu nome:');
var num=parseFloat(prompt('Digite o numero de vezes que o nome irá se repetir na tela:'));

for (let i=0; i<num; i++) {
    alert(nome);
    
}

//Leia um nome, endereço e e-mail, armazene em um array, depois imprima na tela;
alert('Ativ.5');
var nome=prompt('Digite seu nome:');
var endereço=prompt('Digite seu endereço:');
var email=prompt('Digite o seu e-mail:');
var dados=[nome,endereço,email];
alert(dados);