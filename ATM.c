#include<stdio.h>
#include<conio.h>
int main(){
    float x, y;
    char ch;
printf("Enter the initial amount\n");
scanf("%f",&x);
printf("Enter\nC for credit\nD for debit\nB for balance\n");
scanf("\n%c",&ch);
switch ( ch)
{
case 'C' :
     printf("Enter cradit amount\n");
     scanf("%f",&y);
                x = x+y;
                printf("New amount =%f",x);
              break;
              case 'D' :
              printf("Enter the debit amount\n");
              scanf("%f",&y);
              if ( x>=y)
              {
                x =x-y;
                printf("New amount=%f",x);
              }
              else
              {
                  printf("Insufficient amount in your account");
              }
               break;
               case 'B' :
               printf("Amount in your account=%f",x);
               break;
               default:
               printf("choose correct option for operation");
}
        getch();
    return 0;
}
