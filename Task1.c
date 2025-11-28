#include <stdio.h>

struct gift {
    char name[50];
    char type[50];
    float price;
    int qty;
};

int main () {
    int num;
    int price;

    printf("How many gifts you want to enter ");
    scanf("%d", &num);
    getchar();

    struct gift g1[100];

    for (int i = 0; i < num; i++) {
        printf("Enter name of gift\n");
        fgets(g1[i].name, 50, stdin);

        printf("Enter type of gift\n");
        fgets(g1[i].type, 50, stdin);

        printf("Enter price\n");
        scanf("%d", &g1[i].price);
        getchar();

        printf("Enter quantity\n");
        scanf("%d", &g1[i].qty);
        getchar();
    }

    printf("Enter the criteria for price \n");
    scanf("%d", &price);

    for (int i = 0; i < num; i++) {
        if (g1[i].price > price) {
            printf("%s, %d", g1[i].name, g1[i].price);
        }
    }

    for (int i = 0; i < num; i++) {
        if (g1[i].price > price) {
            printf("%s, %d", g1[i].name, g1[i].price);
        }
    }

return 0;
}
