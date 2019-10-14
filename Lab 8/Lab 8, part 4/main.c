#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    int hours;
    int minutes;
    int seconds;
}time;

time time_split (long long total_seconds){
    time real;
    real.hours= total_seconds/3600;
    real.minutes = ((total_seconds)-(real.hours*3600))/60;
    real.seconds = total_seconds-(real.minutes*60)-(real.hours*3600);
    return real;
}

int main() {

    long long total;
    time now;
    scanf("%lld", &total);
    if (total<86400 && total>0){
        now = time_split(total);
        printf("%d\thours\n%d\tminutes\n%d\tseconds\n", now.hours, now.minutes, now.seconds);
    }
    else if (total > 86400){
        while (total>86400){
            total-=86400;
        }
        now = time_split(total);
        printf("%d\thours\n%d\tminutes\n%d\tseconds\n", now.hours, now.minutes, now.seconds);
    }
    else if (total<0){
        while(total<0){
            total+=86400;
        }
        now = time_split(total);
        printf("%d\thours\n%d\tminutes\n%d\tseconds\n", now.hours, now.minutes, now.seconds);
    }
    else{
        printf("0\thours\n0\tminutes\n0\tseconds\n");
    }
    return 0;
}
