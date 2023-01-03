#include <bits/stdc++.h>
using namespace std;
#include<numeric>
#include<algorithm>
typedef long long int int64;
int lcm(int a,int b, int gcd){
    return (a*b)/gcd;
}
int gcd(int a, int b)
{
    if(b==0){
        return a;
    }
    if(a==0){
        return b;
    }else{
        return gcd(b,a%b);
    }
}
//binary exponentiation TC: O(log(n))
int binpow(int a, int n){
    int res = 1;
    while(n){
        if(n%2){
            res*=a,n--;
        }else{
            a*=a,n/=2;
        }
    }
    return res;
}
//modular exponentiation for calc-> (a^n)%p
int modpow(int a,int n,int p){
    int res =1;
    while(n){
        if(n%2){
            res = (res*a)%p, n--;
        }else{
            a = (a*a)%p,n/=2;
        }
    }
    return res;
}

//modular multipilicative inverse using fermets little theorem


int main () {
    //#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);
	//#endif
    int t;
    cin >> t;
    
    while (t--) {
        int64 n,a,b,k;
        cin>>n>>a>>b>>k;
        
        
        }
    }



    


    
