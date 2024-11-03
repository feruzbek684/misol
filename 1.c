#include <stdio.h>
int main () {
    char baraban[40];
    printf("barabanni kiritng: ");
    scanf("%s", &baraban);
    for (int i = 0; baraban[i] != '\0'; i++)
    {
        if (baraban[i] == 'a')
        {
            baraban[i] = 'b';
        }
        else if (baraban[i] == 'A')
        {
            baraban[i] = 'B';
        }
        else if (baraban[i] == 'b')
        {
            baraban[i] = 'a';
        }
        else if (baraban[i] == 'B')
        {
            baraban[i] = 'A';
        }
    }

    printf("%s", baraban);


    return 0;
     
}