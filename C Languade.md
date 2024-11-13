# C Language

 Em C, a estrutura de um programa pode ser dividida em algumas partes. Particularmente, eu prefiro enxergar a estrutura de programa em C em três partes.

### 1. Diretivas de pré-processador (ou, simplesmente, Cabeçalho de Inclusão)

    - Estas linhas, geralmente no topo, são diretivas de pré-processador que instruem o compilador a incluir bibliotecas específicas antes de compilar o código.

    - Por exemplo, #include <stdio.h> importa a biblioteca padrão de entrada e saída, permitindo o uso de funções como printf e scanf.

### 2. Declarações Globais (opcional)
É opcional porque um programa em C pode funcionar perfeitamente sem ele. Ou seja, embora apresente limitações, sem esse bloco o programa não gera erros.

    - Aqui você pode definir variáveis globais (visíveis em todo o programa) ou **definir** funções auxiliares antes de seu uso. Por exemplo:
    ```
    // Definição da função auxiliar
    int soma(int a, int b) {
        return a + b;
    }
    ```
    - Essas declarações não são obrigatórias, mas ajudam o compilador a identificar funções e variáveis que estarão disponíveis no programa.

### Função `main`

    - A função `main` é o ponto de entrada do programa em C e **é obrigatória** em qualquer programa C executável.

    - Dentro do `main`, o código é executado sequencialmente, com instruções, chamadas de *funções* e *estruturas de controle*

    - É aqui que a *lógica principal do programa é implementada*. O que for colocado no `main` será executado quando o programa for iniciado.

#### Exemplo Completo com Estrutura Típica
    ```
    #include <stdio.h>  // Cabeçalho da biblioteca para entrada e saída

   // Definição da função auxiliar
    int soma(int a, int b) {
        return a + b;
    }

    int main() {
        int resultado = soma(3, 5);  // Chama a função definida abaixo
        printf("Resultado da soma: %d\n", resultado);
        return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
    }

    ```
**Nota**
Quando Declarar Separadamente

A declaração isolada de uma função (ou protótipo) é útil nos seguintes casos:

    - Modularidade: Quando as funções estão definidas abaixo do main ou em outro arquivo, facilitando o fluxo de leitura no main e melhorando a organização do código.
    - Organização em múltiplos arquivos: Em projetos grandes, normalmente as declarações de funções ficam em um arquivo de cabeçalho (.h), enquanto as definições estão em arquivos .c.