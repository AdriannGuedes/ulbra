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

