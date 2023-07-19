// Write a program to reverse a number in
// decimal representation (1205->5021).
#include <stdio.h>
#include <stdlib.h>
int main(){
    int input1;
    printf("Enter an int to reverse it\n");
    scanf("%d",&input1);
    int temp = input1;
    int MSD_INDX = 1;
    // get most significant digit
    while(temp>10){
       
        MSD_INDX = 10*MSD_INDX;
        temp = temp/10;
    }
    int newNum =0;
    while (MSD_INDX>0)
    {
        newNum = (input1%10)*MSD_INDX+newNum;
        MSD_INDX=MSD_INDX/10;
        input1=input1/10;

    }
    printf("Reversed Number : %d",newNum);

}
