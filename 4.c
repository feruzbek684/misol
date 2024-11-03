#include <stdio.h>
int main () {
    char baraban[40];
    printf("barabanni kiritng: ");
    int o_harflari = 0,u_harflari = 0, i_harflari = 0, a_harflari = 0; 
    scanf("%s", &baraban);
    for (int i = 0; baraban[i] != '\0'; i++)
    {
        if (baraban[i] == 'a' || baraban[i] == 'A')
        {
            a_harflari ++;
        }
        if (baraban[i] == 'o' || baraban[i] == 'O')
        {
            o_harflari ++;
        } 
        if (baraban[i] == 'i' || baraban[i] == 'I')
        {
            i_harflari ++;
        }
        if (baraban[i] == 'u' || baraban[i] == 'U')
        {
            u_harflari ++;

        }   
    }

    printf("a harfi %dta\n", a_harflari);
    printf("o harfi %dta\n", o_harflari);
    printf("u harfi %dta\n", u_harflari);
    printf("i harfi %dta\n", i_harflari);    

    return 0;
}