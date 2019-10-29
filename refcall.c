#include<stdio.h>
#include<stdlib.h>
void swapvar(int *a,int *b,int *c)
{
int temp;
temp=*b;
*b=*a;
*a=*c;
*c=temp;
}

int main()
{ 
int a,b,c;
printf("enter the varaiable values\n");
scanf("%d%d%d",&a,&b,&c);
swapvar(&a,&b,&c);
printf("after swapping\n");
printf("a=%d,b=%d,c=%d",a,b,c);
return 0;
}
