// Write a C program to take a number and a character from user 
// if the number is even print the same character, 
// if the number is odd print the other case of the character (a->A, B->b).
#include <stdio.h>
#include <stdlib.h>
int main(){
    int  input_number;
    char input_Char = 'a';
    char return_char;
    printf("Enter a number\n");
    scanf("%d",&input_number);
    printf("Enter a charachter\n");
    scanf(" %c",&input_Char);
    // if number is odd : a->A , B->b
    if(input_number&1){
        // case alpha from  "a" -> "z"
        if(input_Char>='a' && input_Char <= 'z'){
            return_char = input_Char - 'a' +'A';

        // the second case is A to Z    
        }else{
            return_char = input_Char -'A' +'a';
        }
    }else{
        return_char = input_Char;
    }
    printf("%c",return_char);
}
