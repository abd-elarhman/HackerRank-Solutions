/**
 * @Repository HackerRank Soulutions
 * @file       Mini-Max Sum
 * @author Abdelrahman Ahmed Moussa (abdelrahman.ahmed0599@gmail.com)
 * @copyright Copyright (c) 2024
 * 
 */

void miniMaxSum(int arr_count, int* arr)
{
    unsigned long sum=0;
    unsigned long min=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];      // or unsigned long min=4000000000; the max value for unsigned long
    unsigned long max=arr[0];                                 //or unsigned long max=0; the min value for unsigned long

    int i=0,j=0;
    for (i=0; i<arr_count ;i++ )
    {
        for (j=0;j<arr_count; j++) 
        {
            if (i!=j) 
            {
                sum=sum+arr[j];
            }
        }
        if (sum>max)
        {
            max=sum;
        }
        if (sum<min)
        {
            min=sum;
        }
        sum=0;
    }
    printf("%ld %ld",min,max);
}


