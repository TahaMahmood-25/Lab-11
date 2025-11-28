#include <stdio.h>
#include <string.h>

int summation(int scores[], int rounds) {
    float sum = 0;
    if (rounds == 0) {
        return 0;
    }
    return scores[rounds -1] + summation(scores, rounds - 1);
}

int main () {
    int rounds, teams, limit;
    int totalSum[50];

    printf("Enter the total number of rounds \n");
    scanf("%d", &rounds);

    printf("Enter the total number of teams \n");
    scanf("%d", &teams);

    int scores[50][50];
    printf("Enter scores in array\n");

    for (int i = 0; i < rounds; i++) {
        for (int j = 0; j < teams; j++) {
            scanf("%d", &scores[i][j]);
        }
    }

    printf("The scores are: \n");
    for (int i = 0; i < teams; i++) {
        for (int j = 0; j < rounds; j++) {
            printf("%d, ", scores[i][j]);
        }
        totalSum[i] = summation(scores[i], rounds);
    }

    printf("\nTotal scores of each team:\n");
    for(int t = 0; t < teams; t++) {
        printf("Team %d = %d\n", t + 1, totalSum[t]);
    }
    
    printf("\nEnter score threshold: ");
    scanf("%d", &limit);

    printf("\nTeams above threshold:\n");
    for(int t = 0; t < teams; t++) {
        if(totalSum[t] > limit)
            printf("Team %d (%d points)\n", t + 1, totalSum[t]);
    }

return 0;
}