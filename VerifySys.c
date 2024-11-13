#include <stdio.h>
#include <ctype.h> // Para usar tolower()

// Declaração e definição da função verify_age
int verify_age(int age) {
    if (age < 18) {
        return 1; // Maior de idade
    } else {
        return 0; // Menor de idade
    }
}    

// Declaração e definição da função verify_xp
int verify_xp(int xp) {
    if (xp < 2) {
        return 1; // Tem a experiência necessária
    } else {
        return 0; // Não tem a experiência necessária
    }
}

// Declaração e definição da função int verify_skill
int verify_skill(char level) {
    level = tolower(level);
    if (level == 'i') {
        return 1; // Tem nível Intermediário
    } else if (level == 'a') {
        return 0; // Tem nível Avançado
    } else {
        return -1; // Entrada inválida
    } 
}


int main() {
    
    // Verificar idade
    int age;
    printf("Digite a sua idade: "); // Solicita que o usuário digite a idade.
    scanf("%d", &age);
     
    // Chamar a função verify_age para verificar se a idade é maior de idade.
    if (verify_age(age)) {
        printf("Infelizmente, você ainda não pode participar do programa.\n");
        return 0;
    } else 
    {
        printf("Parabéns! Você tem idade para participar do programa. \nVamos verificar sua experiência.\n");
    }

    // Verificar experiência
    int xp;
    printf("Quantos anos de experiência você tem? "); // Solicita que o usuário digite sua experiência em anos.
    scanf("%d", &xp);

    // Chamar a função verify_xp para verificar se o candidato tem experiência o suficiente.
    if (verify_xp(xp))
    {
        printf("Que pena. Precisa ter ao menos 2 anos de experiência.\n");
        return 0;
    } else
    {
        printf("Parabéns! Você tem experiênia suficiente para participar do programa. \nAgora vamos verificar seu nível de habilidade. \nNão se preocupe, está etapa não é eliminatória. :)\n");
    }
    
    // Verificar nível de habilidade
    char level;
    getchar(); // Consumir o '\n' deixado pelo scanf anterior
    int result;
    
    // Loop para garantir que a entrada seja válida
    do {
        printf("Como você classifica seu nível de habilidade?\nDigite 'I' se seu nível de habilidade for Intermediário.\nDigite 'A' se seu nível for Avançado.\n");
        scanf("%c", &level);

        // Chamar a função verify_skill para verificar o nível de habilidade do candidato.
        int result = verify_skill(level);
        if (result == -1) {
            printf("Entrada inválida para o nível de habilidade. Tente novamente com 'I' ou 'A'.\n");
        }
    } while (result == -1);  // Continua pedindo até a entrada ser válida
    
    if (result == 1) {
        printf("Ótimo! Vamos ajustar o aprendizado de acordo com seu nível atual para um melhor aproveitamento.\nSeja muito bem vindo!");
    } else if (result == 0) {
        printf("Muito bem! Esperamos contar com você para ajudar no aprendizado dos demais com menos experiência enquanto evolui ainda mais.\nSeja muito bem vindo!");
    }    

    return 0;
}

