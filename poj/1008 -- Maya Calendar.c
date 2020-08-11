#include<stdio.h>
#include<string.h>

int main()
{
    char hab[25][15]={"pop","no","zip","zotz","tzec","xul","yoxkin","mol","chen","yax","zac","ceh","mac","kankin","muan","pax","koyab","cumhu","uayet"};
    char zol[25][15]={"imix","ik","akbal","kan","chicchan","cimi","manik","lamat","muluk","ok","chuen","eb","ben","ix","mem","cib","caban","eznab","canac","ahau"};
    char mon[15];
    int t,d,y,i,k;
    scanf("%d",&t);
    printf("%d\n",t);
    while(t--){
        scanf("%d. %s %d",&d,mon,&y);
        for(i=0; i<18; i++)
            if(strcmp(mon,hab[i])==0) break;
        k=y*365+i*20+d;
        printf("%d %s %d\n",(k%260)%13+1,zol[k%20],k/260);

    }
    return 0;
}
