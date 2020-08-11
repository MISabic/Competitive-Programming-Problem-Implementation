#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,bd,bm,by,cd,cm,cy,k=0;
    scanf("%d",&n);
    while(n--){
        int flag=0,c=0;
        scanf("%d/%d/%d",&cd,&cm,&cy);
        scanf("%d/%d/%d",&bd,&bm,&by);
        for(int i=by+1; i<=cy; i++){
            if((i<cy) || (bd<=cd && bm<=cm && i==cy)){
                ++c;
                flag=1;
            }
        }//cout<<c<<endl;
        if(flag==0 && by<=cy) printf("Case #%d: 0\n",++k);
        else if(flag==0 && by>cy) printf("Case #%d: Invalid birth date\n",++k);
        else if(c>130) printf("Case #%d: Check birth date\n",++k);
        else if(c<=130) printf("Case #%d: %d\n",++k,c);
        //cout<<c<<endl;
    }
    return 0;
}
