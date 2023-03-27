<h1>Lista de produtos</h1>

<table class="table table-striped">
    <tr>
        <th>Nome Produto</th>
        <th>Descrição</th>
        <th>Categoria</th>
        <th>Valor</th>
    </tr>

    <?php
    foreach ($arrayProducts as $products) {
    ?>
        <tr>
            <td>
                <?=$products['idProduct']?>
            </td>
            <td>
                <?=$products['name']?>
            </td>
            <td>
                <?=$products['price']?>
            </td>
            <td>
                <?=$products['description']?>
            </td>

        </tr>
    <?php
    }
    ?>
</table>