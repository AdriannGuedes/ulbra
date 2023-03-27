<div id="divToPrint">
<h1>Registro de Clientes</h1>

<table class="table table-striped">
    <tr>
        <th>Nome</th>
        <td>
            <?=$arrayClient['name']?>
        </td>
       
    </tr>
    <tr>
    <th>E-mail</th>
        <td>
            <?=$arrayClient['email']?>
        </td>
    </tr>
    <tr>
    <th>Telefone</th>
        <td>
            <?=$arrayClient['phone']?>
        </td>
    </tr>
    <tr>
    <th>Gênero</th>
        <td>
            <?=$arrayClient['gender']?>
        </td>
    </tr>
    <tr>
    <th>Termo de aceite:</th>
        <td>
            <?=$arrayClient['acceptView']?>
        </td>
    </tr>
</table>
</div>

<button class="btn btn-primary" onclick="printDiv()">Imprimir cadastro</button>
