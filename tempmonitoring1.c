#include <stdio.h>

int main() {
    printf("Temp monitor\n\n");

    int valid_entry = 0; //flag
    int t_high[4] = {0};
    int t_low[4] = {0};
    const int t_highest_lim = 40;
    const int t_lowest_lim = -40;
    int t_highest =0;
    int i_highest_day =0;
    int t_lowest =0;
    int i_lowest_day =0;
    for (int i = 0; i < 4; i++)  {  
        do {
            printf("Enter the high of the day: ");
            scanf("%d", &t_high[i]);

            printf("Enter the low of the day: ");
            scanf("%d", &t_low[i]);

            if (t_high[i] > t_low[i] && t_high[i] <= t_highest_lim && t_low[i] >= t_lowest_lim) valid_entry = 1;
        } while (valid_entry == 0);

        if (i>0) {
            if (t_high[i] >=t_high[i-1]) {  
                t_highest = t_high[i];
                i_highest_day = i + 1;
            }
            if (t_low[i] <=t_low[i-1]) {
                t_lowest = t_low[i];
                i_lowest_day = i + 1;
            }
        }
    }

    printf("The high temperature were %d, %d, %d, %d\n", t_high[0], t_high[1], t_high[2], t_high[3]);
    printf("The low temperature were %d, %d, %d, %d\n", t_low[0], t_low[1], t_low[2], t_low[3]);

    float avg_high = (t_high[0] + t_high[1] + t_high[2] + t_high[3]) / 4.0;
    float avg_low = (t_low[0] + t_low[1] + t_low[2] + t_low[3]) / 4.0;

    printf("The average high temperature is: %.2f\n", avg_high);
    printf("The average low temperature is: %.2f\n", avg_low);

    float overall_avg = (avg_high + avg_low) / 2.0;
    printf("The overall average temperature is: %.2f\n", overall_avg);

    printf("The highest temperature was: %d, on day %d\n", t_highest, i_highest_day);
    printf("The lowest temperature was: %d, on day %d\n", t_lowest, i_lowest_day);

    
    return 0;
}