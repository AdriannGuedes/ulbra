class Praia {
    constructor(nome,localizacao,tempAgua,tipoAreia){
        this.nome=nome;
        this.localizacao=localizacao;
        this.tempAgua=tempAgua;
        this.tipoAreia=tipoAreia;
    }

    informacoesPraia(){
        return `Nome: ${this.nome}\n Loc: ${this.localizacao}\n TempÁgua: ${this.tempAgua}\n Tipo Areia: ${this.tipoAreia}`
    }

}

const Torres = new Praia("Prainha", "Torres RS", 12, "Quente");

console.log(Torres.informacoesPraia());