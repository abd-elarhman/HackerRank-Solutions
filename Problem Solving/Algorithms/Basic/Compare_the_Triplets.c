/**
 * @Repository HackerRank Soulutions
 * @author Abdelrahman Ahmed Moussa (abdelrahman.ahmed0599@gmail.com)
 * 
 */

int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
*result_count=2;
int i;
static int arr[2]={0};
for (i=0 ; i<a_count ; i++)
{
    if (a[i]>b[i])
    {
        arr[0]++;
    }
    else if (b[i]>a[i])
    {
        arr[1]++;
    }
}
return arr;
}
