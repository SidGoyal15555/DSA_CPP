#include <bits/stdc++.h>
using namespace std;
#include<numeric>
#include<algorithm>
typedef long long int int64;
const int N = 1e7+10;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//#endif
    //int q;
    //cin>>q;//number of queries and ans = if it s prime or not!
    //vector<bool> ans = isPrimeSieve(N);
    // while(q--){
    //     int n; cin>>n;
    //     if(ans[n]){
    //         cout<<1<<endl;
    //     }else{
    //         cout<<0<<endl;
    //     }
    // }

    vector<bool> isPrimeSieve(N,1);
    vector<int>lp(N,0),hp(N,0);
    isPrimeSieve[0] = isPrimeSieve[1] = false;
    for(int i=2;i<=N;++i){
        if(isPrimeSieve[i]==true){
            lp[i] = hp[i] = i;
            for(int j = 2*i;j<=N;j+=i){
                isPrimeSieve[j] = false;
                hp[j] = i;
                if(lp[j]==0){
                    lp[j] = i;
                }
            }
        }
    }
    for(int i=1;i<50;i++){
        cout<<lp[i]<<" "<<hp[i]<<endl;
    }
    return 0;
   }