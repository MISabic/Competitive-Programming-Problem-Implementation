#include<stdio.h>

int main()
{
    int t,count=0,lag1=0,track=0,lag2=0,lag3=0;
    char arr[20];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",arr);
        if(strcmp(arr,"Alice")==0 || strcmp(arr,"Ariel")==0 || strcmp(arr,"Aurora")==0 || strcmp(arr,"Phil")==0 || strcmp(arr,"Peter")==0 || strcmp(arr,"Olaf")==0 || strcmp(arr,"Phoebus")==0 || strcmp(arr,"Ralph")==0 || strcmp(arr,"Robin")==0)
        {
            if(lag1==0)
            {printf("from 3 %d %d\n",lag1,track);
                if(track==3)
                {
                    count+=2;
                    lag1=1;
                    continue;
                }
                else if(track==2)
                {
                    count++;
                    lag1=1;
                    continue;
                }
                else
                {
                    count++;
                    lag1=1;
                    continue;
                }
            }
        }
        else
        {
            track=1;
            lag1=0;
            printf("%d\n",count);
        }

        if(strcmp(arr,"Bambi")==0 || strcmp(arr,"Belle")==0 || strcmp(arr,"Bolt")==0 || strcmp(arr,"Mulan")==0 || strcmp(arr,"Mowgli")==0 || strcmp(arr,"Mickey")==0 || strcmp(arr,"Silver")==0 || strcmp(arr,"Simba")==0 || strcmp(arr,"Stitch")==0)
        {
            if(lag2==0)
            {
                count++;
                lag2=1;
                continue;
            }
        }
        else
        {
            track=2;
            lag2=0;
            printf("%d\n",count);
        }

        /*if(strcmp(arr,"Dumbo")==0 || strcmp(arr,"Genie")==0 || strcmp(arr,"Jiminy")==0 || strcmp(arr,"Kuzko")==0 || strcmp(arr,"Kida")==0 || strcmp(arr,"Kenai")==0 || strcmp(arr,"Tarzan")==0 || strcmp(arr,"Tiana")==0 || strcmp(arr,"Winnie")==0)
        {
            if(lag3==0)
            {
                if(track==1)
                {printf("from 1 %d\n",track);
                    count+=2;
                    lag3=1;
                    continue;
                }
                else if(track==2)
                {
                    count++;
                    lag3=1;
                    continue;
                }
                else
                {
                    count++;
                    continue;
                }
            }
        }
        else
        {
            track=3;
            lag3=0;
            printf("%d\n",count);
        }*/
    }
    printf("%d",count-1);
    return 0;
}
