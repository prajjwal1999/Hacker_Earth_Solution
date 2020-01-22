#include<stdio.h>
int main(){
    int num, rem, reverse_num, temp;
    int test;
    scanf("%d",&test);//input
    int arr[test];
    for (int i=0;i<test;i++)
    {
        scanf("%d",&arr[i]);
    for(num=arr[i];num>0;num--){
        temp=num;
        reverse_num=0;
        while(temp){
            rem=temp%10;
            temp=temp/10;
            reverse_num=reverse_num*10+rem;
        }
        if(num==reverse_num)
        {
            printf("%d\n",num);
            num=0;
        }
    }
    }
    return 0;
}

