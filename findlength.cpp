#include <bits/stdc++.h>
using namespace std;

int maxbalancedprefix(char str[], int n)
{
    int sum = 0;
    int maxi = 0;
 
    // Traversing the string.
    for (int i = 0; i < n; i++) {
 
        // If open bracket add 1 to sum.
        if (str[i] == '<')
            sum += 1;
 
        // If closed bracket subtract 1
        // from sum
        else
            sum -= 1;
 
        // if first bracket is closing bracket
        // then this condition would help
        if (sum < 0)
            break;
 
        // If sum is 0, store the index
        // value.
        if (sum == 0)
            maxi = i + 1;
    }
 
    return maxi;
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	long N;
	cin>>N;
	string str;
	for(int i=0;i<N;i++){
		cin>>str;
		cout<<maxbalancedprefix(str,str.length())<<"\n";
	}
	
}