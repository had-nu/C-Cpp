#include <stdio.h>

int main(){
    
   int idade; // Variável setada vazia solicita que o usuário digite a idade
   printf("Digite a sua idade: ");
   scanf("%d", &idade); //lê um número inteiro digitado pelo usuário e armazena-o na variável idade. O símbolo & (e comercial) é necessário para fornecer o endereço da variável idade, onde o valor será armazenado.

    // Estrutura de controle para verificar se é maior de idade
   if (idade >= 18) {
    printf("Você é maior de idade\n");
   } else {
    printf("Você é menor de idade\n");
   }
    return 0;
}

/*Você pode controlar o fluxo do programa usando 
    estruturas de controle como 
    if, else, for, while e do-while.
    */