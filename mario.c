#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    printf ("Pick a number between 1 and 23 for the height:\n ") ;
    h = GetInt();
    while (h < 1 || h > 23) {
        printf ("You provided an invalid number.\nPick a new height:\n ");
        h = GetInt();
        }
    
    string c = ("#");
    string s = (" ");
    
    for (int i = 1; i < h; i++) {
        printf ("%s", s);
    }
    printf ("##\n");
    
    
    
    for (int i = 0; i < (h-1); i++)
        {
           for (int is = (i+2); is < h; is++) {
                printf ("%s", s);
            }
          
          for (int ic = (i+3); ic > 0; ic--)
            {
            printf ("%s", c);
            }
            
          
          printf ("\n");
        } 
        
    
    
}
