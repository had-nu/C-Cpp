#include <stdio.h>

int main(){

    /*  variables   =   Allocated space in memory to store a value;
                        We refer to a variable's name to access the stored value;
                        That variable now behaves as if it was the value it contains;
                        BUT we need to declare what type of data we are storing.
    */

    int x; //declaration
    x = 123; //initialization
    int y = 456; //declaration + initialization

    int age = 37; //integer
    float gpa = 17.05; //floating point number
    char grade = 'C'; //single character
    char name[] = "Bro"; //array of characters; String are tecnicaly an Object.

    printf("Hello, my name is %s\n",name);
    printf("My age is %d years old\n",age);
    printf("My avarage grade is %c\n",grade);
    printf("My gpa is %f\n",gpa);

    return 0;
    // teste do git
}