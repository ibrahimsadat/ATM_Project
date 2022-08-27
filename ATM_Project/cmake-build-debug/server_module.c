
#include "server_module.h"

int balance =30000;

struct Saved_data arr_saved [10];

int is_Valid_Account(int counter)
{   int flag = 1;
    if (counter == 5) { flag = 0; }
    return flag;
}

int is_Amount_Available(int amount){
    int flag = 1;
    if (amount>balance)
        flag=0;
    return flag;
};

void server_side_transactions (int amount)
{
       balance-=amount;
};

void save_Transaction(char name[],int year,int month ,int pan)
{
    arr_saved->name=name;
    arr_saved->balance=balance;
    arr_saved->year=year;
    arr_saved->month=month;
    arr_saved->pan=pan;
    arr_saved->state=1;

};