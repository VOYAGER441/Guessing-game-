#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int gu,sc;
sc=100;
    int randomNumber=rand()%100;
    printf("Hii,Let's play a guessing game\n");
    while(gu!=randomNumber)
    {
        printf("Enter your guessing number under 100:");
        scanf("%d",&gu);
        if(gu<randomNumber)
        {
            printf("\n%d it is a small guess!\n",gu);
            printf("Try again\n");
        }
        else if(gu>randomNumber)
        {
            printf("\n%d it is a big guess!\n",gu);
            printf("Try again\n");
        }
        else if(gu==randomNumber)
        {
            printf("Wow,your guess is rigth %d = %d :)\n",randomNumber,gu);
            printf("\nYOU WIN\n");
        }
sc=sc-5;
    }
//add the score board 
printf("\n your score is now=%d",sc);
}