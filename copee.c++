#include <bits/stdc++.h>
using namespace std;
#include<numeric>
#include<algorithm>
typedef long long int int64;

void solve(){
    int cases; cin>>cases;
    for(auto i=0;i<cases;i++){
        int n; cin>> n;
        vector<int> k;
        vector<int> even;
        for(auto j=0;j<n;j++){
            int data;cin>>data;
            if(data%2!=0) {k.push_back(data);}
            else {even.push_back(data);}
        }
    
    int mino = INT_MAX;
    if((int)k.size()%2!=0){
        vector<int> minEqual;
        for(auto val : k){
            int ops =0;
            int temp = val;
            while(temp%2!=0){
                temp = floor(temp/2);
                ops++;
            }
            minEqual.push_back(ops);
        }
        mino = *min_element(minEqual.begin(),minEqual.end());

        int evenMin = INT_MAX;
        if((int)even.size()>0){
            vector<int> evenEqual;
            for(auto val : even){
                int ops =0;
                int temp = val;
                while(temp%2==0){
                    temp = floor(temp/2);
                    ops++;
                }
                evenEqual.push_back(ops);
            }
            evenMin = *min_element(evenEqual.begin(),evenEqual.end());
        }
        cout<<min(mino,evenMin)<<endl;
    }else{
        cout<<0<<endl;
    }
}
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);
	//#endif
    
    solve();
    return 0;
   }



    


    
