#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //prompt the user for how much change they are owed
    float c;
    printf ("How much change do I owe you? (Use a decimal number, but not a $ sign):\n") ;
    c = GetFloat();
    while (c <0.00) {
        printf ("You provided an invalid number. Please try again:\n") ;
        c = GetFloat();
        }
        
    //set variables for making change
    //int change = (long) ((c+0.005)*100) ; <--This code was used prior to including math.h
    c = (c*100);
    int change = round(c);
    int quarters = 0;
    int dimes = 0;
    int nickles = 0;
        
    
    //establish the number of quarters
    for (int q = 1; change >= 25; q++) {
        change = change-25;
        quarters = q;
        }
        
    //establish the number of dimes
    for (int d = 1; change >= 10; d++) {
        change = change-10;
        dimes = d;
        }
        
     //establish the number of nickles
    for (int n = 1; change >= 5; n++) {
        change = change-5;
        nickles = n;
        }
        
    //print the results of the program
    if (quarters >= 2) {
        printf ("You get %i quarters \n", quarters);
        }
        else if (quarters == 1) {
            printf ("You get %i quarter \n", quarters);
        }
        
    if (dimes >= 2) {
        printf ("You get %i dimes \n", dimes);
        }
        else if (dimes == 1) {
            printf ("You get %i dime \n", dimes);
        }
        
    if (nickles >= 2) {
        printf ("You get %i nickles \n", nickles);
        }
        else if (nickles == 1) {
            printf ("You get %i nickle \n", nickles);
        }
        
    if (change > 1) {    
    printf ("You get %i pennies \n", change);
    }
        else if (change == 1) {
            printf ("You get %i penny \n", change);
        }
    
    
    
    printf ("You should have %i coins \n", change+nickles+dimes+quarters);
    
    
    
    
}  
