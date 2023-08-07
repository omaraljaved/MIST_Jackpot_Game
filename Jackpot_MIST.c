#include <stdio.h>
#include <stdlib.h>

int max_num(int a_033[])
{
    int i_033 , max_033=0;

    for(i_033=0;i_033< 3;i_033++)
    {
        if(a_033 > max_033)
        {
            max_033 = a_033[i_033];
        }
    }
    return max_033;
}


int min_num(int b_033[])
{
    int j_033 , min_033=9;

    for(j_033=0;j_033< 3;j_033++)
    {
        if(b_033[j_033] < min_033)
        {
            min_033 = b_033[j_033];
        }
    }
    return min_033;
}


int checkprime(int a_033)
{
    int i_033,flag_033=1;

    for(i_033=2;i_033< a_033/2 ;i_033++)
    {
        if(a_033 % i_033 == 0)
        {
            flag_033 = 0;
            break;
        }
    }
    return flag_033;
}



int main()
{

     int winnings_033=50, i_033, num_033[3], max_033, min_033, check_max_prime_033;
     int check_min_prime_033;
     printf("\t\t\t\tWelcome to the MIST Jackpot Game!!!");
     printf("\n\t\t\tTry your luck and you could walk away with HUGE winnings!!");
     printf("\n\t\t\t\tHere's your gift! Your Starting Balance is: %d", winnings_033);
     printf("\n\t\t\t\t\tOmar Al Javed, 201936033");


     srand(time(NULL));


    while(1)
        {

         printf("\n\tPress 1 to spin the roulette");
         printf("\n\tPress 2 to exit with current winnings!");


          int choice_033;
          printf("\n\nEnter your choice:");
          scanf("%d",&choice_033);



            if(choice_033==1)
                {

                    printf ("Spinning!!And The number on the Jackpot is:");
                    for (i_033=0; i_033<3; i_033++)
                    {
                        num_033[i_033] = rand() % 10;
                        printf ("%d",num_033[i_033]);
                    }

                    max_033 = max_num(num_033);
                    printf("\n\nMax Was:%d", max_033);


                    min_033 = min_num(num_033);
                    printf("\n\nMin Was:%d", min_033);

                    check_max_prime_033 = checkprime(max_033);

                    if (check_max_prime_033==1)
                        {
                            winnings_033= winnings_033 +( max_033*10);
                        }
                    else if (check_max_prime_033==0)
                        {
                            winnings_033 = (winnings_033-40);
                        }


                    check_min_prime_033 = checkprime(min_033);

                    if (check_min_prime_033 == 1)
                        {
                            winnings_033 = winnings_033 + (min_033*5);

                        }
                    else if (check_min_prime_033== 0)
                        {
                            winnings_033 = winnings_033-20 ;
                        }


                    printf("\n\nYour current winning:%d\n",winnings_033);

                 }

                 else if(choice_033==2)
                 {

                    if(winnings_033>0)
                        {
                            printf("\n\n\nCongrats! You're a winner! Collect %d from the counter!!!",winnings_033);
                        }
                    else
                        {
                            printf("\n\nSorry that you've lost %d, better luck next time!",winnings_033);
                        }

                    printf("\n\n\nThanks for playing MIST arcade! See you again!!\n\n");

                    break;
                 }


  }



    return 0;
}
