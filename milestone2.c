#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void currentaccount();
void savingsaccount();

int main()
{
    char option;
    int second;
    char address[20];
    char wishes;
    char choices;
    int newpin;
    char name[10];
    int date;
    int month;
    int year;



        do{
        printf("\nPress A to update information, Press B to know current account details, Press C to know savings account details and press D to exist\n");
        scanf(" %c",&option);

        switch(option)
        {
        case 'A':
                do{
                printf("\nselect 1 to change your pin number, select 2 to update or enter your account details, select 3 to exist\n");
                scanf("%d", &second);

                switch(second)
                {
                case 1:
                   do{
                    printf("\npress A to change your pin number, Press B if you're not interested and want to exist\n");
                    scanf(" %c",&wishes);
                    switch(wishes)
                    {
                      case 'A':
                           printf("\nenter your new pin\n");
                           scanf("%d",&newpin);
                           if(newpin>999&&newpin<9999)
                           {
                               printf("\nyour new pin is: %d\n",newpin);
                           }
                           else
                            {
                               printf("\nSorry! your pin can't be set as it has exceeded the current limit of 4 digit\n");
                            }
                            break;
                      case 'B':
                           printf("\nyou don't want to change the pin and want to exist\n");
                           break;
                      default :
                          printf("\nthe value is invalid\n");
                          break;
                       }
                    }
                       while(wishes !='B');
                       break;

                 case 2:
                     do{
                       printf("\nPress A to enter your name, press B to enter your address, press C to enter your DOB in digit, press D to exist\n");
                       scanf(" %c",&choices);
                       switch(choices)
                       {
                         case 'A':
                               printf("\nenter your name\n");
                               scanf(" %s",&name);
                               printf("\nyour entered name is %s\n",name);
                               break;
                         case 'B':
                               printf("\nenter your address\n");
                               scanf(" %s",&address);
                               printf("\nyour entered address is %s\n",address);
                               break;
                         case 'C':
                               printf("\nenter your DOB in this format: dd/mm/yyyy\n");
                               scanf("%d/%d/%d", &date,&month,&year);
                               printf("\nyour DOB is: %d/%d/%d\n",date,month,year);
                               break;
                         case 'D':
                               printf("\nyou want to exist\n");
                               break;
                         default:
                               printf("\nyour value is invalid\n");
                               break;
                       }
                     }
                      while(choices!='D');
                      break;

                 case 3:
                     printf("\nyou want to exist\n");
                     break;
                 default:
                    printf("\ninvalid option\n");

                }
            }
            while(second!=3);

            break;

        case 'B':
             printf("\nyour current account details is here\n");
             currentaccount();
             break;
        case 'C':
             printf("\nyour savings account details is here\n");
             savingsaccount();
             break;
        case 'D':
             printf("\nyou want to exist\n");
             break;
        default:
             printf("\nnot a valid option\n");
              break;

   } }
    while(option !='D');

    return 0;

}
void currentaccount()
  {
      printf("\nyour current account balance is 500\n");
  }
 void savingsaccount()
  {
      printf("\nyour savings account balance is 500\n");
  }
