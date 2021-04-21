#include <stdio.h>
int main()
{
    char ar[20];

    printf("Enter a string : ");
    gets(ar);   
    //also we can write scanf("%s", &ar); instead of above

    printf("\nEntered string : ");
    puts(ar);
    //also we can write printf("%s", ar); instead of above

    return 0;
}

// we can also declare like - 
//char ar[] = "Hi how are you!";
//char ar[] = {'H','e','l','l','o','\0'};    
//char *ptr = "Hello! how r u";                          