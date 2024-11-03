#include <stdio.h>
#include <ctype.h>
int main () {
    char baraban[50];
    int katta_harflar = 0;    
    printf("barabanni kiritng: ");
    scanf("%[^\n]s", &baraban);
    for (int i = 0; baraban[i] != '\0'; i++)
    {
        if (isupper(baraban[i]))
        {
            katta_harflar ++;
        } 

    }
    printf("%dta katta harf mavjud!", katta_harflar);
    return 0;
}