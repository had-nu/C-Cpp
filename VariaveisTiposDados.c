#include <stdio.h>

int main() {
    
    // Variáveis e Tipos de Dados (int, float and double, char)
    /*  variables   =   Allocated space in memory to store a value;
                        We refer to a variable's name to access the stored value;
                        That variable now behaves as if it was the value it contains;
                        BUT we need to declare what type of data we are storing.
    */

    int x; //declaration
    x = 123; //initialization
    int y = 456; //declaration + initialization

    int age = 37; //integer
    float gpa = 17.05678; //floating point number
    char grade = 'A'; //single character
    char name[] = "Hadnu"; //array of characters; String are tecnicaly an Object.
    
    printf("Oi, meu nome é %s.\n", name);
    printf("Eu tenho %i anos de idade.\n", age);
    printf("Minha média é %c.\n", grade);
    printf("E minha pontuação média é de %.2f\n", gpa);

    return 0;
}
