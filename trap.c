#include <stdio.h>

int main(){
    int N,n,t,f,m,P,Q;
    int M=0;
    int sum1=0;
    int s=0;
    int sum2=0;
    scanf("%d",&N);
    while(1){
        while(1){
            P=N;
            n=N%10;
            sum1+=n;
            N=N/10;
            t=N/10;
            s=s+1;
            if(t==0){
                break;
            }}
        M=3*sum1+1;
        printf("%d:%d",s,M);
        sum1=0;
            if(M==P){
            break;
        }
        while(1){
            Q=M;
            m=M%10;
            sum2+=m;
            M=M/10;
            f=M/10;
            s=s+1;
            if(f==0){
                break;
            }
        }
        N=3*sum2+1;
        sum2=0;
        printf("%d:%d",s,N);
        if(N==Q){
            break;
        }
    }
    return 0;
}
//悲惨超时