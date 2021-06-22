#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	long N;
	cin>>N;
	int B[N-1]={},A[N]={0};
	for(int i=1;i<N;i++){
		cin>>B[i-1];
		if(i==1){
			A[0]=B[0];
			A[1]=B[0];
		}
		else{
			A[i-1]=min(B[i-1],B[i-2]);
		}
	}
	A[N-1]=B[N-2];
	long sum=0;
	for(int i=0;i<N;i++){
		//cout<<A[i]<<" ";
		sum+=A[i];
	}
	cout<<sum<<"\n";
	return 0;
}