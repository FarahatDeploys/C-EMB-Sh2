// Write a program that reads the radius of 
// a circle and calculates the area and circumference.
#include <stdio.h>
#include <stdlib.h>
int main(){
    float raduis;
    float perimeter;
    float area;
    printf("Enter raduis of the circle \n");
    scanf("%f",&raduis);
    perimeter = 2 * raduis * 3.14;
    area = 3.14*raduis*raduis;
    printf("Perimeter     : %.4f\n",perimeter);
    printf("Area          : %.4f\n",area);

}
