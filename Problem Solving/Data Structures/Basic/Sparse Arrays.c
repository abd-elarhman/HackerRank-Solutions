/**
 * @Repository HackerRank Soulutions
 * @file       Sparse Arrays
 * @author Abdelrahman Ahmed Moussa (abdelrahman.ahmed0599@gmail.com)
 * @copyright Copyright (c) 2024
 * 
 */

/*------------------------------------------------------------------------------*/
/*                                                                              */
/*                 I didn't used any functions from <string.h>                  */
/*                                                                              */
/*------------------------------------------------------------------------------*/
typedef enum 
 {
   STD_NOK=0,
   STD_OK=1  
 }STD_STATUS_t;
 
 STD_STATUS_t stringCompare(char *string1,char *string2)
 {
     STD_STATUS_t status=STD_OK;
     int i=0;
     while( (string1[i]||string2[i]) && (status==STD_OK) )
     {
         if (string1[i]!=string2[i])
         {
             status=STD_NOK;
         }
         i++;
     }
     if (string1[i]!=string2[i]) //that means one of them is greater than another and the index [i] is not equal null in the greater
     {
         status=STD_NOK;
     }
     
     return status;
 }
 
int* matchingStrings(int stringList_count, char** stringList, int queries_count, char** queries, int* result_count) 
{
    /*
         To return the integer array from the function, you should:
     *      - Store the size of the array to be returned in the result_count variable
     *      - Allocate the array statically or dynamically
     */
    *result_count=queries_count; //requirement
    
    int queriesCounter,stringListCounter;
    int *queriesFreqArray=(int*)calloc( queries_count, sizeof(int));
    for (queriesCounter=0 ; queriesCounter<queries_count ; queriesCounter++)
    {
        for (stringListCounter=0; stringListCounter<stringList_count; stringListCounter++)
        {
            queriesFreqArray[queriesCounter]+=stringCompare(queries[queriesCounter],stringList[stringListCounter]);   
        }
    }
    return queriesFreqArray;
}
