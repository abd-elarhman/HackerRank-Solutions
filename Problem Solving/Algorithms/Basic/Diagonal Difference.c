/**
 * @Repository HackerRank Soulutions
 * @file       Diagonal Difference
 * @author Abdelrahman Ahmed Moussa (abdelrahman.ahmed0599@gmail.com)
 * @copyright Copyright (c) 2024
 * 
 */

/*------------------------------------------------------------------------------*/
/*                                                                              */
/*                              Solution 01                                     */
/*                                                                              */
/*------------------------------------------------------------------------------*/
int diagonalDifference(int arr_rows, int arr_columns, int** arr) 
{
    int i,j,d1=0,d2=0;
    j=arr_columns-1;
    for (i=0 ; i<arr_rows ; i++,j--)
    {
        d1=d1+arr[i][i]; //i,i not i,j
        d2=d2+arr[i][j];
    }
    if (d1>=d2)
    {
        return d1-d2;
    }
    else
    {
        return d2-d1;
    }
}
/*------------------------------------------------------------------------------*/
/*                                                                              */
/*                                  Solution 02                                 */
/*                                                                              */
/*------------------------------------------------------------------------------*/
/*
int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int i,j,d1=0,d2=0;
    for (i=0 ; i<arr_rows ; i++)
    {
        for (j=0 ; j<arr_columns ; j++)
        {
            if (i==j)
            {
                d1=d1+arr[i][j];
            }
            if ((i+j)==(arr_columns-1))
            {
                d2=d2+arr[i][j];
            }
        }
    }
    if (d1>=d2)
    {
        return d1-d2;
    }
    else
    {
        return d2-d1;
    }*/
}
*/
