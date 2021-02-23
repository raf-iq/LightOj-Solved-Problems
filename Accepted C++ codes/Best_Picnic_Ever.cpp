#include<bits/stdc++.h>
using namespace std;

class Graph{
private:
    int V;
    list<int> *adj;
public:
    int arr[1003];
    Graph(int v){
        V=v;
        adj= new list<int>[V+1];
        memset(arr,0,sizeof(arr));
    }
    void addEdge(int v,int w){
        adj[v].push_back(w);
    }
    void BFS(int s){
        bool *visited=new bool[V+2];
        for(int i=0; i<=V; ++i){
            visited[i]=false;
        }
        arr[s]++;
        list<int>q;
        q.push_back(s);
        visited[s]=true;
        list<int>::iterator it;
        while(!q.empty()){
            int u=q.front();
            q.pop_front();
            for(it=adj[u].begin(); it!=adj[u].end(); ++it){
                if(!visited[*it]){
                    arr[*it]++;
                    visited[*it]=true;
                    q.push_back(*it);
                }
            }
        }
    }


};

int main()
{
    int T,test=1;
    cin >> T;
    while(T--){
        int k,n,m;
        cin >> k >> n >> m;
        int N[k];
        Graph g(n);
        for(int i=0; i<k; ++i)
            cin >> N[i];
        ///sort(N,N+k);
        for(int i=0; i<m; ++i){
            int u,v;
            cin >> u >> v;
            g.addEdge(u,v);
        }
        for(int i=0; i<k; ++i){
            g.BFS(N[i]);
        }
        ///sort(g.arr+1,g.arr+n+1,greater<int>());
        int road=0;
        for(int i=1; i<=n; ++i){
            if(g.arr[i]==k)
                road++;
        }
       /* for(int i=0; i<n; ++i){
            bool no=false;
            for(int I=0; I<k; I++){
                int j=N[I];
                if(!g.arr[j][i+1]){
                    no=true;
                    break;
                }
            }
            if(!no){
                road++;
            }
        }*/

        cout << "Case " << test++ << ": " << road << endl;
    }

    return 0;
}
