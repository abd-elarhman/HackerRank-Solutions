/**
 * @Repository HackerRank Soulutions
 * @file       Staircase
 * @author Abdelrahman Ahmed Moussa (abdelrahman.ahmed0599@gmail.com)
 * @copyright Copyright (c) 2024
 * 
 */

void staircase(int n)
{
    int row,col;
    int total=n-1;
    for (row=0; row<n; row++) 
    {
        for (col=0; col<n ; col++ )
        {
            if ((total-col)<=row)
            {
                printf("#");
            }
            else
            {
              printf(" ");  
            }
            
        }
        printf("\n");
    }
}
