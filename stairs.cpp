#include <bits/stdc++.h>

using namespace std;

long md=1000000007;

int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    long M,N;

    cin>>M>>N;
    if(N==0)N=1;

    long A[N]={0};

    long strs[M+1]={0};

    for(int i=0;i<N;i++)cin>>A[i];

    

    strs[0]=1;

    

    int j=0;

    for(int i=1;i<=M;i++){

        if(j<N&&A[j]==i){

            strs[i]=0;

            j++;

        }

        else {

            if(i>1)

            strs[i]=(strs[i-1]%md+strs[i-2]%md)%md;

            else strs[i]=strs[i-1]%md;

        }

        //cout<<strs[i]<<" ";

    }

    

    cout<<strs[M]<<"\n";

}