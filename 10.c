#include <stdio.h>
#include <ctype.h>
int main () {
    char ism[] = "Bugun    havo yaxshi!";
    int probel = 0;
    for (int i = 0; ism[i] != '\0' && !isspace(ism[i]); i++)
    {
        printf("%c", ism[i]);
    }puts("");

    
    return 0;
}