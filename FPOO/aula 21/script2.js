class Cliente {
    constructor(nome,cpf,email,telefone){
        this.nome = nome;
        this.cpf = cpf;
        this.email = email;
        this.telefone = telefone;

    }
    getNome(){
        return this.nome;
    }
    setNome(nome){
        this.nome = nome;
    }
    getCpf(){ 
        return this.cpf;
    }
    setCpf(){
        this.cpf = cpf;
    }
    getEmail(){
        return this.email;
    }
    setEmail(){
        this.email = email;
    }
    getTelefone(){
        return this.telefone;
    }
    setTelefone(){
        this.telefone = telefone;
    }
    toString(){
        return "Nome: " + this.nome + "\nCPF:" + this.cpf + "\nE-mail:" + this.email + "\nTelefone" + this.telefone;
    }
}
const clientes = [
    new Cliente("Cliente 1", "111.111.111-11", "cliente1@email.com", "1111-1111"),
    new Cliente("Cliente 2", "222.222.222-22", "cliente2@email.com", "2222-2222"),
    new Cliente("Cliente 3", "333.333.333-33", "cliente3@email.com", "3333-3333"),
    new Cliente("Cliente 4", "444.444.444-44", "cliente4@email.com", "4444-4444"),
    new Cliente("Cliente 5", "555.555.555-55", "cliente5@email.com", "5555-5555"),
    new Cliente("Cliente 6", "666.666.666-66", "cliente6@email.com", "6666-6666"),
    new Cliente("Cliente 7", "777.777.777-77", "cliente7@email.com", "7777-7777"),
    new Cliente("Cliente 8", "888.888.888-88", "cliente8@email.com", "8888-8888"),
    new Cliente("Cliente 9", "999.999.999-99", "cliente9@email.com", "9999-9999"),
    new Cliente("Cliente 10", "000.000.000-00", "cliente10@email.com", "0000-0000"),
];
    console.table(clientes)