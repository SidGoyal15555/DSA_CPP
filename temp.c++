#include <bits/stdc++.h>
using namespace std;
#include<numeric>
#include<algorithm>
typedef long long int int64;
#include<string>

int main () {
    //#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    cin>>n>>k;

    vector<int> ans(n+1);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    vector<int> anso(n),anse(n);
    int a=0;
    int b=0;
    for(int i=0;i<ans.size();i++){
        if(ans[i]%2!=0){
            anso[a] = ans[i];
            a++;
        }else{
            anse[b] = ans[i];
            b++;
        }
    }
    if(k<a){
        cout<<anso[k]<<endl;
    }else{
        cout<<anse[k-a]<<endl;
    }
   }



    


    
