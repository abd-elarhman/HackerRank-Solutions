/**
 * @Repository HackerRank Soulutions
 * @author Abdelrahman Ahmed Moussa (abdelrahman.ahmed0599@gmail.com)
 * @copyright Copyright (c) 2024
 * 
 */
long aVeryBigSum(int ar_count, long* ar) {
int i;
long int sum=0;
for (i=0 ; i<ar_count ; i++)
{
    sum=sum+ar[i];
}
return sum;
}
