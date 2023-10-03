//let - variavel local
// var - variavel local
// const - variavel constante

// const obj = [  
//     {
//     name: 'Lucas',
//     age: 20,
//     country: 'Brazil'
// },{
//     name: 'João',
//     age: 30,
//     country: 'Malasia'
// },{
//     name: 'Carlinhos',
//     age: 45,
//     country: 'Africa'
// }
// ]

// console.log('Hello World!',obj);
// console.warn('AVISO');
// console.error('ERROR');
// console.table(obj);

// + soma
// - subtração
// * multiplicação
// / divisão 
// ** pontenciação
// % resto da divisão

// opeadores de comparação

// > maiot que 
// < menor que
// >= maior ou igual que 
// <= menor ou igual que  
// = atribuição
// == igualdade (valor e tipo)
// != diferente (valor e tipo)

// var a = 10;
// var b = '10';
// console.log(a === b);


// Desenvolva um programa que leia três variáveis (a, b, c) e resolva a expressão: ( a + b ) / c.
// var a = 5
// var b = 5
// var c = 5
// console.log(a + b/c)

// Desenvolva um programa que leia a velocidade de um carro (km/h) e a distância a ser percorrida (km) por ele. Calcule e apresente na tela, quanto tempo (horas) será necessário para o carro percorrer a distância informada.
// var velocidade = 900,distancia = 900 
// console.log(velocidade/distancia)

// Desenvolva um programa que leia o nome e o salário de uma pessoa, depois leia o valor do índice percentual (%) de reajuste do salário. Calcule e apresente na tela, o valor do novo salário e o nome da pessoa.
// var nome = "nome", salario = 1200,percentual = 100
// console.log((salario * percentual/ 100 )+salario)

// revisão 
// var data = new Date();

// var dia = data.getDate();
// var mes = data.getMonth() + 1;
// var ano = data.getFullYear();

// // var completo = dia + '/' + mes + '/' + ano;
// var anoCompleto = `${dia}/${mes}/${ano}`;

// var hora = data.getHours();
// var min = data.getMinutes();

// var horaCompleta = `${hora}:${min}`;

// console.log(anoCompleto,horaCompleta);

// math.cell() - arredonda para cima
// math.floor() - arredonda para baixo
// math.round() - arredonda para o mais próximo

// console.log(math.cell(10.1));

// console.log(math.cell(10.9));

// console.log(math.cell(10.5));

// var n = '10.0'

// // number.parseint(): - converte para inteiro
// // number.parsefloat(): - converte para float

// console.log(n, Number.parseint(n));

// console.log(n, Number.parseFloat(n));

// if(){

// else if(){

//}else{

//}

//condição ? true : false; - if ternario

// switch (){
//     case 1:
//         break;
//     default:
//         break;
// }

// for(let i = 0; i < 10; i++){
//     console.log(i);

// }

//while(){

//}
// do{

// }while()

// var lista = 'a b c d e'.split(' ');

// for(let i = 0; i < lista.length; i++){
//     console.log(lista[1]);
//}

// lista.forEach(item =>{
//     console.log(item);

// //})

// for(let item of lista){
//     console.log(item);
// }

// Desenvolva um programa que leia o preço de um produto e se o preço for maior do que 1000 reais aplique um desconto de 8%. Mostre o preço final.
function preco(){
    var  preco = 1001

    if(preco > 1000){
    preco = preco * 0.92
    }
    console.log(preco);
}
preco()

// Desenvolva um programa que leia o salário de um funcionário e o número de filhos. Se o salário for menor do que 2000 o funcionário receberá um salário família equivalente a 45 reais por filho. Apresente o salário final.
function salario(){
    var salario = 2000, filhos = 3
    if(salario<2000){
    salario = salario(45*filhos+salario);
    console.log("seu salario sera este",salario );
    }
}
salario()

// Faça um programa que mostre na tela valores no intervalo entre 10 e 200;
function contador(){
    var contador
    for(contador = 10; contador <=200; contador++)
    console.log(contador)
}
// Faça um programa que mostre na tela valores no intervalo entre 200 e 10;
function contador(){
    var contador
    for (contador = 200; contador >=10; contador--)
        console.log(contador)
}