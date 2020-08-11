/*#include<stdio.h>

int main()
{
    int t,a,b,c,d,i;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        i=b+d;
        printf("%d %d\n%d %d\n",c,i,a,i);
    }
    return 0;
}*/

/*
#include<stdio.h>

int main()
{
    int t,n,i,sum,arr[50];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        sum=n;
        for(i=0; i<n; i++){
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        printf("%d\n",sum);
    }
    return 0;
}*/



/*
#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,j,h,w,count,k,l;
    char arr[150][150];
    scanf("%d",&t);
    while(t--){
        count=0;
        memset(arr,'.',sizeof arr);
        scanf("%d %d",&h,&w);
        for(i=5; i<h+5; i++){
            for(j=5; j<w+5; j++){
                scanf(" %c",&arr[i][j]);
            }
        }
        for(i=5; i<h+5; i++){
            for(j=5; j<w+5; j++){
                if(arr[i][j]=='O'){
                    arr[i][j]='.';
                    if(arr[i+1][j]=='|') arr[i+1][j]='.';
                    if(arr[i+1][j-1]=='/') arr[i+1][j-1]='.';
                    if(arr[i+1][j+1]=='\\') arr[i+1][j+1]='.';
                    if(arr[i+2][j-1]=='(') arr[i+2][j-1]='.';
                    if(arr[i+2][j+1]==')') arr[i+2][j+1]='.';
                    ++count;
                }
                else if(arr[i][j]=='|'){
                    arr[i][j]='.';
                    if(arr[i-1][j]=='O') arr[i-1][j]='.';
                    if(arr[i][j-1]=='/') arr[i][j-1]='.';
                    if(arr[i][j+1]=='\\') arr[i][j+1]='.';
                    if(arr[i+1][j-1]=='(') arr[i+1][j-1]='.';
                    if(arr[i+1][j+1]==')') arr[i+1][j+1]='.';
                    ++count;
                }
                else if(arr[i][j]=='/'){
                    arr[i][j]='.';
                    if(arr[i][j+1]=='|') arr[i][j+1]='.';
                    if(arr[i][j+2]=='\\') arr[i][j+2]='.';
                    if(arr[i-1][j+1]=='O') arr[i-1][j+1]='.';
                    if(arr[i+1][j]=='(') arr[i+1][j]='.';
                    if(arr[i+1][j+2]==')') arr[i+1][j+2]='.';
                    ++count;
                }
                else if(arr[i][j]=='\\'){
                    arr[i][j]='.';
                    if(arr[i][j-1]=='|') arr[i][j-1]='.';
                    if(arr[i][j-2]=='/') arr[i][j-2]='.';
                    if(arr[i-1][j-1]=='O') arr[i-1][j-1]='.';
                    if(arr[i+1][j]==')') arr[i+1][j]='.';
                    if(arr[i+1][j-2]=='(') arr[i+1][j-2]='.';
                    ++count;
                }
                else if(arr[i][j]=='('){
                    arr[i][j]='.';
                    if(arr[i-1][j]=='/') arr[i-1][j]='.';
                    if(arr[i-2][j+1]=='O') arr[i-2][j+1]='.';
                    if(arr[i-1][j+1]=='|') arr[i-1][j+1]='.';
                    if(arr[i-1][j+2]=='\\') arr[i-1][j+2]='.';
                    if(arr[i][j+2]==')') arr[i][j+2]='.';
                    ++count;
                }
                else if(arr[i][j]==')'){
                    arr[i][j]='.';
                    if(arr[i][j-2]=='(') arr[i][j-2]='.';
                    if(arr[i-1][j]=='\\') arr[i-1][j]='.';
                    if(arr[i-1][j-1]=='|') arr[i-1][j-1]='.';
                    if(arr[i-1][j-2]=='/') arr[i-1][j-2]='.';
                    if(arr[i-2][j-1]=='O') arr[i-2][j-1]='.';
                    ++count;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
*/


