<h1>Lista de produtos</h1>

<table class="table table-striped">
    <tr>
        <th>Nome Produto</th>
        <th>Descrição</th>
        <th>Categoria</th>
        <th>Valor</th>
    </tr>

    <?php
    foreach ($arrayProdut as $produt) {
    ?>
        <tr>
            <td>
                <?= $produt['nameprodut'] ?>
            </td>
            <td>
                <?= $produt['discription'] ?>
            </td>
            <td>
                <?= $produt['category'] ?>
            </td>
            <td>
                <?= $produt['value'] ?>
            </td>

        </tr>
    <?php
    }
    ?>
</table>