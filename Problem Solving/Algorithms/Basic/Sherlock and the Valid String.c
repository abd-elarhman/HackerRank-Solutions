char* isValid(char* s) 
{
 int i=0,j,flag=1,prev=0,later=0,first_time_flag=1,isValid=1,counter1=0,counter2=0;
    char alphaFreq['z'-'a'+1]={0};
    while (s[i]!='\0')
    {
        alphaFreq[ (s[i]-'a') ]++;
        i++;
    }
    for(j=0;(j<('z'-'a'+1))&&(isValid==1);j++)
    {
        if ( alphaFreq[j]>0 )
        {
            if (first_time_flag==1)
            {
                first_time_flag=0;
                prev=j;
            }
            if (alphaFreq[prev]!=alphaFreq[j])
            {
                if (alphaFreq[j]==1)
                {
                    counter1++;//<<<<<<<<<<<<<<<<<<<<<<<<
                }
                else if ( (alphaFreq[prev]+1)==alphaFreq[j] ) 
                {
                    counter2++;//<<<<<<<<<<<<<<<<<<<<<<<<
                }
                else 
                {
                    isValid=0;
                }
                if ( (counter1>1)||(counter2>1)||(counter1==1&&counter2==1) )
                {
                    isValid=0;
                }
                
            }
            else if (alphaFreq[prev]==alphaFreq[j])
            {
                prev=j;
            }
            
        }
    }
    if(isValid==1)
    {
        return "YES";
        //printf("YES");
    }
    else
    {
        return "NO";
        //printf("NO");
    }
}
