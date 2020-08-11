/*#include<stdio.h>

typedef struct
{
    char name[20];
    long long int date;
    long long int month;
    long long int year;
}students;

int main()
{
    int n,i;
    students arr[100],max,min;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s %lld %lld %lld",&arr[i].name,&arr[i].date,&arr[i].month,&arr[i].year);
    }
    min=max=arr[0];
    for(i=1; i<n; i++)
    {
        if(max.year<arr[i].year)
        {
            max=arr[i];
            continue;
        }
        else if(max.year==arr[i].year)
        {
            if(max.month<arr[i].month)
            {
                max=arr[i];
                continue;
            }
            else if(max.month==arr[i].month)
            {
                if(max.date<arr[i].date)
                    max=arr[i];
            }
        }
    }
    for(i=1; i<n; i++)
    {
        if(min.year>arr[i].year)
        {
            min=arr[i];
            continue;
        }
        else if(min.year==arr[i].year)
        {
            if(min.month>arr[i].month)
            {
                min=arr[i];
                continue;
            }
            else if(min.month==arr[i].month)
            {
                if(min.date>arr[i].date)
                    min=arr[i];
            }
        }
    }
    printf("%s\n",max.name);
    printf("%s\n",min.name);
    return 0;
}*/

#include<stdio.h>

typedef struct
{
    char name[20];
    long long int date;
    long long int month;
    long long int year;
}students;

int main()
{
    int n,i;
    students arr[100],max,min;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s %lld %lld %lld",&arr[i].name,&arr[i].date,&arr[i].month,&arr[i].year);
        if(i==0)
        {
            min=max=arr[0];
            continue;
        }
        if(max.year<arr[i].year)
        {
            max=arr[i];
            continue;
        }
        else if(max.year==arr[i].year)
        {
            if(max.month<arr[i].month)
            {
                max=arr[i];
                continue;
            }
            else if(max.month==arr[i].month)
            {
                if(max.date<arr[i].date)
                    max=arr[i];
            }
        }
        if(min.year>arr[i].year)
        {
            min=arr[i];
            continue;
        }
        else if(min.year==arr[i].year)
        {
            if(min.month>arr[i].month)
            {
                min=arr[i];
                continue;
            }
            else if(min.month==arr[i].month)
            {
                if(min.date>arr[i].date)
                    min=arr[i];
            }
        }
    }
    printf("%s\n",max.name);
    printf("%s\n",min.name);
    return 0;
}

