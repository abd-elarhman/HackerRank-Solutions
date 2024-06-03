/**
 * @Repository HackerRank Soulutions
 * @file       Maximizing XOR
 * @author Abdelrahman Ahmed Moussa (abdelrahman.ahmed0599@gmail.com)
 * @copyright Copyright (c) 2024
 * 
 */
int maximizingXor(int l, int r) 
{
    int max=0;
    int i,j;
    for (i=l ; i<=r ; i++)
    {
        for(j=l ; j<=r ; j++)
        {
            if ((i^j)>max)
            {
                max=i^j;
            }
        }
    }
    return max;
}
