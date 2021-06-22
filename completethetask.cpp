#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	long T,n;
	cin>>T;
	for(int a=0;a<T;a++){
		cin>>n;
		int h=(n+1)/2;
		for(int i=0;i<h;i++){
			string str="";
			for(int j=0;j<(h-i);j++)str+="*";
			for(int j=0;j<(2*i-1);j++)str+=" ";
			while(str.size()<n)str+="*";
			
		cout<<str<<"\n";
		}
		
		int l=n-4;
		for(int i=1;i<h;i++){
			string str="";
			for(int j=0;j<i+1;j++)str+="*";
			for(int j=1;j<=l;j++)str+=" ";
			l-=2;
			while(str.size()<n)str+="*";
			
		cout<<str<<"\n";
		}
	}
	
}