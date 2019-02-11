//magical word


#include<stdio.h>

int checkprime(int s)
{
    int count=0;
    for(int i=1;i<=s;i++)
    {
        if(s%i==0)
        {
            count++;
        }
    }
    
    if(count==2)
    return(1);
    else
    return(0);
}

int replace(int a)
{ 
    if(a=='A')
    return 'C';
    
    if(a=='Z')
    return 'Y';
    
    if( a=='z' )
    return 'q';
    
    if(a=='v'|| a=='w' || a=='x' || a=='y')
    return 'q';
    
    
    
    int i=a,j,k=a,l;
    if(a>=65 && a<=90)
   {
       for(i=a;i>=65;i--)
    {
        if(checkprime(i)==1)
        {
            
            break;
        }
    }
    for(j=a;j<=90;j++)
    {
        if(checkprime(j)==1)
        {
            
            break;
        }
    }
    if(a-i>j-a)
    return(j);
    if(a-i<=j-a)
     return(i);
    
   }
    
    if(a>=97 && a<=122)
    {
    for(k=a;k>=97;k--)
    {
        if(checkprime(k)==1)
        {
           // printf("%c",k);
            break;
        }
    }
    for(l=a;l<122;l++)
    {
        if(checkprime(l)==1)
        {
           // printf("%c",l);
            break;
        }
    }
    if(a-k>l-a)
    return(l);
    if(a-k<=l-a)
     return(k);
    
    }
}

int main()
{
    int T,N;
    
    
    scanf("%d",&T);
    char S[600];
    
   
    for(int j=0;j<=T-1;j++)
    {
    scanf("%d",&N);
    
    scanf("%s",S);
    
        for(int i=0;i<=N-1;i++)
    {
        if(checkprime(S[i])==0)
        {
            S[i]=replace(S[i]);
        }
       
    }
    printf("%s",S);
    printf("\n");
    
    }
    
    
    
    
    
    
    
}