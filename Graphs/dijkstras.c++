#include<bits/stdc++.h>
using namespace std;

#define V 6   	 //No of vertices

int Get_minimum_vertex(vector<int>& value,vector<bool>& processed)
{
    int minimum = INT_MAX;
    int vertex;
    for(int i=0;i<V;i++){
        if(processed[i]==false && value[i]<minimum){
            vertex = i;
            minimum = value[i];
        }
    }
    return vertex;
}

void dijkstra(int graph[V][V])
{
    int parent[V]; //shortest path graph
    vector<int> value(V,INT_MAX); // value array
    vector<bool> processed(V,false); // processed array

    parent[0] = -1;
    value[0] = 0;

    //iterate for v-1 edges to cover all v vertices

    for(int i=0;i<V-1;i++){
        int U = Get_minimum_vertex(value,processed);
        processed[U] = true; // includes new vertex in shortest path graph

        //update adjacent vertices
        for(int j=0;j<V;j++){
            if(graph[U][j]!=0 && processed[j]==false && value[U]!=INT_MAX && value[U]+graph[U][j]<value[j]){
                value[j] = value[U]+graph[U][j];
                parent[j] = U;
            }
        }

    }
    //Print Shortest Path Graph
    for(int i=1;i<V;i++){
        cout<<"U->V"<<parent[i]<<"->"<<i<<"->"<<"wt = "<<graph[parent[i]][i]<<endl;
    }

}

int main()
{
     int graph[V][V] = { {0, 3, 0, 0, 1, 0},
   					 {3, 0, 4, 0, 1, 0},
   					 {0, 4, 0, 2, 0, 3},
   					 {0, 0, 2, 0, 0, 1},
   					 {1, 1, 0, 0, 0, 6},
   					 {0, 0, 3, 1, 6, 0} };

    dijkstra(graph);    
    return 0;

}
