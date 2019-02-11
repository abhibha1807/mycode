//print hackerearth

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    
    int h=0,a=0,c=0,k=0,e=0,r=0,t=0;
    
    for(int i=0;i<=n-1;i++)
    {
        if(str[i]=='h')
            h++;
        
        if(str[i]=='a')
            a++;
        
        if(str[i]=='c')
            c++;
        
        
        if(str[i]=='k')
            k++;
        
        
        if(str[i]=='e')
            e++;
        
        if(str[i]=='r')
            r++;
        
        if(str[i]=='t')
            t++;
        
    }
    
    int arr[7];
    arr[0]=h/2;
    arr[1]=a/2;
    arr[2]=c;
    arr[3]=k;
    arr[4]=e/2;
    arr[5]=r/2;
    arr[6]=t;
    
    int i=0;
    for( i=0;i<=6;i++)
    {int count=0;
        for(int j=0;j<=6;j++)
        {
            if(arr[i]<=arr[j])
            {
                count++;
            }
        }
        if(count==7)
        {
            break;
        }
    }
    
    printf("%d",arr[i]);
}
