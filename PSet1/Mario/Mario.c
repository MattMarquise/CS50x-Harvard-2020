// Coded by: (Github) @MattMarquise For CS50x

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    
    //get height
    do {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    //check height
    if (height > 0 || height < 9) {
        int counter = 0;
        for (int row=0; row<height; row++) {
            if (counter != height) {
                for (int spaces = (height-1) - counter; spaces > 0; spaces--) {
                    printf(" ");
                }
                for (int hashes = 0; hashes <= counter; hashes++) {
                    printf("#");
                }

                printf("  ");

                for (int hashes = 0; hashes <= counter; hashes++) {
                    printf("#");
                }
                
                //print
                printf("\n");
                counter++;
            }
        }     
    } 
}
