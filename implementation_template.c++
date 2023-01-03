#include <bits/stdc++.h>
using namespace std;
#include<numeric>
#include <unordered_set>
#include<algorithm>
typedef long long int int64;
#include<string>
typedef long long ll;
#define mod 1000000007;

int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int64 t;cin>>t;
    
    while(t--){
        int64 n,m,sum(0),bsum(0);cin>>n>>m;
        int64 a[n],b[m];

        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            bsum+=b[i];
        }
        int i=0;
        int j = m-1;
        sort(b,b+m);
        int temp = min(n,m);
        while(temp--){
                sum-=a[i++];
                sum+=b[j--];
        }
        cout<<sum<<endl;
    }

    
}
