#include<stdio.h>

int main(){
    // char str[] = "Harry";
    char str[] = {'H', 'e', 'l', 'l', '0', '\0'};
    
    char *ptr = str;
    
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}