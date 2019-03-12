#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    for (int i=0;i>=0;i++)
    {
        if (c<a||d<b)
        {
            printf("false\n");
            break;
        }
        if (c==a&&d==b)
        {
            printf("true\n");
            break;
        }
        if (c>d)
        {
            c=c-d;
        }
        else
        {
            d = d-c;
        }
    }
    return(0);
}

