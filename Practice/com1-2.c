/*#include <stdio.h>

char *replace(const char *src, const char *from, const char *to)
{
   size_t size    = strlen(src) + 1;
   size_t fromlen = strlen(from);
   size_t tolen   = strlen(to);
   char *value = malloc(size);
   char *dst = value;
   if ( value != NULL )
   {
      for ( ;; )
      {
         const char *match = strstr(src, from);
         if ( match != NULL )
         {
            size_t count = match - src;
            char *temp;
            size += tolen - fromlen;
            temp = realloc(value, size);
            if ( temp == NULL )
            {
               free(value);
               return NULL;
            }
            dst = temp + (dst - value);
            value = temp;
            memmove(dst, src, count);
            src += count;
            dst += count;
            memmove(dst, to, tolen);
            src += fromlen;
            dst += tolen;
         }
         else
         {
            strcpy(dst, src);
            break;
         }
      }
   }
   return value;
}

int main()
{
    char *after;
    char arr[100],crr[100],tree[5],ch;
    int i,j,l,o,p=0,k=0,n,m=0,count=0;
    gets(arr);
    n=strlen(arr);
    for(i=0; strchr(arr+i, '(')!=NULL; i=k)
    {
        p=0;
        char *br1 = strchr(arr+i, '(');
        char *br2 = strchr(arr+i, ')');
        k=(br2-arr)+1;
        ++k;
        //printf("t%d = ",++m);
        for(j=br1-arr; j<=br2-arr; j++)
        {
            crr[p]=arr[j];
            crr[p+1]='\0';
            ++p;
        }
        ++m;
        printf("t%d = %s\n",m,crr);
        ch=m+'0';
        tree[0]='t';
        tree[1]=ch;
        tree[2]='\0';
        after = replace(arr, crr, tree);
        strcpy(arr,after);
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]=='*')
        {
            p=0;
            ++count;
            for(j=i+1; j<n; j++)
            {
                if(arr[j]=='+' || arr[j]=='-' || arr[j]=='/' || arr[j]=='*' || arr[j]=='(' || arr[j]==')')
                    break;
            }
            for(l=i-1; l>=0; l--)
            {
                if(arr[l]=='+' || arr[l]=='-' || arr[l]=='/' || arr[l]=='*' || arr[l]=='(' || arr[l]==')')
                    break;
            }
            for(o=l+1; o<j; o++)
            {
                crr[p]=arr[o];
                crr[p+1]='\0';
                ++p;
            }
            ++m;
            if(count=1)
            {
                printf("t%d = %s\n",m,crr);
                ch=m+'0';
                tree[0]='t';
                tree[1]=ch;
                tree[2]='\0';
                after = replace(arr, crr, tree);
                strcpy(arr,after);
                //printf("t%d = %s\n",++m,arr);
                //i=0;
            }
        }
    }
}
*/

#include <stdio.h>

char *after;
char arr[100],crr[100],tree[5],ch;
int i,j,l,o,q,p=0,k=0,n,m=0,count=0;

char *replace(const char *src, const char *from, const char *to)
{
   size_t size    = strlen(src) + 1;
   size_t fromlen = strlen(from);
   size_t tolen   = strlen(to);
   char *value = malloc(size);
   char *dst = value;
   if ( value != NULL )
   {
      for ( ;; )
      {
         const char *match = strstr(src, from);
         if ( match != NULL )
         {
            size_t count = match - src;
            char *temp;
            size += tolen - fromlen;
            temp = realloc(value, size);
            if ( temp == NULL )
            {
               free(value);
               return NULL;
            }
            dst = temp + (dst - value);
            value = temp;
            memmove(dst, src, count);
            src += count;
            dst += count;
            memmove(dst, to, tolen);
            src += fromlen;
            dst += tolen;
         }
         else
         {
            strcpy(dst, src);
            break;
         }
      }
   }
   return value;
}

void treeStyle(char ph, char arr[])
{
    for(i=0; i<n; i++)
    {
        if(strchr(arr,ph)==NULL)
            break;
        else if(arr[i]==ph)
        {
            p=0;
            for(j=i+1; j<n; j++)
                if(arr[j]=='+' || arr[j]=='-' || arr[j]=='/' || arr[j]=='*' || arr[j]=='(' || arr[j]==')')
                    break;

            for(l=i-1; l>=0; l--)
                if(arr[l]=='+' || arr[l]=='-' || arr[l]=='/' || arr[l]=='*' || arr[l]=='(' || arr[l]==')')
                    break;

            for(o=l+1; o<j; o++)
            {
                crr[p]=arr[o];
                crr[p+1]='\0';
                ++p;
            }
            ++m;
            printf("t%d = %s\n",m,crr);
            ch=m+'0';
            tree[0]='t';
            tree[1]=ch;
            tree[2]='\0';
            after = replace(arr, crr, tree);
            strcpy(arr,after);
            i=0;
        }
    }
}
int main()
{
    gets(arr);
    n=strlen(arr);
    for(i=0; i<n; i++)
        if(arr[i]=='(')
        {
            p=0;
            for(j=i; j<n; j++)
                if(arr[j]==')')
                    break;
            for(o=i; o<=j; o++)
            {
                crr[p]=arr[o];
                crr[p+1]='\0';
                ++p;
            }
            ++m;
            printf("t%d = %s\n",m,crr);
            ch=m+'0';
            tree[0]='t';
            tree[1]=ch;
            tree[2]='\0';
            after = replace(arr, crr, tree);
            strcpy(arr,after);
        }
    treeStyle('/', arr);
    treeStyle('*', arr);
    treeStyle('+', arr);
    treeStyle('-', arr);
}

