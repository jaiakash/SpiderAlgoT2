#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	long N,q;
	cin>>N;
	long B[N]={};
	for(int i=0;i<N;i++){
		B[i]=i+1;
	}
	cin>>q;
	long l,r,x;
	for(int i=0;i<q;i++){
		cin>>l>>r>>x;
		for(int j=l-1;j<r;j++){
			B[j]+=x;
		}
	}
	sort(B,B+N);
	cout<<B[N-1]<<"\n";
	return 0;
}