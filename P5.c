//write a program to print the binary representation of a number, 
// try not to print zeros on the left (5->print 101).
#include <stdio.h>
#include <stdlib.h>
int input1;
int MSB =0;
int shifted_one_MSB;
int main(){
    printf("Enter a number \n");
    scanf("%d",&input1);
    int input_1_temp = input1;
    while (input1>0)
    {
        input1 = input1>>1;
        MSB++;
    }
    printf("MSB : %d\n",MSB);

    shifted_one_MSB = 1<<MSB-1;
    while (shifted_one_MSB>0)
    {
        if(shifted_one_MSB&input_1_temp){
            printf("1");
        }else{
            printf("0");
        }
        shifted_one_MSB = shifted_one_MSB>>1;
    }
    
    
    
}
