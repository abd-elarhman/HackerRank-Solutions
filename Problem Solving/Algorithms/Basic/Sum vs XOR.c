
/* time exceeded
long sumXor(long n) 
{
    long i,j;
    long counter=0;
    
    for (i=0 ; i<=n ; i++)
    {
        if ( (n+i)==(n^i) )
        {
            counter++;
        }  
    }
    return counter;
}
*/
long sumXor(long n) 
{
    long counter=0;
    
    while(n!=0)
    {
        counter+=(!(n&1));
        n=n>>1;
    }
    
    return pow(2, counter);
}
