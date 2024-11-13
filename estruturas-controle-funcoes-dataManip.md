## Estruturas de controle e funções para manipulação de dados.

**Objetivo**

Trabalharemos com estruturas de controle (`if`, `for`, `while`) em conjunto com funções que processam e manipulam dados de entrada do usuário. No final, você terá criado um programa que resolve um problema prático e consolidará o uso desses recursos.

#### Problema Base para Resolver: "Sistema de Verificação de Candidatos"

Imagine que você precisa desenvolver um sistema simples para verificar se candidatos atendem a certos requisitos para um programa de treinamento:

1. O sistema deve solicitar ao usuário a idade, a experiência (em anos) e o nível de habilidade (básico, intermediário ou avançado).
2. Com essas informações, o sistema decide se o candidato pode participar do programa, com base nos critérios:
    - Idade mínima: 18 anos.
    - Experiência mínima: 2 anos.
    - Nível de habilidade: intermediário ou avançado.

O sistema deve dar uma resposta ao candidato sobre se ele foi aceito ou não.

**Passo 1: Estruturar o Código**

Para estruturar o código:

    1. Funções:
        Uma função `int verificar_idade(int idade);` que retorna 1 se a idade é maior ou igual a 18 e 0 se não.
        Uma função `int verificar_experiencia(int experiencia);` que retorna 1 se a experiência é maior ou igual a 2 anos e 0 se não.
        Uma função `int verificar_habilidade(char nivel);` que retorna 1 se o nível de habilidade for I (intermediário) ou A (avançado) e 0 se não.

    2. Função Principal:
        main que executa a lógica e chama essas funções com os dados fornecidos pelo usuário, imprimindo a mensagem final.

**Passo 2: Codificar e Testar**

Para começar, que tal resolvermos o primeiro passo e criar apenas uma das funções, como verificar_idade? Dessa forma, você consegue implementar, compilar e testar cada parte antes de seguir adiante.