/**
 * @Repository HackerRank Soulutions
 * @file       Sansa and XOR
 * @author Abdelrahman Ahmed Moussa (abdelrahman.ahmed0599@gmail.com)
 * @copyright Copyright (c) 2024
 *  
 */
/*********************************************best one*****************************************************/

int sansaXor(int arr_count, int* arr) 
{
    // initialize result by 0 as (a XOR 0 = a) 
    int result = 0; 
  
    // if arr_count is even number, all numbers will appear even number of times. So result is 0.
    if (arr_count % 2 == 0)
    {
      result=0;
    }
    //else
   //then frequency of elements at even positions are odd and frequency of elements at odd positions are even
  // notice that this is zero indexed array
    for (int i = 0; i<arr_count; i+=2)
    {
      result ^= arr[i];
    }    
    return result;
}
/***** resources
https://www.geeksforgeeks.org/xor-subarray-xors-set-2/?ref=ml_lbp
*****/



/***********************this code produce time limit exceed****************************/
/*
int sansaXor(int arr_count, int* arr) 
{
    int i,j,m;
    int result=0;
    
    //1^2^3^(1^2)^(2^3)^(1^2^3)>> because   1^2^3 repeated twice there is no need to loop on it because the result is always zero
    
    // loop only for this (1^2)^(2^3)>>>> (first index^2^.....^last index-1)^(first index+1^3^......last index-1)
    for (i=0; i<arr_count; i++)
    {
        for (m=1;m<arr_count-1;m++)
        {
            result=result^arr[i];
            for (j=i+1; j<arr_count-m; j++)
            {
                result=result^arr[j];
            }
        }
        
    }
    return result;
}
*/
/***********************************************************************/
/*
int sansaXor(int arr_count, int* arr) 
{
    // initialize result by 0 as (a XOR 0 = a) 
    long result = 0; 
    long freq=0;
  
    // loop over all elements once 
    for (int i = 0; i < arr_count; i++) 
    { 
        // get the frequency of current element 
        freq = (i + 1) * (arr_count - i); 
  
        // if frequency is odd, then XOR it with the result 
        if (freq % 2 == 1)
        {
             result = result ^ arr[i]; 
        }   
    }
    return result;
}
*/
