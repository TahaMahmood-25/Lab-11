#include <stdio.h>

void count(int days);

int main () {
    int Evcount = 0, n, days;

    printf("How may events \n");
    scanf("%d", &Evcount);

    for (int i = 0; i < Evcount; i++) {
        printf("Enter how many days till this %d event", i + 1);
        scanf("%d", &days);

        count(days);
        printf("\n");
    }
return 0;
}

void count(int days) {
    if (days < 0) {
        return;
    }
    printf("%d", days);
    count(days-1);
}