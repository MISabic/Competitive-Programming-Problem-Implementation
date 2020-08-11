#include<stdio.h>

int main()
{
    FILE *fp1,*fp2;
    fp1=fopen("naruto.txt","r");
    fp2=fopen("guy.txt","w");
    char arr[100],crr[100],sum[100],ch,ph;
    int i,j=0,k=0,l=0,q=0,rem,n,m,c,p,quo=0,total=0,count,found;
    for(i=0; i<100; i++)
        arr[i]=crr[i]=sum[i]='0';
    while(!feof(fp1))
    {
        while((ch=getc(fp1))!=EOF)
            {
                if(ch!=',')
                    arr[j++]=ch;
                else
                    break;
            }
            //j=0;
        if(ch==',')
        {
            while((ch=getc(fp1))!=EOF)
            {
                if(ch!='\n')
                    crr[k++]=ch;
                else
                    break;
            }

            //k=0;
        }
        if(j>k)
        {
            count=j;
            for(k; k<=j; k++)
                crr[k]='0';
            arr[j]=crr[k-1]='\0';
        }

        else if(k>j)
        {
            count=k;
            for(j; j<=k; j++)
                arr[j]='0';
            arr[j-1]=crr[k]='\0';
        }

        else
        {
            count=j;
            arr[j]=crr[k]='\0';
        }
        j=k=0;
        if(strrev(arr)!=NULL && strrev(crr)!=NULL)
        {
            for(i=count-1; i>=0; i--)
            {
                ch=arr[i];
                c=ch-'0';
                ph=crr[i];
                p=ph-'0';
                total=quo+c+p;
                rem=total%10;
                quo=total/10;
                //printf("\n\t%d\t%d\t%d\t%d\t%d\n",c,p,total,rem,quo);
                sum[l++]=rem+'0';
            }
            sum[l++]=quo+'0';
            sum[l]='\0';
            quo=l=0;
            printf("%s\n",sum);

            for(i=0; i<strlen(sum); i++)
            {
                if(sum[i]=='0')
                {
                    fprintf(fp2,"%s",&sum[++i]);
                }
                else
                    fprintf(fp2,"%s",sum);
                fprintf(fp2,"\n");
                break;
            }
        }
    }
    fclose(fp2);
}
