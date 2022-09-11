alert('Ativ.1');
var num=parseFloat(prompt('Digite um numero'));
if (num>10) {
    alert(num + 'O número digitado é maior que 10');
}
else if(num==10){
    alert(num + 'O número digitado é igual a 10');
}
else{
    alert(num + 'O número digitado é menor que 10');
}


//Some dois valores lidos e imprima o resultado
alert('Ativ.2');
var num1=parseFloat(prompt('Digite um numero:'));
var num2=parseFloat(prompt('Digite outro numero:'));
var soma=num1+num2;

alert(soma);

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
         break
    case'*':
         alert('A multiplicação é ' + (num1*num2));
    case'/':
         alert('A divisão é ' + (num1/num2));
         break;
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
var dados=[];
dados[0]=prompt('Digite seu endereço:');
dados[1]=prompt('Digite o seu e-mail:');
dados[2]=prompt('Digite o seu nome:');

alert('Boa noite' + dados[2] + 'seu endereço é ' +dados[0] + 'e seu endereço é ' +dados[1]);