#include<stdio.h>

struct Date
{
    
    int day,month,year;

};
    
void initDate(struct Date* ptrDate)
{
    ptrDate->day=04;
    ptrDate->month=02;
    ptrDate->year=1999;
    printf("--------------------------------------\n");
    printf("the date is %d/%d/%d\n",ptrDate->day,ptrDate->month,ptrDate->year);
}
void printDateOnConsole(struct Date* ptrDate)
{   
    printf("--------------------------------------\n");
    printf("the date is %d/%d/%d\n",ptrDate->day, ptrDate->month, ptrDate->year);
}
void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("Enter the values of date,month and year\n");
    scanf("%d%d%d",&ptrDate->day,&ptrDate->month,&ptrDate->year);
    printf("--------------------------------------\n");
    printf("the date is %d/%d/%d\n",ptrDate->day,ptrDate->month,ptrDate->year);
}

int main()
{
    struct Date d;
    int choice;
   
    do
    
    {    printf("--------------------------------------\n");
         printf("Enter the choice\n");
         printf("1.Initialize date\n");
         printf("2.Enter the date values\n");
         printf("3.display dates\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
                    initDate(&d);
                    
                    break;
            case 2:
                    acceptDateFromConsole(&d);
                    break;
            case 3:
                    printDateOnConsole(&d);
                    break;
            default:
                    printf("you entered wrong\n");
        }

    }while(choice!=0);
    return 0;
}
