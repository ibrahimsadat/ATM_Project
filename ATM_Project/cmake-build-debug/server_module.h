
#ifndef ATM_PROJECT_SERVER_MODULE_H
#define ATM_PROJECT_SERVER_MODULE_H

struct Saved_data{
    char name;
    int month , year ,pan ,balance ,state;
};

void server_side_transactions(int amount);
int is_Valid_Account(int counter);
int is_Amount_Available(int amount);
void save_Transaction(char name[],int year,int month ,int pan);

#endif //ATM_PROJECT_SERVER_MODULE_H
