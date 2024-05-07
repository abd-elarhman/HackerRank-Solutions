/**
 * @Repository HackerRank Soulutions
 * @file       camelcase
 * @author Abdelrahman Ahmed Moussa (abdelrahman.ahmed0599@gmail.com)
 * @copyright Copyright (c) 2024
 * 
 */
int camelcase(char* s)
{
    int i=0,counter=1;
    while (s[i]!='\0')
    {
        if (s[i]>='A'&&s[i]<='Z')
        {
            counter++;
        }
        i++;
    }
    return counter;
}
