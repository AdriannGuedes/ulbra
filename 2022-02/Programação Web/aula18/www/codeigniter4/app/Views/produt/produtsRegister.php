<h1>Cadastro de produtos</h1>
<form action="?controller=produt&action=produtsView" method="post">
    <div class="form-group">
        <label for="">Nome do produto:</label>
        <input class="form-control" type="text" name="nameprodut">
    </div>
    <div>
        <label for="">Valor:</label>
        <input class="form-control" type="text" name="value">
    </div>
    <div>
        <label for="">Descrição</label>
        <input class="form-control" type="text" name="discription">
    </div>
    <div>
        <label for="">Categoria</label>
        <input class="form-control" type="text" name="category">
    </div><br>
    <button class="btn btn-primary" type="submit">Adicionar</button>

</form>