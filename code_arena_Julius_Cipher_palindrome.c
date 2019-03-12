#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    for (int i=0;i<test;i++)
    {
        long long int n=0,b=1;
        unsigned long int a;
        char str[10];
        scanf("%s",str);
        a = strlen(str);
        int j=0;
        while(n<=a/2)
        {
            if (str[j]==str[a-1-j])
            {
                j++;
                n++;
                continue;
            }
            else
            {
                break;
            }
        }
        if (n==(a/2+1))
        {
            printf("Palindrome\n");
        }
        else
        {
            for (int k=0;k<a;k++)
            {
                b = (str[k]-96)*b;
            }
            printf("%lld\n",b);
        }
    }
    return(0);
}

