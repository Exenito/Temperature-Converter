#include <stdio.h>
// this is a temperature converter  
int main (void) {

float num; // declare variables


printf("This is a temperature converter between Celsius and Fahrenheit.\n");

printf("Enter the temperature you want to convert: f or c ?\n"); // decision to choose between cels and fahr
char choice;
scanf("%c", &choice);

if (choice == 'c') { // for fahrenheit to celsius

    printf("Enter the fahrenheit you want to convert to celsius \n");
    scanf("%f", &num);
    float celsius;
    celsius = (num - 32) * 5/9; // celsius formula
    printf("The result is %.1f celsius", celsius);

}
else if (choice == 'f') { // for celsius to fahrenheit

    printf("Enter the celsius you want to convert to fahrenheit \n");
    scanf("%f", &num);
    float fahrenheit;
    fahrenheit =  ((num * 9)/5) + 32; // fahrenheit formula
    printf("The result is %.1f fahrenheit", fahrenheit);
}


    return 0;
}