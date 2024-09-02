import 'package:dart_application_1/dart_application_1.dart' as dart_application_1;

void main() {
  println(calculadora(num1: 2, num2: 3, :: soma));

  }

  String calculadora({required double num1, required double num2, required double calcular(num1, num2)}){
    return "O retorno é ${calcular(num1, num2)}";
  }

  double soma(double num1, double num2 ){
    return num1+num2;
  }
