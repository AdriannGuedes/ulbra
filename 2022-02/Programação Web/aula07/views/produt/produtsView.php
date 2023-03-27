<div id="divToPrint">
<h1>Produtos cadastrados:</h1>

<table class="table table-striped">
    <tr>
        <th>Nome do produto</th>
        <td>
            <?=$arrayProdut['nameprodut']?>
        </td>
       
    </tr>
    <tr>
    <th>Descrição</th>
        <td>
            <?=$arrayProdut['discription']?>
        </td>
    </tr>
    <tr>
    <th>Categoria</th>
        <td>
            <?=$arrayProdut['category']?>
        </td>
    </tr>
    <tr>
    <th>Valor</th>
        <td>
            <?=$arrayProdut['value']?>
        </td>
    </tr>
    <tr>
    
</table>
</div>

<button class="btn btn-primary" onclick="printDiv()">Imprimir dados do produto</button>
