/**
 * @Repository HackerRank Soulutions
 * @file       Pangrams
 * @author Abdelrahman Ahmed Moussa (abdelrahman.ahmed0599@gmail.com)
 * @copyright Copyright (c) 2024
 * 
 */
/*------------------------------------------------------------------------------*/
/*                                                                              */
/*                 I didn't used any functions from <string.h>                  */
/*                                                                              */
/*------------------------------------------------------------------------------*/
char* pangrams(char* s) 
{
    int alpha[(('z'-'a')+1)]={0};
    
    /*
    very important note :
    we will assign letteral string to this pointer to char
    that means that we assign to it an address from .rodata section
    so, it is not needed to make is static 
    */
    char *string=((void*)0);
    int i=0,j;
    //char ch;
    char flag=1;
    while (s[i]!='\0')
    {
        if (s[i]>='a'&&s[i]<='z')
        {
            //ch=s[i];
            //alpha[ch-'a']++;
            alpha[s[i]-'a']++;
        }
        else if (s[i]>='A'&&s[i]<='Z')
        {
            //ch=(s[i]-'A')+'a';
            //alpha[ch-'a']++;
            alpha[s[i]-'A']++;
        }
        i++;
    }
    for (j=0; (j<(('z'-'a')+1)) && (flag==1) ; j++)
    {
        if (alpha[j]==0)
        {
            flag=0;
        }
    }
    if (flag==0)
    {
        string="not pangram";
    }
    else
    {
        string="pangram";    
    }
    return string;
}
