<div id="divToPrint">
<h1>Produtos cadastrados:</h1>

<table class="table table-striped">
    <tr>
        <th>Nome do produto</th>
        <td>
            <?=$arrayProducts['nameprodut']?>
        </td>
       
    </tr>
    <tr>
    <th>Descrição</th>
        <td>
            <?=$arrayProducts['discription']?>
        </td>
    </tr>
    <tr>
    <th>Categoria</th>
        <td>
            <?=$arrayProducts['category']?>
        </td>
    </tr>
    <tr>
    <th>Valor</th>
        <td>
            <?=$arrayProducts['value']?>
        </td>
    </tr>
    <tr>
    
</table>
</div>

<button class="btn btn-primary" onclick="printDiv()">Imprimir dados do produto</button>
