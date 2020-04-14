
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct stack{
    int top;
    int m;
    int max[100000];
    int arr[100000];
}s;
void initialise()
{
    s.top=-1;
    s.m=-1;
    s.max[0]=0;
}
void push()
{
    int x;
    scanf("%d",&x);
    s.top++;
    s.arr[s.top]=x;
    if(s.m==-1 || s.max[s.m]<=x)
    {
        s.m++;
        s.max[s.m]=x;
    }
}
void pop()
{
    if(s.max[s.m]==s.arr[s.top])
    {
        s.m--;
    }
    s.top--;
}
int max()
{
    int n=s.top;
    int max=0;
    max=s.max[s.m];
    return max;
}
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        int t;
        scanf("%d",&t);
        if(t==1)
        {
            push();
        }
        else if(t==2)
            pop();
        else
        {
            printf("%d\n",max());
        }
    }
}
