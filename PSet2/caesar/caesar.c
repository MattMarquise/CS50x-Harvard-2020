#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2 && isdigit(*argv[1]))
    {
        // Get the value of the key and convert it to an int
        int k = atoi(argv[1]);
        string s = get_string("plaintext: ");
        
        // Display ciphertext
        printf("ciphertext: "); 

        // Change plaintext to ciphertext
        for (int i = 0, n = strlen(s) ; i < n; i++)
        {
            // Check if the letters are lowercase
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                //PRINT LOWERCASE WITH A KEY
                printf("%c", (((s[i] - 'a') + k) % 26) + 'a'); 
            }
            
            // Check if the letters are capital
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                printf("%c", (((s[i] - 'A') + k) % 26) + 'A'); // print out uppercase with key
            }

            else
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
        return 0;
    }

    else
    {
        // Print the ciphertext
        printf("Usage: ./caesar k\n");
        return 1;
    }
}
