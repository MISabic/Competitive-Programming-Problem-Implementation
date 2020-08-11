/*#include<stdio.h>
int main()
{
    int n, i, rem, m, total=0;
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        //m=rem*rem*rem;
        total=total+rem*rem*rem;
    }
    if(i==total)
        printf("Armstrong Number");
    else
        printf("Shaa! Not A Armstrong Number");
}*/

#define NUM_VOTES 1000 // number of votes
#define NUM_CANDIDATES 30 // number of candidates
int main(void) {
int i, vote, cand[NUM_CANDIDATES];
for (i = 0; i < NUM_CANDIDATES; i++) { cand[i] = 0; }
printf("Enter votes:\n");
for (i = 0; i < NUM_VOTES; i++) {
scanf("%d", &vote);
cand[vote-1]++;
}
for (i = 0; i < NUM_CANDIDATES; i++) {
printf("candidate %d: total %d, %.2f%%\n",
i+1, cand[i], (cand[i] * 100.0)/NUM_VOTES);
}
return 0;
}
