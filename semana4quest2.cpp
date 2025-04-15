//Revisão de casos reais que exijam combinações de operadores lógicos (ex.: liberar 
//ou não acesso). 
#include <iostream>
using namespace std;


int main(){

    string senha = "senha123"; 
    string senhaDigitada;
    printf("Digite a senha: ");
    cin >> senhaDigitada;

    if (senhaDigitada == senha){
        printf("Acesso Liberado!\n");
    }else{
        printf("Senha incorreto, acesso negado! \n");
    }
    
    









}