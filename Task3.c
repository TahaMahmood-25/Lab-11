#include <stdio.h>

struct Employees {
    char name[50];
    int ID;
    int days;
};

int attendence(struct Employees e[], int n);

int main () {
    int num, min = 0;

    printf("Enter the quantity of employees \n");
    scanf("%d", &num);

    struct Employees emp[100];


    for (int i = 0; i < num; i++) {
        printf("Enter the name of employee \n");
        scanf("%d", &emp[i].name);

        printf("Enter the ID of employee \n");
        scanf("%d", &emp[i].ID);

        printf("Enter the number of days present \n");
        scanf("%d", &emp[i].days);
    }
        int attendenceVal = attendence(emp, num);
        printf("\nTotal attendance of all employees = %d\n", attendenceVal);

        printf("\nEnter minimum required days: ");
        scanf("%d", &min);

        for (int i = 0; i < num; i++) {
            if (emp[i].days < min) {
                printf("Employee %s with ID %d that was present %d days \n is short of attendence \n", emp[i].name, emp[i].ID, emp[i].days);
            }
        }
    
return 0;
}

int attendence(struct Employees e[], int n) {
    if (n == 0) {
        return 0;
    }
    return e[n-1].days + attendence(e, n-1);
}