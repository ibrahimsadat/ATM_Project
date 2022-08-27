#include "card_module.h"
#include "cmake-build-debug/terminal_moodule.h"
#include "cmake-build-debug/server_module.h"


#include <stdio.h>
extern int month,year, amount ,counter_state ,pan,balance;
extern char name [];
int flag=1;
int main() {

        int pin ,choice;
    while (pin != 1520) {
        printf("ENTER YOUR SECRET PIN NUMBER:\n");
        scanf("%d", &pin);
        if (pin != 1520)
            printf("PLEASE ENTER VALID PASSWORD\n");
    }
    do {
        printf("********Welcome to ATM Service**************\n");
        get_card_holder_name();
        get_expiration_date();
        get_card_pan();
        printf("***********************************************\n");

        get_Transaction_Date();
      if(is_Card_Expried( month, year)==0)
      {
          printf("The Card Is Expired\n");
          flag=0;
          break;
      }
      else
      {
          get_Transaction_Amount();
          if(is_Below_Max_Amount(amount)==0)
          {
              printf("Sorry this Amount Above Of the amount \n");
              flag=0;
              break;
          }
          else
          {
             if (is_Valid_Account(counter_state)==0)
             {
                 printf("Pan Account");
                 flag=0;
                 break;
             }
             else
             {
                 if (is_Amount_Available(amount)==0)
                 {
                     printf("Sorry Your Balance less than your order amount \n");
                     flag=0;
                     break;
                 }
                 else
                 {

                     server_side_transactions(amount);
                     save_Transaction( name, year, month , pan);

                     break;
                 }
             }
          }

      }






} while (flag==1);
    printf("\t\t\t\t\t\t\t%s",get_Transaction_Date());
    printf("----------------------------------------------------------------------------\n");
    printf("Name:%s\nYour Balance: %d\n The Amount: %d\n",name,balance,amount);
printf("\n\n THANKS FOR USING OUT ATM SERVICE\n");
}