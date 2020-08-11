#include<stdio.h>
#include<stdlib.h>

typedef struct nd{
    int num;
    struct nd* next;
}node;

node *head=NULL;

int listsize()
{
    int count=0;
    node *temp=head;
    while(temp!=NULL){
        ++count;
        temp=temp->next;
    }
    return count;
}


void insert()
{
    int n,c,i;
    system("cls");
    c=listsize();
    A:
    printf("Where do you want to insert the data?(index number [<=%d]) : ",c);
    scanf("%d",&n);
    if(n>c){
        printf("Please input again\n");
        goto A;
    }
    node *temp;
    if(n==0){
        if(head==NULL){
            head=(node *)malloc(sizeof(node));
            scanf("%d",&head->num);
            head->next=NULL;
        }
        else{
            temp=(node *)malloc(sizeof(node));
            scanf("%d",&temp->num);
            temp->next=head;
            head=temp;
        }
    }
    else if(n==c){
        temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=(node *)malloc(sizeof(node));
        scanf("%d",&temp->next->num);
        temp->next->next=NULL;
    }
}

void delete()
{
    int n,c,i;
    system("cls");
    c=listsize();
    A:
    printf("Which data you want to delete?(index number [<=%d]) : ",c);
    scanf("%d",&n);
    if(n>c){
        printf("Please input again\n");
        goto A;
    }
    node *temp;
    if(n==0){
        if(head==NULL){
            head=(node *)malloc(sizeof(node));
            scanf("%d",&head->num);
            head->next=NULL;
        }
        else{
            temp=(node *)malloc(sizeof(node));
            scanf("%d",&temp->num);
            temp->next=head;
            head=temp;
        }
    }
    else if(n==c){
        temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=(node *)malloc(sizeof(node));
        scanf("%d",&temp->next->num);
        temp->next->next=NULL;
    }
}

void show()
{
    int c=0;
    system("cls");
    if(head==NULL) printf("List is empty\n");
    else{
        node *temp=head;
        printf("-----Data List-----\n");
        while(temp!=NULL){
            printf("%d. %9d\n",++c,temp->num);
            temp=temp->next;
        }
    }
}

int main()
{
    int n;
    char ch;
    while(1){
        printf("Do you want to continue?(Y/N)\n");
        scanf("%c",&ch);
        if(tolower(ch)=='y'){
            system("cls");
            printf("1. Insert a data in the list\n");
            printf("2. Delete a data from the list\n");
            printf("3. Show the data\n");
            scanf("%d",&n);
            if(n==1) insert();
            else if(n==2) delete();
            else show();
        }
        else{
            printf("See you later\n");
            return 0;
        }
        getc(stdin);
    }
}
