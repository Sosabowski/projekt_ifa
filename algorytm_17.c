#include<stdio.h>

int main()
{
    FILE *fp = fopen("tablice.txt", "r");

    int tab[200], a=0, i=0;
    while(fgets(tab, 200, fp)!= NULL)
    {
        printf("%s", tab);
    }

     fclose(fp);


    return 0;
}

