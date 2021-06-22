#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	long N;
	string str;
	cin>>N>>str;
	bool fd=false;
	int pwr=log2(N);
	int ans=pwr;
	for(int i=0;i<pwr;i++){
		long a=(long)pow(2,i);
		string s=str.substr(0,a);
		for(int j=0;j<N;j+=a){
			if(str.substr(j,a)!=s){
				break;
			}
			if(j+a==N){
				fd=true;
			}
		}
		if(fd){
			break;
		}
		else ans--;
	}
	cout<<ans;
}