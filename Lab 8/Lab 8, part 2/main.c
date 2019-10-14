#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 257

int main()
{
    char Str[MAX];
    fgets(Str,MAX,stdin);
    int count = 0, i=0, f=1;
    while (Str[i] != '\0'){
        if (Str[i]=='\t'||Str[i]==' '||Str[i]=='\n'){
            i++;
            f=1;
        }
        else if (f==1){
            count++;
            i++;
            f=0;
        }
        else{
            i++;
        }
    }
    printf("%d words", count);
    return 0;
}
