class Marca {
    constructor(nome){
        this.nome = nome;
    }

    FalarMarca(){
        return `Eu sou o carro da marca ${this.nome}`;
    }
}

class Modelo extends Marca {
    constructor(marca,modelo){
        super(marca);
        this.modelo = modelo;
    }

    Falarmodelo(){
        return `${this.FalarMarca()} e sou o modelo ${this.modelo}`;
    }
}
const automoveis =[
    new Automovel("Toyota", "Etios"),
    new Automovel("Honda", "Fit"),
    new Automovel("Ford", "Mustang"),
    new Automovel("Chevrolet", "Camaro"),
    new Automovel("Ferrari", "f40"),
];
console.table(automoveis);