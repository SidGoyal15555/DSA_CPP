#include <bits/stdc++.h>
using namespace std;
#include<numeric>
#include<algorithm>
typedef long long int int64;
const int N = 1e7+10;
vector<int> primefactor(int n){
    vector<int> ans;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            ans.push_back(i);
            n/=i;
        }
    }
    if(n>1){
        ans.push_back(n);
    }
    return ans;
}

bool isPrime(int n){
    if(n==1){
        cout<<false;
    }
    for(int i=0;i*i<=n;i++){
        if(n%i==0){
            cout<<false;
        }else{
            cout<<true;
        }
    }
    return 0;
}
vector<bool> isPrimeSieve(N,1);
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);
	//#endif
    
    isPrimeSieve[0] = isPrimeSieve[1] = false;
    for(int i=2;i<=N;++i){
        if(isPrimeSieve[i]==true){
            for(int j = 2*i;j<=N;j+=i){
                isPrimeSieve[j] = false;
            }
        }
    }
    for(int i=1;i<100;i++){
        cout<<isPrimeSieve[i]<<endl;
    }
    return 0;
   }