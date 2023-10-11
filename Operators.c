#include <stdio.h>
void solve(double meal_cost, int tip_percent, int tax_percent) 
{
    double tip = meal_cost * tip_percent / 100;
    double tax = meal_cost * tax_percent / 100;
    double total_cost = meal_cost + tip + tax;
    int rounded_total_cost = (int)(total_cost + 0.5);
    printf("%d\n", rounded_total_cost);
}
int main() {
    double meal_cost;
    int tip_percent, tax_percent;
    scanf("%lf", &meal_cost);
    scanf("%d", &tip_percent);
    scanf("%d", &tax_percent);
    solve(meal_cost, tip_percent, tax_percent);
    return 0;
}
