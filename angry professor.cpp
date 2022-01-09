#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     for(int j=1;j<=n;j++)
       {
           int ns,t;
         scanf("%d %d",&ns,&t);
         int count=0;
         for(int i=1;i<=ns;i++)
            {
              int at;
             scanf("%d",&at);
             if(at<=0)
               {
                  count++;
                }  
            }
            if(count<t)
            {
                printf("YES\n");
            }
            else {
              printf("NO\n");
            }
    
        }
}

