#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number ");
    scanf("%d",&n);
    if(n%2==0)
        printf("Number is Even");
    else
    printf("Number is odd");
    getch();
    return 0;
}
