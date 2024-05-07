/**
 * @Repository HackerRank Soulutions
 * @file       Super Reduced String
 * @author Abdelrahman Ahmed Moussa (abdelrahman.ahmed0599@gmail.com)
 * @copyright Copyright (c) 2024
 * 
 */

/*------------------------------------------------------------------------------*/
/*                                                                              */
/*                 I didn't used any functions from <string.h>                  */
/*                                                                              */
/*------------------------------------------------------------------------------*/
char* superReducedString(char* s) 
{
    static char localString[100]={'\0'};
    int index=1;
    int i;
    localString[0]=s[0];
    for (i=1 ; s[i]!='\0' ;i++)
    {
        if ( localString[index-1]==s[i])
        {
            index--;
        }
        else
        {
            localString[index]=s[i];
            index++;
        }
    }
    localString[index]='\0';
    if (index==0)
    {
        return "Empty String";
    }
    else 
    {
        return localString;
    }
}
