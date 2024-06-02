/**
 * @Repository HackerRank Soulutions
 * @file       Caesar Cipher
 * @author Abdelrahman Ahmed Moussa (abdelrahman.ahmed0599@gmail.com)
 * @copyright Copyright (c) 2024
 * 
 */
char* caesarCipher(char* s, int k) 
{
    static char qString[101]={0};
    int i=0;
    
    /*while ( k>=('z'-'a'+1) )
    {
        k-=('z'-'a'+1);
    }*/
    k=k%('z'-'a'+1); //26 alphapet
    
    while (s[i]) 
    {
        if ((s[i]>='A')&&(s[i]<='Z')) //UpperCase
        {
            if ( (s[i]+k)>'Z' )
            {
                qString[i]= (((s[i]+k)%'Z')-1)+'A'; //qString[i]= ((('Z'-(s[i]+k))-1)+'A';   
            }
            else
            {
                qString[i]=s[i]+k;
            }
        }
        else if ((s[i]>='a')&&(s[i]<='z')) //UpperCase
        {
            if ( (s[i]+k)>'z' )
            {
                qString[i]= (((s[i]+k)%'z')-1)+'a'; //qString[i]= ((('z'-(s[i]+k))-1)+'a';   
            }
            else
            {
                qString[i]=s[i]+k;
            }
        }
        else
        {
            qString[i]=s[i];
        }
        i++;
    }
    qString[i]='\0';
    return qString;
}