/*
#include<stdio.h>

int main()
{
    int t,arr[10][10],i,dis,k1,k2,k3,k4,k5,pos1,pos2,pos3,pos4,pos5;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d %d",&dis,&arr[1][1],&arr[1][2],&arr[1][3],&arr[1][4]);
        if(dis==1){
            k1=arr[1][2];
            pos1=2;
        }
        if(dis==2){
            k1=arr[1][2];
            pos1=2;
        }
        if(dis==3){
            k1=arr[1][3];
            pos1=3;
        }
        if(dis==4){
            k1=arr[1][4];
            pos1=4;
        }
        printf("%d %d\n",pos1,k1);
        scanf("%d %d %d %d %d",&dis,&arr[2][1],&arr[2][2],&arr[2][3],&arr[2][4]);
        if(dis==1){
            for(i=1; i<5; i++)
                if(arr[2][i]==4)
                    break;
            k2=4;
            pos2=i;
        }
        if(dis==2){
            k2=arr[2][pos1];
            pos2=pos1;
        }
        if(dis==3){
            k2=arr[2][1];
            pos2=1;
        }
        if(dis==4){
            k2=arr[2][pos1];
            pos2=pos1;
        }
        printf("%d %d\n",pos2,k2);
        scanf("%d %d %d %d %d",&dis,&arr[3][1],&arr[3][2],&arr[3][3],&arr[3][4]);
        if(dis==1){
            for(i=1; i<5; i++)
                if(arr[3][i]==k2)
                    break;
            k3=arr[3][i];
            pos3=i;
        }
        if(dis==2){
            for(i=1; i<5; i++)
                if(arr[3][i]==k1)
                    break;
            k3=arr[3][i];
            pos3=i;
        }
        if(dis==3){
            k3=arr[3][3];
            pos3=3;
        }
        if(dis==4){
            for(i=1; i<5; i++)
                if(arr[3][i]==4)
                    break;
            k3=4;
            pos3=i;
        }
        printf("%d %d\n",pos3,k3);
        scanf("%d %d %d %d %d",&dis,&arr[4][1],&arr[4][2],&arr[4][3],&arr[4][4]);
        if(dis==1){
            k4=arr[4][pos1];
            pos4=pos1;
        }
        if(dis==2){
            k4=arr[4][1];
            pos4=1;
        }
        if(dis==3){
            k4=arr[4][pos2];
            pos4=pos2;
        }
        if(dis==4){
            k4=arr[4][pos2];
            pos4=pos2;
        }
        printf("%d %d\n",pos4,k4);
        scanf("%d %d %d %d %d",&dis,&arr[5][1],&arr[5][2],&arr[5][3],&arr[5][4]);
        if(dis==1){
            for(i=1; i<5; i++)
                if(arr[5][i]==k1)
                    break;
            k5=arr[5][i];
            pos5=i;
        }
        if(dis==2){
            for(i=1; i<5; i++)
                if(arr[5][i]==k2)
                    break;
            k5=arr[5][i];
            pos5=i;
        }
        if(dis==3){
            for(i=1; i<5; i++)
                if(arr[5][i]==k4)
                    break;
            k5=arr[5][i];
            pos5=i;
        }
        if(dis==4){
            for(i=1; i<5; i++)
                if(arr[5][i]==k3)
                    break;
            k5=arr[5][i];
            pos5=i;
        }
        printf("%d %d\n",pos5,k5);
    }
    return 0;
}
*/


#include<stdio.h>

int main()
{
    int t,y,m,d,n,i,arr[15];
    arr[1]=31,arr[2]=28,arr[3]=31,arr[4]=30,arr[5]=31,arr[6]=30,arr[7]=31,arr[8]=31,arr[9]=30,arr[10]=31,arr[11]=30,arr[12]=31;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&y,&m,&d,&n);
        i=1;
        while(1){
            d=d+7;
            if(y%4==0 && y%100!=0 || y%400==0){
                arr[2]=29;
            }
            else arr[2]=28;
            if(d>arr[m]){
                d=d-arr[m];
                ++m;
                if(m==13){
                    m=1,++y;
                }
            }
            if(d==1 || d==11 || d==21)
                ++i;
            if(i==n) break;
        }
        printf("%d %d %d\n",y,m,d);
    }
    return 0;
}














