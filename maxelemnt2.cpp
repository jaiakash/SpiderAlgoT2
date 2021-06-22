#include <bits/stdc++.h>
using namespace std;
int findMax(int n, int m, int a[], int b[], int k[])
{
    int arr[n+1]={0};
    fill_n(arr, n+1, 1);
    arr[n]=-n;
    for (int i=0; i<m; i++)
    {
        int lowerbound = a[i];
        int upperbound = b[i];
        arr[lowerbound] += k[i];
        arr[upperbound+1] -= k[i];
    }
    long long sum = 0, res = INT_MIN;
    for (int i=0; i < n; ++i)
    {
        sum += arr[i];
        res = max(res, sum);
    }
    return res;
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	long N,q;
	cin>>N;
	cin>>q;
	int l,r,x;
	int a[q],b[q],k[q];
	for(int i=0;i<q;i++){
		cin>>l>>r>>x;
		a[i]=l-1;b[i]=r-1;k[i]=x;
	}
	cout<<findMax(N,q,a,b,k)<<"\n";
	return 0;
}