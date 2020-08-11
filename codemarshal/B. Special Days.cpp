#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,date,c=0;
    string str;
    cin>>t;
    while(t--){
        cin>>str>>date;

        if(str=="January" || (str=="December" && date>=25) || (str=="February" && date<13)){
            printf("Case %d: Pohela Falgun\n",++c);
        }

        else if((str=="February" && date==13)){
            printf("Case %d: Valentine's Day\n",++c);
        }

        else if((str=="February" && date>=14) && (str=="February" && date<21)){
            printf("Case %d: International Mother Language Day\n",++c);
        }

        else if((str=="February" && date>=21) || (str=="March" && date<8)){
            printf("Case %d: International Women's Day\n",++c);
        }

        else if((str=="March" && date>=8) && (str=="March" && date<21)){
            printf("Case %d: International Color Day\n",++c);
        }

        else if((str=="March" && date>=21) && (str=="March" && date<26)){
            printf("Case %d: Bangladesh Independence Day\n",++c);
        }

        else if((str=="March" && date>=26)){
            printf("Case %d: April Fools Day\n",++c);
        }

        else if((str=="April" && date>=1) && (str=="April" && date<14)){
            printf("Case %d: Pohela Boishakh\n",++c);
        }

        else if((str=="April" && date>=14)){
            printf("Case %d: May Day\n",++c);
        }

        else if((str=="May") || (str=="June" && date<19)){
            printf("Case %d: Father's Day\n",++c);
        }

        else if((str=="June" && date>=19) || (str=="July" && date<18)){
            printf("Case %d: Mandela Day\n",++c);
        }

        else if((str=="July" && date>=18) || (str=="August" && date<20)){
            printf("Case %d: World Mosquito Day\n",++c);
        }

        else if(str=="September" || (str=="August" && date>=20) || (str=="October" && date<31)){
            printf("Case %d: Halloween\n",++c);
        }

        else if((str=="October" && date==31) || (str=="November" && date<19)){
            printf("Case %d: World Toilet Day\n",++c);
        }

        else if((str=="November" && date>=19) || (str=="December" && date<10)){
            printf("Case %d: Human Rights Day\n",++c);
        }

        else if((str=="December" && date>=10) && (str=="December" && date<16)){
            printf("Case %d: Victory Day of Bangladesh\n",++c);
        }

        else if((str=="December" && date>=16) && (str=="December" && date<25)){
            printf("Case %d: Christmas Day\n",++c);
        }
    }
    return 0;
}
