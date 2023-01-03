#include <bits/stdc++.h>
using namespace std;


/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;


/* clang-format on */
void solve() {

    int n;
	cin>>n;

	string s="";
	cin>>s;
	map<char,int> m;

	bool ans = true;

	for (char i : s)
	{
		m[s[i]]++;
	}
	for(auto i : m){
		if(i.second%2!=0){
			ans=false;
			break;
		}
	}
	if(ans){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}

int main() {
	//#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
/* Main()  function */

}