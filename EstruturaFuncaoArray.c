#include <stdio.h>

//Declaração da Função:
void imprimeArray(int arr[], int tamanho);
/*
void: Indica que a função não retorna nada.
int arr[]: Recebe um array de inteiros.
int tamanho: Indica o número de elementos do array.
*/

// Definição da Função:
void imprimeArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

// Chamada da Função no main:

int main() {
    int numeros[] = {1, 2, 3, 4, 5}; // Array com 5 elementos
    int tamanho = sizeof(numeros) / sizeof(numeros[0]); // Calcula o tamanho do array

    imprimeArray(numeros, tamanho); // Passa o array e seu tamanho para a função

    return 0;

}

/*
Em C, um array não é passado diretamente para uma função; 
em vez disso, é passada uma referência ao primeiro elemento do array 
(um ponteiro para o início do array). Isso significa que qualquer modificação 
feita no array dentro da função afeta o array original.
Cabeçalho da Função: O parâmetro que recebe um array é escrito como um ponteiro. 
Por exemplo, int arr[] ou int *arr.
*/