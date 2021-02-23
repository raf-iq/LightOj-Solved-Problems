#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
# define INF 0x3f3f3f3f
#define iPair pair<int,int>

bool paichi=false;
using namespace std;
int parent[100];
int find_set(int i){
    if(parent[i]==i)
        return i;
    else
        return find_set(parent[i]);
}
void union_set(int u,int v){
    parent[u]=parent[v];
}

int getIndex(vector<string> v,string c){
    for(int i=0; i<v.size(); ++i){
        if(v[i]==c){
            paichi=true;
            return i;
        }
    }
    paichi=false;
    return v.size();
}
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    optimize
    int T,test=1;
    cin >> T;
    while(T--){
        int m;
        cin >> m;
        vector<pair<int,pair<int,int>>> input;
        string city1,city2;
        vector<string>cityList;
        int cost;
        for(int i=0; i<m; ++i){
            cin >> city1 >> city2 >> cost;
            paichi=true;
            int c1=getIndex(cityList,city1);
            if(!paichi){
                cityList.push_back(city1);
            }
            paichi=true;
            int c2=getIndex(cityList,city2);
            if(!paichi){
                cityList.push_back(city2);
            }
            input.push_back(make_pair(cost,make_pair(c1,c2)));
        }
        vector<pair<int,pair<int,int>>> k_tree;
        for(int i=0; i<100; ++i){
            parent[i]=i;
        }
        sort(input.begin(),input.end());
        for(int i=0; i<input.size(); ++i){
            int a=find_set(input[i].second.first);
            int b=find_set(input[i].second.second);
            if(a!=b){
                k_tree.push_back(input[i]);
                union_set(a,b);
            }
        }

        cout << "Case " << test++ << ": ";
        if(k_tree.size()+1 != cityList.size()){
            cout << "Impossible" << endl;
        }
        else {
            cost=0;
            for(int i=0; i<k_tree.size(); ++i){
                cost+=(k_tree[i].first);
            }
            cout << cost << endl;
        }

    }
    return 0;
}

