#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>adj[N];
bool vis[N];

void dfs(int vertex){
    cout<<vertex<<endl;
    vis[vertex]=true;
    for(int child: adj[vertex]){
        cout<<"par"<<vertex<<", child "<<child<<endl;
        if(vis[child])continue;

        dfs(child);
    }
}

int main(){
    cout<<"Enter number of vertices: "<<endl;
    int n;
    cin>>n;

   cout<<"Enter the edges : "<<endl;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
    return 0;
}
