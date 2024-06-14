/********************************* Apple and Orange.c **************************************************/

void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) 
{
    int applesCounter=0;
    int orangesCounter=0;
    
    for (int i=0 ;i<apples_count; i++)
    {
        apples[i]+=a;
        if ( (apples[i]>=s) && (apples[i]<=t) )
        {
            applesCounter++;
        }
    }
    for (int i=0 ;i<oranges_count; i++)
    {
        oranges[i]+=b;
        if ( (oranges[i]>=s) && (oranges[i]<=t) )
        {
            orangesCounter++;
        }
    }
    printf("%d\n%d",applesCounter,orangesCounter);
}
