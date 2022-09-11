
function calcular() {
    var num1=parseFloat(document.getElementById('num1').value);
    var num2=parseFloat(document.getElementById('num2').value);
    var oper=document.getElementById('op').value;

    if (oper=='+') {
        document.getElementById('resultado').innerHTML=num1+num2;
    }
    else if (oper=='-') {
        document.getElementById('resultado').innerHTML=num1-num2;
    }
    else if (oper=='*') {
        document.getElementById('resultado').innerHTML=num1*num2;
    }
    else if (oper=='/') {
        document.getElementById('resultado').innerHTML=num1/num2;
    }
}


function CalcularConta(){

    var quantidadeKWH=parseFloat(document.getElementById('quantidadeKWH').value);
    var valorKWH=parseFloat(document.getElementById('valorKWH').value);
    var valorconta= quantidadeKWH*valorKWH;

    if(quantidadeKWH>100 && quantidadeKWH<=200){
        valorconta=valorconta*1.25;
    }
    else if(quantidadeKWH>200){
        valorconta=valorconta*1.5;
    }
    document.getElementById('valorconta').innerHTML='O valor da conta é R$' + valorconta;
}

function verificarMaior(){

    var numeros=document.getElementById('numeros').value;
    numeros=numeros.split(',');
    var maior=0;

    for(var i=0; i<numeros.length; i++){
        var valoratual=parseFloat(numeros[i]);
        if(valoratual>maior){
            maior=valoratual;

        }
        document.getElementById('maiornumero').innerHTML='O maior número é: ' +maior;
    }
}

function verificarIdades(){
    var idades=document.getElementById('idades').value;
    idades=idades.split(',');

    var menoresDeIdade=0;
    var maiorDeIdade=0;

    for(var i=0; i<idades.length; i++){
        var idadeAtual=parseFloat(idades[i])

        if(idadeAtual<18){
            menoresDeIdade++
        }
        else{
            maiorDeIdade++
        }

    }
    document.getElementById('mostrarIdades').innerHTML=maiorDeIdade+' pessoas são maiores de idade e ' +menoresDeIdade+ ' pessoas são menores de idade'
}

