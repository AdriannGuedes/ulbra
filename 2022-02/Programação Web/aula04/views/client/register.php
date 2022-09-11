<h1>Formulário de cadastro</h1>

<form action="?controller=client&action=registerView" method="post">

    <div class="form-group">
        <label for="">Nome:</label>
        <input class="form-control" type="text" name="name">
    </div>
    <div>

        <label for="">E-mail:</label>
        <input class="form-control" type="text" name="email">
    </div>
    <div>

        <label for="">Telefone</label>
        <input class="form-control" type="text" name="phone">
    </div>


    <h4>Selecione</h4>
    <div class="form-check">
        <input class="form-check-input" type="radio" name="gender" value="male">
        <label for="form-check-label">Masculino</label><br>
        <input class="form-check-input" type="radio" name="gender" value="female">
        <label for="form-check-label">Feminino</label><br>
        <input class="form-check-input" type="radio" name="gender" value="other">
        <label for="form-check-label">Outro</label><br>
    </div>

    <div class="checkbox">
        <label>
            <input type="checkbox" name="accept" value="accept">Desejo receber os comunicados do site.
        </label>
    </div>

    
    <button class="btn btn-primary" type="submit">Enviar</button>

</form>