#include <math.h>
#include <cs50.h>
#include <stdio.h> 

int main(void)
{
    // Get the change amount 
    float dollars;
    do
    {
        dollars = get_float("Change: ");
    }
    while (dollars <= 0);
        
    // Make dollars into cents
    int cents = round(dollars * 100);
    int coins = 0;
    while (cents >= 25)
    {
        coins ++;
        cents -= 25;
    }
    while (cents >= 10)
    {
        coins ++;
        cents -= 10;
    }
    while (cents >= 5)
    {
        coins ++;
        cents -= 5;
    }
    while (cents >= 1)
    {
        coins ++;
        cents -= 1;
    }
    
    printf("I have %i coin(s)\n)", coins);
}
