#include "terminal_moodule.h"
#include <stdio.h>
#include <string.h>
#include <time.h>
int amount;

const char* get_Transaction_Date (void) {
    time_t t = time(NULL);
    return ctime(&t);
}

short int is_Card_Expried (int month ,int year)
{
    int flag =0;

    if (month <= 12 && year <= 2024)
        flag = 1;

    return flag;

}



void get_Transaction_Amount(void)
{
    printf("Enter Your Amount do You want");
    scanf("%d",&amount);

}


int is_Below_Max_Amount(int amount)
{
    int falg=0;
    int Max_Amount=(setMaxAmount());
    if (amount< Max_Amount) falg=1;

    return falg;
}


int setMaxAmount (void)
{
    int Max_Amount =25000;
    return Max_Amount;
}