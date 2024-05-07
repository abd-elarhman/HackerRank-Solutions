/**
 * @Repository HackerRank Soulutions
 * @file       Strong Password
 * @author Abdelrahman Ahmed Moussa (abdelrahman.ahmed0599@gmail.com)
 * @copyright Copyright (c) 2024
 * 
 */

/*------------------------------------------------------------------------------*/
/*                                                                              */
/*                 I didn't used any functions from <string.h>                  */
/*                                                                              */
/*------------------------------------------------------------------------------*/

int minimumNumber(int n, char* password)
{
    // Return the minimum number of characters to make the password strong
    int remain_number;
    int remain_ch=0;
    int upper=0,lower=0,digit=0,ch=0;
    char specialChar[]="!@#$%^&*()-=";
    int i,j;
    char breakFlag=1;
    
    if (n<=6)
    {
        remain_number=6-n;
    }
    else
    {
        remain_number=0;
    }
    for (i=0; (i<n)&&(breakFlag) ;i++)
    {
        if (password[i]>='a' && password[i]<='z' && lower==0)
        {
            lower=1;
        }
        else if (password[i]>='A' && password[i]<='Z' && upper==0)
        {
            upper=1;
        }
        else if (password[i]>='0' && password[i]<='9' && digit==0)
        {
            digit=1;
        }
        
        /*else if (password[i]>='!' || password[i]<='@'||
                 password[i]<='#' || password[i]<='$'||
                 password[i]<='%' || password[i]<='^'||
                 password[i]<='&' || password[i]<='*'||
                 password[i]<='(' || password[i]<=')'||
                 password[i]<='-' || password[i]<='='   )
        {
            ch=1;
        }*/
        else if (ch==0)
        {
            j=0;
            while (specialChar[j])
            {
                if (password[i]==specialChar[j])
                {
                    ch=1;
                }
                j++;
            }
        }
        if (lower && upper && digit && ch )
        {
            breakFlag=0;
        }
        
    }
    remain_ch=4-(lower+upper+digit+ch);
    if (remain_ch>remain_number)
    {
        return remain_ch;
    }
    else if (remain_ch<remain_number)
    {
        return remain_number;
    }
    return remain_ch;
}
