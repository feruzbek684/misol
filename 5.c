#include <stdio.h>
#include <ctype.h>
int main () {
    char baraban[50];
    int probellar = 0;    
    printf("barabanni kiritng: ");
    scanf("%[^\n]s", &baraban);
    for (int i = 0; baraban[i] != '\0'; i++)
    {
        if (isspace(baraban[i]))
        {
            probellar ++;
        } 

    }
    printf("%dta probel mavjud!", probellar);

    return 0;
}