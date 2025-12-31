#include <stdio.h>

int main() {
    printf("Temp monitor\n\n");

    int valid_entry = 0; //flag
    int t_high = 0;
    int t_low =0;
    do {
        printf("Enter the high of the day: ");
        scanf("%d", &t_high);

        printf("Enter the low of the day: ");
        scanf("%d", &t_low);
        

    } while (valid_entry = 0);
}