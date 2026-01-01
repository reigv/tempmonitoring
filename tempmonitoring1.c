#include <stdio.h>

int main() {
    printf("Temp monitor\n\n");

    int valid_entry = 0; //flag
    int t_high = 0;
    int t_low =0;
    const int t_highest = 40;
    const int t_lowest = -40;
    do {
        printf("Enter the high of the day: ");
        scanf("%d", &t_high);

        printf("Enter the low of the day: ");
        scanf("%d", &t_low);
        
        if (t_high > t_low && t_high <= t_highest && t_low >= t_lowest) valid_entry = 1;
    } while (valid_entry == 0);
}