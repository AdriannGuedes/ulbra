class Voo {
    constructor(compAerea,origem,destino,dataPartida,precoPassagem){
        this.compAerea=compAerea;
        this.origem=origem;
        this.destino=destino;
        this.dataPartida=dataPartida;
        this.precoPassagem=precoPassagem;
    }

    informacoesVoo(){
        return ` Companhia Aerea: ${this.compAerea}\n Partida: ${this.origem}\n Data Partida: ${this.dataPartida}\n Destino: ${this.destino}\n Preço Passagem: ${this.precoPassagem}`
    }

}

const companhia1 = new Voo("GOL", "POA", "06/03/2024", "RJ", 687,99);

console.log(companhia1.informacoesVoo());