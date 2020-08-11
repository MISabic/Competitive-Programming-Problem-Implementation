#include<stdio.h>

int main()
{
    int walls,i=0,j=0,m=1,n=1,k=0,maze[8][8];
    char keep[36];
    printf("How many walls : ");
    for(i=0; i<8; i++)
        for(j=0; j<8; j++)
            if(i==0 || j==0 || i==7 || j==7)
                maze[i][j]=2;
            else
                maze[i][j]=0;
    scanf("%d", &walls);
    printf("Enter row and column position (give a space between row and column number) : \n");
    int row[walls],col[walls];
    for(n=0; n<walls; n++)
        scanf("%d %d",&row[n],&col[n]);
    for(n=0; n<walls; n++)
        for(i=1; i<7; i++)
            for(j=1; j<7; j++)
                if(maze[i][j]!=1 && i==row[n] && j==col[n])
                    maze[i][j]=1;
    while(m!=8)
    {
        for(i=1; i<7; i++)
        for(j=1; j<7; j++)
            if(maze[i+1][j]==1 && maze[i][j-1]==1 && maze[i][j+1]==1 || maze[i][j+1]==1 && maze[i-1][j]==1 && maze[i+1][j]==1
               || maze[i+1][j]==1 && maze[i-1][j]==1 && maze[i][j-1]==1 || maze[i-1][j]==1 && maze[i][j+1]==1 && maze[i][j-1]==1)
                maze[i][j]=1;
        m++;
    }
    for(i=0; i<8; i++)
        printf("%d %d %d %d %d %d %d %d\n",maze[i][0],maze[i][1],maze[i][2],maze[i][3],maze[i][4],maze[i][5],maze[i][6],maze[i][7]);
    m=n=1;
    while(m!=6 && n!=6)
    {
    while(i=m,j=n)
    {
        if(maze[i][j]+maze[i][j+1]==0)
        {
            if(m==6 && n==6)
                break;
            else
            {
                keep[k]='E';
                keep[k+1]='\0';
                ++k;
                m=i;
                n=j+1;
                if(i==6)
                maze[i][j]=1;
                printf("%d %d %d %d\n",i,j,m,n);
            }
        }
        else if(maze[i][j]+maze[i+1][j]==0)
        {
            if(m==6 && n==6)
                break;
            else
            {
                keep[k]='S';
                keep[k+1]='\0';
                ++k;
                m=i+1;
                n=j;
                printf("%d %d %d %d\n",i,j,m,n);
            }
        }
        else if(maze[i][j]+maze[i][j-1]==0)
        {
            if(m==6 && n==6)
                break;
            else
            {
                keep[k]='W';
                keep[k+1]='\0';
                ++k;
                maze[i][j]=1;
                m=i;
                n=j-1;
                printf("%d %d %d %d\n",i,j,m,n);
            }
        }
        else if(maze[i][j]+maze[i-1][j]==0)
        {
            if(m==6 && n==6)
                break;
            else
            {
                keep[k]='N';
                keep[k+1]='\0';
                ++k;
                maze[i][j]=1;
                m=i-1;
                n=j;
                printf("%d %d %d %d\n",i,j,m,n);
            }
        }
        else if(m!=6 && n!=6 && maze[i][j]+maze[i][j+1]!=0 && maze[i][j]+maze[i+1][j]!=0 && maze[i][j]+maze[i][j-1]!=0 && maze[i][j]+maze[i-1][j]!=0)
            break;
    }
    if(m!=6 && n!=6 || m==6 && n==6)
            break;
    }
    if(m!=6 && n!=6)
    {
        system("cls");
        printf("Error occured");
    }
    else
    {
        for(i=0; i<strlen(keep); i++)
        {
            printf("'%c' ",keep[i]);
        }
    }
}
