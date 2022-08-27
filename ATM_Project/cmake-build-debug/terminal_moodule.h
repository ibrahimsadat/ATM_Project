
#ifndef ATM_PROJECT_TERMINAL_MOODULE_H
#define ATM_PROJECT_TERMINAL_MOODULE_H

const char* get_Transaction_Date (void);
short int is_Card_Expried (int month ,int year);
void get_Transaction_Amount(void);
int is_Below_Max_Amount(int amount);
int setMaxAmount (void);

#endif //ATM_PROJECT_TERMINAL_MOODULE_H
