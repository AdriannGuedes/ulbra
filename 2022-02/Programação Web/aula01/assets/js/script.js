$(document).ready(function(){
    
    $('section').load('pages/home.html');
    $('#btnHome').addClass('active')

    function clearClass(){
        $('#btnHome').removeClass('active')
        $('#btnAbout').removeClass('active')
        $('#btnProdutos').removeClass('active')
        $('#btnContato').removeClass('active')
    }

    $('#btnHome').click(function(){
        clearClass()
        $('#btnHome').addClass('active')
        $('section').load('pages/home.html')
    })
    $('#btnAbout').click(function(){
        clearClass()
        $('#btnAbout').addClass('active')
        $('section').load('pages/sobre.html')

    })
    $('#btnProdutos').click(function(){
        clearClass()
        $('#btnProdutos').addClass('active')
        $('section').load('pages/produtoseservicos.html')
    })
    $('#btnContato').click(function(){
        clearClass()
        $('#btnContato').addClass('active')
        $('section').load('pages/contato.html')
    })

    
  
  });