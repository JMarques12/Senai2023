const formPessoa = document.querySelector('#formPessoa');
const pessoas = [];

formPessoa.addEventListener('submit', (e) => {
    e.preventDefault();
    pessoas.push(new Pagamento(formPessoa.nome.value, formPessoa.salario.value));
    criarCard();
})

function criarCard(){
    const cards = document.querySelector('.cards');
    let card = document.querySelector('.card');
    cards.innerHTML = '';
    cards.appendChild(card);
    
    pessoas.forEach(pessoa => {
        let cardNew = card.cloneNode(true);
        cardNew.classList.remove('model');
        cardNew.querySelector("#nomeValor").innerHTML =  pessoa.nome;
        cardNew.querySelector("#salarioValor").innerHTML = `Salario: ${pessoa.salario}`;
        cardNew.querySelector("#salarioBase").innerHTML = `Salario Base: ${pessoa.salarioBase}`;
        cardNew.querySelector("#salarioLiquido").innerHTML = `Salario Liquido: ${pessoa.salarioLiquido}`;
        cards.appendChild(cardNew);
    })
}
function removecard(e){
    e.parentNode.remove();
    pessoas.splice(e.parentNode,1);
}