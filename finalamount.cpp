#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	long n,k,ans=0,x,y;
	cin>>n>>k>>x>>y;
	long a[n],b[n];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];
	for(int i=0;i<n;i++){
		if(a[i]==1){if(b[i]==1)ans+=x;
		else ans-=y;}
	}
	//cout<<ans;
	if(ans>0)cout<<"promoted";
	else if(ans==0)cout<<"no change";
	else cout<<"demoted";
}