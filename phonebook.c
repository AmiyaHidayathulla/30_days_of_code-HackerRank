#include <stdio.h>
#include <string.h>

struct Phone {
    char name[100];
    char number[11]; 
};

int main() {
    int n;
    printf("Enter the total no. of entries you want to add: ");
    scanf("%d", &n);
    struct Phone phoneBook[n];
    printf("Enter the name and phone number respectively: ")
    for (int i = 0; i < n; i++) {
        scanf("%s %s", phoneBook[i].name, phoneBook[i].number);
    }
    printf("Enter the name you want to search number: ")
    char query[100];
    while (scanf("%s", query) != EOF) {
        int found = 0;
        for (int i = 0; i < n; i++) {
            if (strcmp(query, phoneBook[i].name) == 0) {
                printf("%s=%s\n", phoneBook[i].name, phoneBook[i].number);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Not found\n");
        }
    }

    return 0;
}
