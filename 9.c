#include <stdio.h>
#include <ctype.h>
int main () {
    char ism[50];
    char fam[50];
    int ism_familiya = 0, familiya_ism = 0; 
    printf("barabanni kiritng: ");
    scanf("%s", &ism);
    scanf("%s", &fam);
    printf("ism [50] = %s  %s\n", ism, fam);
    printf("familiya [50] = %s  %s", fam, ism);
    return 0;
}