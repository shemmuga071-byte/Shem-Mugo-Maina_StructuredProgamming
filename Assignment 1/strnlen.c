


#include <stdio.h>
#include <string.h>

int main() {
    char name[100]; 

    printf("Enter your name: ");
    scanf("%99s", name); 

    
    printf("You entered: %s\n", name);

    // Find and display the length
    printf("Length of the string: %lu\n", strlen(name));

    return 0;
}


#include <stdio.h>
const float PI = 3.141592653589793;

int main() {
    double radius, surfaceArea;

    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);

    surfaceArea = 4 * PI * radius * radius;

    printf("The surface area of the sphere is: %.2f\n", surfaceArea);

    return 0;
}

#include <stdio.h>

int main(void){
    // declaring and initializing the integer variables
    int num1;
    int num2;

    printf("Enter first number: \n");
    scanf("%d", &num1);

    printf("Enter second number: \n");
    scanf("%d", &num2);

    int addition = num1 + num2;
    printf("Sum = %d\n", addition);

    int substraction = num1 - num2;
    printf("Subtraction = %d\n", substraction);

    int multiplication = num1 * num2;
    printf("Multiplication = %d\n", multiplication);

    int division = num1 / num2;
    printf("Quotient = %d\n", division);

    int modulus = num1 % num2;
    printf("Modulus = %d\n", modulus);

    return 0;

    

}
