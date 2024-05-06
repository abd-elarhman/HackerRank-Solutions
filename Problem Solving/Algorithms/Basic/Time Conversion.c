/**
 * @Repository HackerRank Soulutions
 * @file       Time Conversion
 * @author Abdelrahman Ahmed Moussa (abdelrahman.ahmed0599@gmail.com)
 * @copyright Copyright (c) 2024
 * 
 */

/*------------------------------------------------------------------------------*/
/*                                                                              */
/*                 I didn't used any functions from <string.h>                  */
/*                                                                              */
/*------------------------------------------------------------------------------*/
char* timeConversion(char* s) 
{
    static char localstr[20]; /*!< 00:00:00 ==> 8 char and null ==> 8+1=9*/
    int i=0,num=0;
    if (s[8]=='A')
    {
        if (s[0]=='1'&&s[1]=='2') 
        {
            localstr[0]='0';
            localstr[1]='0';
        }
        else 
        {
            localstr[0]=s[0];
            localstr[1]=s[1];
        }
    }
    else if (s[8]=='P')
    {
        if (s[0]=='1'&&s[1]=='2') 
        {
            localstr[0]=s[0];
            localstr[1]=s[1];
        }
        else 
        {
            localstr[0]=s[0]+1; //((s[0]-'0')+1)+'0';
            localstr[1]=s[1]+2;
        }
    }
    for (i=2; i<=7;i++)
    {
        localstr[i]=s[i];
    }
    localstr[i]='\0';
    return localstr;
}
