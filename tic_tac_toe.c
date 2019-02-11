//Batman and Tick-tack-toe

#include<stdio.h>
#include<string.h>

int main()
{
    int t,c=0;
    scanf("%d",&t);
    char a[4][5];
    
    
    for(int s=0;s<=t-1;s++)
    {c=0;
        char a[4][5];
        for(int i=0;i<=3;i++)
        {
            
            {
                scanf("%s",a[i]);
            }
        }
        
        for(int i=0;i<=3;i++)
        {
            for(int j=0;j<=1;j++)
            {
                if((a[i][j]=='x' && a[i][j+1]=='.' && a[i][j+2]=='x' )||
                   (a[i][j]=='x' && a[i][j+1]=='x' && a[i][j+2]=='.') ||
                   (a[i][j]=='.' && a[i][j+1]=='x' && a[i][j+2]=='x') )
                    
                {
                    printf("YES");
                    printf("\n");
                    c++;
                    break;
                }
            }
            if(c>0)
            {
                break;
            }
            
        }
        
        if(c==0)
        {
            for(int i=0;i<=1;i++)
            {
                for(int j=0;j<=3;j++)
                {
                    if((a[i][j]=='x' && a[i+1][j]=='.' && a[i+2][j]=='x') ||
                       (a[i][j]=='x' && a[i+1][j]=='x' && a[i+2][j]=='.' )||
                       (a[i][j]=='.' && a[i+1][j]=='x' && a[i+2][j]=='x'))
                    {
                        printf("YES");
                        printf("\n");
                        c++;
                        break;
                    }
                    
                }
                if(c>0)
                {
                    break;
                }
                
            }
        }
        
        if(c==0)
        {
            for(int i=0;i<=1;i++)
            {
                for(int j=0;j<=3;j++)
                {
                    if(j==0 || j==1)
                    {
                        if((a[i][j]=='x' && a[i+1][j+1]=='.' && a[i+2][j+2]=='x') ||
                           (a[i][j]=='x' && a[i+1][j+1]=='x' && a[i+2][j+2]=='.') ||
                           (a[i][j]=='.' && a[i+1][j+1]=='x' && a[i+2][j+2]=='x') )
                            
                        {
                            printf("YES");
                            printf("\n");
                            c++;
                            break;
                        }
                    }
                    
                    else
                    {
                        if((a[i][j]=='x' && a[i+1][j-1]=='.' && a[i+2][j-2]=='x') ||
                           (a[i][j]=='x' && a[i+1][j-1]=='x' && a[i+2][j-2]=='.') ||
                           (a[i][j]=='.' && a[i+1][j-1]=='x' && a[i+2][j-2]=='x') )
                        {
                            printf("YES");
                            printf("\n");
                            c++;
                            break;
                        }
                        
                    }
                }
                
                if(c>0)
                {
                    break;
                }
            }
        }
        
      if(c==0)
    {
        printf("NO");
        printf("\n");
    }        
        
    }
    
    }

