#include <stdio.h>
#include <string.h>

struct item {
    char name[50];
    char category[50];
    int quantity;
};

int main () {
    int num,min;
    printf("Enter quantity of items \n");
    scanf("%d", &num);

    struct item arr[100];
    struct item *arr;
    char search[50];

    for (int i = 0; i < num; i++) {
        printf("Enter item name\n");
        fgets(arr[i].name, 50, stdin);
        arr[i].name[strcspn(arr[i].name, "\n")] = '\0';

        printf("Enter category \n");
        fgets(arr[i].category, 50, stdin);
        arr[i].category[strcspn(arr[i].category, "\n")] = '\0';

        printf("Enter quantity \n");
        scanf("%d", &arr[i].quantity);
    }
    printf("Enter category for searchinh \n");
    fgets(search, 50, stdin);
    search[strcspn(search, "\n")] = '\0';

    printf("Enter the minimum quantity to search \n");
    scanf("%d", &min);

}