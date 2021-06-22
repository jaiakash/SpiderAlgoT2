#include <bits/stdc++.h>
using namespace std;

long long bToD(string n){
    string num = n;
    long long dec_value = 0;
    long long base = 1;
 
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}

string dToB(long long n){
    string s = bitset<64> (n).to_string();

    const auto loc1 = s.find('1');
     
    if(loc1 != string::npos)
        return s.substr(loc1);
     
    return "0";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int N;
    string str;
    cin>>N>>str;
    int num=bToD(str);
    //cout<<((num&(num-1))==false)<<"\n";
    if(num<2||(num&(num-1))==0||((num+1)&num)==0){
        cout<<"-1";
    }
    else {
        cout<<dToB(num-1)<<" "<<dToB(num+1);
    }
}