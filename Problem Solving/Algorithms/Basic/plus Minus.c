/**
 * @Repository HackerRank Soulutions
 * @file       plus Minus
 * @author Abdelrahman Ahmed Moussa (abdelrahman.ahmed0599@gmail.com)
 * @copyright Copyright (c) 2024
 * 
 */
void plusMinus(int arr_count, int* arr) {
    int i,postive_count=0,Negative_count=0,zero_count=0;
    for (i=0 ; i<arr_count ;i++)
    {
        if(arr[i]>0)
        {
            postive_count++;
        }
        else if (arr[i]<0)
        {
            Negative_count++;
        }
        else 
        {
            zero_count++;
        }
    }
    // explicit casting is important because compiler impilicit casting
    printf("%f\n%f\n%f",(float)postive_count/arr_count,(float)Negative_count/arr_count,(float)zero_count/arr_count);
}
