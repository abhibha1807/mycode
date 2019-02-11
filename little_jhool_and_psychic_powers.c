// Little Jhool and psychic powers


#include<stdio.h>
#include<string.h>

int main()
{
     char a[100];
     int count;
    scanf("%s",a);
    if(strlen(a)>6)
    
    
    {
        for(int i=0;i<=strlen(a)-6;i++)
    {
         count=0;
        for(int j=i+1;j<=i+5;j++)
        {
            if(a[i]==a[j])
            {count++;}
            if(count==5)
        {printf("Sorry, sorry!");
        break;}
        }
        if(count==5)
        break;
    }
    
    if(count!=5)
    {printf("Good luck!");}
    
    }
    else
    printf("Good luck!");
    
   
    
}
