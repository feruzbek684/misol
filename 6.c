#include <stdio.h>
#include <ctype.h>
int main () {
    char baraban[50];
    int harflar_raqamlar = 0;    
    printf("barabanni kiritng: ");
    scanf("%[^\n]s", &baraban);
    for (int i = 0; baraban[i] != '\0'; i++)
    {
        if (isalnum(baraban[i]))
        {
            harflar_raqamlar ++;
        } 

    }
    printf("%dta harf va raqam mavjud!", harflar_raqamlar);
    return 0;
}