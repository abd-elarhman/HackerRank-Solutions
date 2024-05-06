/**
 * @Repository HackerRank Soulutions
 * @file       birthday Cake Candle
 * @author Abdelrahman Ahmed Moussa (abdelrahman.ahmed0599@gmail.com)
 * @copyright Copyright (c) 2024
 * 
 */

/*------------------------------------------------------------------------------*/
/*                                                                              */
/*                             birthday Cake Candle                             */
/*                                                                              */
/*------------------------------------------------------------------------------*/


/*
 * Complete the 'birthdayCakeCandles' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY candles as parameter.
 */

/*------------------------------------------------------------------------------*/
/*                                                                              */
/*                                  Solution 01                                 */
/*                                                                              */
/*------------------------------------------------------------------------------*/
int birthdayCakeCandles(int candles_count, int* candles)
{
    
    int i;
  
    //1-get max number 
    //2-count max number freq
    //>>in the same loop
    int max = candles[0];
    int freq=1; //must be one not zero , because i assume candles[0] is the max so i have one
    for (i=1 ; i<candles_count ; i++)
    {
        if(candles[i]>max)
        {
            max=candles[i];
            freq=1;   
        }
        else if ( candles[i]==max )
        {
            freq++;
        }
    }
    return freq;
}
/*------------------------------------------------------------------------------*/
/*                                                                              */
/*                                  Solution 02                                 */
/*                                                                              */
/*------------------------------------------------------------------------------*/
/*
int birthdayCakeCandles(int candles_count, int* candles) 
{
    int i,max=-1,counter;
    for(i=0 ; i<candles_count ; i++)
    {
        //max=candles[i];
        if(candles[i]>max)
        {
            max=candles[i];
            counter=1;
        }
        else if (candles[i]==max) 
        {
            counter++;
        }
    }
    return counter;
}
*/
