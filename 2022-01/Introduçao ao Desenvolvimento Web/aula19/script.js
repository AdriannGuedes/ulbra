$(document).ready(function () {
    alert("oi")
    $('section').load('paginas/home.html')
    $('#menu_home').addClass('active')

    function removeCSS() {
        $('#menu_home').removeClass('active')
        $('#menu_calculadora').removeClass('active')
        $('#menu_conta_luz').removeClass('active')
        $('#maior_num').removeClass('active')
        $('#menu_idade').removeClass('active')

    }


    $('#menu_home').click(function () {
        removeCSS()
        $('#menu_home').addClass('active')
        $('section').load('paginas/home.html', function () {
           
        })
    })

    $('#menu_conta_luz').click(function () {
        removeCSS()
        $('#menu_conta_luz').addClass('active')
        $('section').load('exercicios/contaluz.html', function () {
            $('#calcular_conta').click(function () {
                var quantidadeKWH = parseFloat($('#quantidadeKWH').val())
                var valorKWH = parseFloat($('#valorKWH').val())
                var valorconta = quantidadeKWH * valorKWH

                if (quantidadeKWH > 100 && quantidadeKWH <= 200) {
                    valorconta = valorconta * 1.25;
                }
                else if (quantidadeKWH > 200) {
                    valorconta = valorconta * 1.5;
                }
                $('#valorconta').html('O valor da conta é R$' + valorconta)

            })




        })
    })

    $('#menu_calculadora').click(function () {
        removeCSS()
        $('#menu_calculadora').addClass('active')
        $('section').load('exercicios/calculadora.html', function () {
            $('#calcular').click(function () {

                var num1 = parseFloat($('#num1').val())
                var num2 = parseFloat($('#num2').val())



                var oper = $('#oper').val()

                if (oper == '+') {
                    $('#resultado').html(num1 + num2)
                }
                else if (oper == '-') {
                    $('#resultado').html(num1 - num2)
                }
                else if (oper == '*') {
                    $('#resultado').html(num1 * num2)
                }
                else if (oper == '/') {
                    $('#resultado').html(num1 / num2)
                }
            })

        })
    })

    $('#maior_num').click(function () {
        removeCSS()
        $('#maior_num').addClass('active')
        $('section').load('exercicios/verificar_num_maior.html', function () {
            $('#verificarMaior').click(function () {
                var numeros = $('#numeros').val();
                numeros = numeros.split(',');
                var maior = 0;

                for (var i = 0; i < numeros.length; i++) {
                    var valoratual = parseFloat(numeros[i]);
                    if (valoratual > maior) {
                        maior = valoratual;

                    }
                    $('#maiornumero').html('O maior número é: ' + maior);
                }

            })


        })

    })

    $('#menu_idade').click(function () {
        removeCSS()
        $('#menu_idade').addClass('active')
        $('section').load('exercicios/verif_idade.html', function () {
            $('#verificarIdades').click(function () {
                var idades = $('#idades').val();
                idades = idades.split(',');

                var menoresDeIdade = 0;
                var maiorDeIdade = 0;

                for (var i = 0; i < idades.length; i++) {
                    var idadeAtual = parseFloat(idades[i])

                    if (idadeAtual < 18) {
                        menoresDeIdade++
                    }
                    else {
                        maiorDeIdade++
                    }

                }
                $('#mostrarIdades').html(maiorDeIdade + ' pessoas são maiores de idade e ' + menoresDeIdade + ' pessoas são menores de idade');
            })
        })
    })
})







