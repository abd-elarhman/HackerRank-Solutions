/**
 * @Repository HackerRank Soulutions
 * @file       Lonely Integer
 * @author Abdelrahman Ahmed Moussa (abdelrahman.ahmed0599@gmail.com)
 * @copyright Copyright (c) 2024
 * 
 */

/*------------------------------------------------------------------------------*/
/*                                                                              */
/*                              Solution 01                                     */
/*                                                                              */
/*------------------------------------------------------------------------------*/

int lonelyinteger(int a_count, int* a)
{
    int result=0;
    int i;
    for(i=0;i<a_count;i++)
    {
        result=result^a[i];
    }
    return result;
}

/*------------------------------------------------------------------------------*/
/*                                                                              */
/*                                  Solution 02                                 */
/*                                                                              */
/*------------------------------------------------------------------------------*/

/*
int lonelyinteger(int a_count, int* a)
{
    int arr[10]={0};
    int i;
    int num=1,x;
    for(i=0;i<a_count;i++)
    {
        x=a[i];
        arr[x]++;
    }
    for(i=0;i<a_count;i++)
    {
        if(arr[i]==1)
        {
            num=i;
        }
    }
    return num;
}
*/
