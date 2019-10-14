#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 257

int main()
{
    char string[MAX], word[MAX];
    fgets(string,MAX,stdin);
    scanf("%s", word);
    int count=0;
    char *pointer = string;
    while((pointer=strstr(pointer, word))!=0){
        int place = pointer - string;
        printf("Occurrence at index %d\n", place);
        count++;
        pointer++;
    }
    printf("Total number of occurrences = %d", count);
    return 0;
}
