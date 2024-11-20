#include <stdio.h>

int main() {
  
    int age = 25;
    float pi = 3.14f; 
    double e = 2.718281828459;
    char grade = 'A';
    long int population = 7800000000;
    unsigned int distance = 500;
    long double precisionValue = 3.14159265358979323846;

    printf("Age: %d\n", age);
    printf("Pi: %f\n", pi);
    printf("E: %lf\n", e);
    printf("Grade: %c\n", grade);
    printf("Population: %ld\n", population);
    printf("Distance: %u\n", distance);
    printf("Precision Value: %Lf\n", precisionValue);

    return 0;
}
