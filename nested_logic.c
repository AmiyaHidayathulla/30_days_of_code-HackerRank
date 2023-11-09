#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int returnedDay, returnedMonth, returnedYear;
    int dueDay, dueMonth, dueYear;

    // Input for the returned date
    scanf("%d %d %d", &returnedDay, &returnedMonth, &returnedYear);

    // Input for the due date
    scanf("%d %d %d", &dueDay, &dueMonth, &dueYear);

    int fine = 0;

    if (returnedYear > dueYear) {
        fine = 10000;
    } else if (returnedYear == dueYear) {
        if (returnedMonth > dueMonth) {
            fine = 500 * (returnedMonth - dueMonth);
        } else if (returnedMonth == dueMonth && returnedDay > dueDay) {
            fine = 15 * (returnedDay - dueDay);
        }
    }

    printf("%d\n", fine);

    return 0;
}
