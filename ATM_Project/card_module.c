#include "card_module.h"
#include "cmake-build-debug/terminal_moodule.h"
#include <stdio.h>

/*extern*/  char name;
int month,year,pan,counter_state=0;

void get_card_holder_name ( void )
{

    printf("Enter Holder Card Name:\t");
    scanf("%s",&name);
    counter_state++;

}
void get_expiration_date (void)
{

    printf("Enter this Month:\t\n");
    scanf("%d",&month);

    printf("Enter this Year:\t\n");
    scanf("%d",&year);


}


void get_card_pan(void)
{
    printf("Enter The card PAN:\t\n");
    scanf("%d",&pan);
}
