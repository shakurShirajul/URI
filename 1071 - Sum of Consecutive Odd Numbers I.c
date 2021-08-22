#include<stdio.h>
int main()
{
    int x,y,sum=0;
    scanf("%d%d",&x,&y);
    if(x<y)
    {
        x++;
        while(x!=y)
        {
            if(x%2!=0)
            {
                sum=sum+x;
            }
            x++;
        }
    }
    else if(y<x)
    {
        y++;
        while(y!=x)
        {
            if(y%2!=0)
            {
                sum=sum+y;
            }
            y++;
        }
    }
    else if(x==y)
    {
        sum=0;
    }
    printf("%d\n",sum);
    return 0;
}
