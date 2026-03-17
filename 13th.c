#include<stdio.h>
int main()
{
    int n;
    long long s=1;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i =1; i<=n; i++)
    {
        s=s*i;
    }
    printf("Factoral is %lld.",s);
}
