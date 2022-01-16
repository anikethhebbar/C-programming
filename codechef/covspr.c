#include<stdio.h>
#include<math.h>

int main()
{
int t,n,d,x;
scanf("%d\n",&t);
while(t--)
{
    scanf("%d %d\n",&n,&d);
    if(d<=10)
    {
    	x=pow(2,d);
    }
    else if(d<=20)
    {
    	x=1024*pow(3,d-10);
    }
    else 
    {
        printf("%d\n",n);
        continue;

    }
    if(n<x)
        printf("%d\n",n);
    else
        printf("%d\n",x);

}
}