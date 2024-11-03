#include <stdio.h>
#include <ctype.h>
int main () {
    char baraban[40];
    int harflar = 0;    
    printf("barabanni kiritng: ");
    scanf("%s", &baraban);
    for (int i = 0; baraban[i] != '\0'; i++)
    {
        if (isalpha(baraban[i]))
        {
            harflar ++;
        } 

    }
    printf("%dta harf bor", harflar);
    

    return 0;
     
}