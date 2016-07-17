#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int m;
    printf ("Using a positive interger, how many minutes was your shower:\n ") ;
    m = GetInt();
    while (m < 1) {
        printf ("You provided an invalid number. Please provide a positive interger:\n ");
        m = GetInt();
        }
    
    printf ("Your shower used up %i bottles of water\n", m*12);
    
}
