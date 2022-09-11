$(document).ready(() => {
    confirm('Você está acessando um site 100% seguro');


    $('section').load('pages/inicio.html');
    $('#inicio').addClass('active');

    function RemoverClass() {
        $('#inicio').removeClass('active');
        $('#original').removeClass('active');
        $('#germanlook').removeClass('active');
        $('#ratlook').removeClass('active');
        $('#contato').removeClass('active');

    }

    $('#inicio').click(() => {
        RemoverClass()
        $('#inicio').addClass('active')
        $('section').load('pages/inicio.html');
    })

    $('#original').click(() => {
        RemoverClass()
        $('#original').addClass('active')
        $('section').load('pages/original.html');
    })

    $('#germanlook').click(() => {
        RemoverClass()
        $("#germanlook").addClass('active')
        $('section').load('pages/german.html');
    })

    $('#ratlook').click(() => {
        RemoverClass()
        $('#ratlook').addClass('active')
        $('section').load('pages/ratlook.html');
    })

    $('#contato').click(() => {
        RemoverClass()
        $('#contato').addClass('active')
        $('section').load('pages/contato.html')

    })
})



