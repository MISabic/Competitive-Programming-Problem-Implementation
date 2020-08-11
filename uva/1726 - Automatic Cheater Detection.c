#include<stdio.h>

int intSort(const int *a, const int *b)
{
    return (*a-*b);
}

int main()
{
    int t,q,d,s,count,found,i,j,flag,arr[50500],brr[50500],index;
    char r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&q);
        count=found=i=j=flag=index=0;
        while(q--)
        {
            scanf("%d %d %c",&d,&s,&r);
            if((s==1 && r=='i') || (s==0 && r=='c'))//need to consider only these two cases
            {
                continue;
            }
            else
            {
                if(s==0)
                {
                    arr[i]=d;
                    ++i;
                }
                else
                {
                    brr[j]=d;
                    ++j;
                }
            }
        }
        count=i;
        found=j;
        qsort(arr, i-1, sizeof(int), (int (*)(const void*, const void*))intSort);
        qsort(brr, j, sizeof(int), (int (*)(const void*, const void*))intSort);
        for(i=0; i<count; i++)
        {
            for(j=0; j<found; j++)
            {
                if(brr[j]>arr[i])
                {
                    break;
                }
            }
            if(j==found)
            {
                j=flag;
            }
            else
            {
                flag=j-1;
                index+=found-j;
            }
        }
        printf("%d\n",index);
    }
    return 0;
}



/*#include<stdio.h>

typedef struct
{
    int d;
    int s;
    char r;
}acd;

int intSort(const void *a, const void *b)
{
    acd *acdA = (acd *)a;
    acd *acdB = (acd *)b;

    return ( acdB->d - acdA->d );
}

int main()
{
    int t,q,d,s,count=0,found=0,index=0,i=0,j=0;
    char r;
    acd autchedet1[50050],autchedet2[50050];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&q);
        count=found=i=j=0;
        while(q--)
        {
            scanf("%d %d %c",&d,&s,&r);
            if(s==1 && r=='i' || s==0 && r=='c')
            {
                continue;
            }
            else
            {
                if(s==0)
                {
                    autchedet1[i].d=d;
                    ++i;
                }
                else
                {
                    autchedet2[j].d=d;
                    ++j;
                }
            }
        }
        count=i;
        found=j;
        qsort(autchedet1, i-1, sizeof(acd), (int (*)(const void*, const void*))intSort);
        qsort(autchedet2, i-1, sizeof(acd), (int (*)(const void*, const void*))intSort);
        index=j=0;
        printf("\t\t%d %d\n",found,j);
        for(i=0; i<count; i++)
        {
            for(j=0; j<found; j++)
            {
                if(autchedet2[j].d>autchedet1[i].d)
                {
                 //   printf("%d\n",j);
                   // break;
                   ++index;
                }
            }
            //printf("\t\t%d %d\n",found,j);
            //index+=found-j;
            //j=j-1;
        }
        printf("%d\n",index);
    }
    return 0;
}*/
