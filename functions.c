#include <stdio.h>
/*As funções ajudam a organizar o código em blocos reutilizáveis. 
Em C, você define uma função especificando o tipo de retorno, nome e parâmetros.
*/

int somar(int a, int b) {
    return a + b;
}

int main() {
    int resultado = somar(3, 5);
    printf("Resultado: %d\n", resultado);
    return 0;
}