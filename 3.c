#include <stdio.h>
#include <ctype.h>
int main () {
    char baraban[40];
    int raqamlar = 0;    
    printf("barabanni kiritng: ");
    scanf("%s", &baraban);
    for (int i = 0; baraban[i] != '\0'; i++)
    {
        if (isdigit(baraban[i]))
        {
            raqamlar ++;
        } 

    }
    printf("%dta raqam bor", raqamlar);
    
    return 0;

     
}