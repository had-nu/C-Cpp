#include <stdio.h>
/*
Ponteiros são uma das características mais avançadas e importantes de C, 
permitindo manipular diretamente endereços de memória. 
Eles são úteis para alocação dinâmica de memória e operações de baixo nível.
*/
int valor = 10;
int *ponteiro = &valor;



int main() {

    return 0;
}

/*
## Regras Importantes ##
1. Compatibilidade de tipos: 
O tipo da variável deve corresponder ao especificador usado. 
Por exemplo, uma variável int deve ser exibida com %d ou %i, e uma float com %f.

2. Usar o tipo correto no scanf: 
Ao ler dados com scanf, certifique-se de usar o especificador adequado, pois ele informa ao compilador o tamanho e tipo da variável. 
Por exemplo:
        - int com %d
        - float com %f
        - double com %lf
    
3. Endereços de memória com %p: 
Para exibir endereços de memória de variáveis (ou ponteiros), 
use %p e converta o ponteiro para (void *) para garantir a compatibilidade de tipo.

Esses especificadores são fundamentais para evitar erros e assegurar que o printf e scanf interpretem os valores corretamente.

## Especificadores de Formato Comuns em C: ##
    Inteiros:
        %d ou %i: Especificador para inteiros com sinal (int).
        %u: Especificador para inteiros sem sinal (unsigned int).
        %ld: Para long int (inteiro longo com sinal).
        %lu: Para unsigned long int (inteiro longo sem sinal).

    Números de Ponto Flutuante:
        %f: Para float e double, exibe o valor como número decimal.
        %lf: Para double, usado especificamente em scanf (não é necessário no printf).
        %e ou %E: Representa float ou double em notação científica (exponencial).
        %g ou %G: Escolhe automaticamente entre %f e %e com base na magnitude do valor.

    Caracteres e Strings:
        %c: Para char, exibe um caractere único.
        %s: Para strings (char[]), exibe uma sequência de caracteres.

    Ponteiros:
        %p: Exibe um endereço de memória (ponteiro) em notação hexadecimal.

    Hexadecimal e Octal:
        %x ou %X: Para inteiros (int) em notação hexadecimal (minúsculo com %x e maiúsculo com %X).
        %o: Para inteiros em notação octal (int).

*/