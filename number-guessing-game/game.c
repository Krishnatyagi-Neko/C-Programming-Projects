#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(0));
    int guessed,random_num,count=0;
    // Generate random number between 1 and 100
    random_num = (rand() % 100) + 1;
    do
    {
        printf("Guess A Number: ");
        scanf("%d",&guessed);
        if (guessed==random_num)
        {
            printf("Congrats!!\n");
        }
        else if (guessed<random_num)
        {
            printf("Please Guess Higher\n");
        }
        else{
            printf("Please Guess Lower\n");
        }
        count++;
    } while (guessed!=random_num);
    printf("You took %d chances to Beat This Game",count);
    return 0;
}
