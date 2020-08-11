#include<stdio.h>

int main()
{
    int v=0, t=0, s;
    while(scanf("%d %d",&v,&t)==2)
    {
        if(v>=-100 && v<=100 && t>=0 && t<=200)
        {
            s=v*t*2;
            printf("%d\n",s);
        }
        else
            break;
    }
    return 0;
}
