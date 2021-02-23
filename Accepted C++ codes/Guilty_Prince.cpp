#include<bits/stdc++.h>
using namespace std;

class Graph{
private:
    int V;
    list<int> *adj;
public:
    Graph(int v){
        V=v;
        adj= new list<int>[V+1];
    }
    void addEdge(int v,int w){
        adj[v].push_back(w);
    }
    int BFS(int s){
        bool *visited=new bool[V+2];
        for(int i=0; i<=V; ++i){
            visited[i]=false;
        }
        list<int>q;
        int king=1;
        q.push_back(s);
        visited[s]=true;
        list<int>::iterator it;
        while(!q.empty()){
            int u=q.front();
            q.pop_front();
            for(it=adj[u].begin(); it!=adj[u].end(); ++it){
                if(!visited[*it]){
                    king++;
                    visited[*it]=true;
                    q.push_back(*it);
                }
            }
        }
        return king;
    }


};

int main()
{
    int T,test=1;
    cin >> T;
    while(T--){
        int w,h;
        cin >> w >> h;
        Graph g(w*h);
        int arr[h+3][w+3];
        memset(arr,0,sizeof(arr));
        char c;
        int n,nodeNum=1;
        for(int i=1; i<=h; ++i){
            for(int j=1; j<=w; ++j){
                cin >> c;
                if(c=='.')
                    arr[i][j]=nodeNum;
                else if(c=='#')
                    arr[i][j]=0;
                else {
                    arr[i][j]=nodeNum;
                    n=nodeNum;
                }
                nodeNum++;
            }
        }
        for(int i=1; i<=h; ++i){
            for(int j=1; j<=w; ++j){
                if(arr[i][j]!=0 && arr[i-1][j]!=0)
                    g.addEdge(arr[i][j],arr[i-1][j]);
                if(arr[i][j]!=0 && arr[i+1][j]!=0)
                    g.addEdge(arr[i][j],arr[i+1][j]);
                if(arr[i][j]!=0 && arr[i][j-1]!=0)
                    g.addEdge(arr[i][j],arr[i][j-1]);
                if(arr[i][j]!=0 && arr[i][j+1]!=0)
                    g.addEdge(arr[i][j],arr[i][j+1]);
            }
        }
        int king=g.BFS(n);
        cout << "Case " << test++ << ": " << king << endl;
    }

    return 0;
}
