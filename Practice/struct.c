/*#include<stdio.h>

struct Shape
{
    double length;
    double width;
};
int findArea(struct Shape R)
{
    return R.length*R.width;
}

int findPerimeter(struct Shape R)
{
    return 2*(R.length+R.width);
}

int main()
{
    struct Shape Rectangle;
    printf("Enter length of the rectangle : ");
    scanf("%lf",&Rectangle.length);
    printf("Enter width of the rectangle : ");
    scanf("%lf",&Rectangle.width);
    printf("Area is : %d\n",findArea(Rectangle));
    printf("Perimeter is : %d",findPerimeter(Rectangle));
}*/
/*
#include<stdio.h>

int main()
{
    typedef struct
    {
        char name[15];
        int id;
        float cgpa;
    }student;
    student temp,list[100];
    FILE *fp;
    if((fp=fopen("naruto.txt","w"))==NULL)
        printf("Error Occured");
    int i,j,n;
    char ch[50];
    printf("How many student's info you want to enter : ");
    scanf("%d",&n);
    getc(stdin);
    for(i=0; i<n; i++)
    {
        printf("Enter Student's Name : ");
        gets(list[i].name);
        printf("Enter Student's ID : ");
        scanf("%d",&list[i].id);
        printf("Enter Student's CGPA : ");
        scanf("%f",&list[i].cgpa);
        getc(stdin);
    }
    fprintf(fp,"NAME\t\t\tID\t\tCGPA\n");
    fprintf(fp,"--------------------------------------------\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(list[i].cgpa<list[j].cgpa)
            {
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
    }
    for(i=0; i<n; i++)
        fprintf(fp,"%s\t\t%d\t\t%.2f\n",list[i].name,list[i].id,list[i].cgpa);
    fclose(fp);
}
*/
/*
#include<stdio.h>

struct Complex add(struct Complex n1, struct Complex n2);

struct Complex
{
    float real;
    float imag;
};

int main()
{
    struct Complex n1,n2;
    int total;
    printf("Enter real part of first number : ");
    scanf("%f",&n1.real);
    printf("Enter imaginary part of first number : ");
    scanf("%f",&n1.imag);
    printf("Enter real part of second number : ");
    scanf("%f",&n2.real);
    printf("Enter imaginary part of second number : ");
    scanf("%f",&n2.imag);
    add(n1,n2);
}
struct Complex add(struct Complex n1, struct Complex n2)
{
    int total;
    total=(n1.real+n1.imag)+(n2.real+n2.imag);
    printf("%d",total);
}
*/
/*
#include<stdio.h>

struct participant
{
char name[20];
char country[20];
float score;
int age;
};
void print(struct participant *pt, int size)
{
    int i;
for(i=0;i<size;i++)
{
puts(pt[i].name);
puts(pt[i].country);
printf("%.2f\n",pt[i].score);
printf("%d\n",pt[i].age);
}
}
int main()
{
int n,i;
scanf("%d",&n);
getc(stdin);
struct participant player[n];
for(i=0;i<n;i++)
{
gets(player[i].name);
gets(player[i].country);
scanf("%f",&player[i].score);
scanf("%d",&player[i].age);
getc(stdin);
}
print(player,n);
return 0;
}
*/

#include<stdio.h>
struct BarcelonaPlayer
{
    char name[20];
    int age;
    char country[20];
    char position[20];
    double salary;
    double rating;
};
struct BarcelonaPlayer temp;
int i;
void highestPaidPlayer(struct BarcelonaPlayer *pl, int size)
{
    printf("---Highest Paid Player---\n");
    for(i=1;i<size;i++)
        if(pl[0].salary<pl[i].salary)
           temp=pl[i];
    printf("%s",temp.name);
}

void findPlayers(struct BarcelonaPlayer *pl, int size)
{
    printf("---Players From Argentina---\n");
    for(i=0;i<size;i++)
        if(strcmp(strlwr(pl[i].country),"argentina")==0)
            printf("%s\n",pl[i].name);
}
int main()
{
    struct BarcelonaPlayer players[15];
    int i,n;
    printf("How many player's data you want to enter : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("--- Player #[%d] Information ---\n",i+1);
        getc(stdin);
        printf("Name : ");
        gets(players[i].name);
        printf("Age : ");
        scanf("%d",&players[i].age);
        getc(stdin);
        printf("Country : ");
        scanf("%s",players[i].country);
        printf("Position : ");
        scanf("%s",players[i].position);
        printf("Salary : ");
        scanf("%lf",&players[i].salary);
        printf("Rating : ");
        scanf("%lf",&players[i].rating);
    }
    highestPaidPlayer(players,n);
    findPlayers(players,n);
}

