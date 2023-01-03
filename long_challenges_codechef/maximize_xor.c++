#include <bits/stdc++.h>
using namespace std;


typedef long long int int64;
string xoring(string a, string b, int n){
string ans = "";
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());
    // Loop to iterate over the
    // Binary Strings
    for (int i = 0; i < n; i++)
    {
        // If the Character matches
        if (a[i] == b[i])
            ans += "0";
        else
            ans += "1";
    }
    return ans;
}
int main () {
    //#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);
	//#endif
    int t;
    cin >> t;
    
    while (t--) {
    string a = "";
    string b = "";
    cin>>a>>b;
    int n = a.length();
    string c = xoring(a, b, n);
    sort(c.begin(),c.end());
    reverse(c.begin(),c.end());
    cout<<c<<endl;
    }
    
}

    
