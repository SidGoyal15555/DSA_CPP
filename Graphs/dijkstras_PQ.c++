//more optimal than previous solution O(VlogE)
#include <bits/stdc++.h>
using namespace std;
vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {   //defining min heap
        priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int>>> pq;
        vector<int> dist(V,1e9);
        
        dist[S] = 0;
        pq.push({0,S});
        
        while(!pq.empty()){
            int dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            
            for(auto it : adj[node]){
                int edgeWeight = it[1];
                int adjNode = it[0];
                
                if(dis + edgeWeight < dist[adjNode]){
                    dist[adjNode] = dis + edgeWeight;
                    pq.push({dist[adjNode],adjNode});
                }
            }
        }
        return dist;
    }
int main () {
    //#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//#endif

}