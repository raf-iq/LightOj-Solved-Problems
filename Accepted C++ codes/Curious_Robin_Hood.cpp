#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int getSum(int bit_tree[],int index){
    int sum=0;
    while(index>0){
        sum+=bit_tree[index];
        index=index-(index&(-index));
    }
    return sum;
}
void update_bit_tree(int bit_tree[],int n,int index,int value){
    while(index<=n){
        bit_tree[index]+=value;
        index=index+(index&(-index));
    }
}
void update_dec_tree(int bit_tree[],int n,int index,int value){
    while(index<=n){
        bit_tree[index]-=value;
        index=index+(index&(-index));
    }
}
int *construct_bit_tree(int bit_tree[],int n){
    int *tree=new int[n+2];
    for(int i=0; i<=n; ++i)
        tree[i]=0;
    for(int i=1; i<=n; ++i){
        update_bit_tree(tree,n,i,bit_tree[i]);
    }
    return tree;
}
int main()
{
    int n,test=1,T;
    scanf("%d",&T);
    while(T--){
        int n,q;
        scanf("%d%d",&n,&q);
        int a[n+2];
        for(int i=1; i<=n; ++i){
            scanf("%d\n",&a[i]);
        }
        int *bitTree=construct_bit_tree(a,n);
        printf("Case %d:\n",test++);
        for(int i=0;i<q;++i){
            int t,ii,j,v;
            scanf("%d",&t);
            if(t==1){
                scanf("%d",&ii);
                printf("%d\n",a[ii+1]);
                update_dec_tree(bitTree,n,ii+1,a[ii+1]);
                a[ii+1]=0;
            }
            else if(t==2){
                scanf("%d%d",&ii,&v);
                update_bit_tree(bitTree,n,ii+1,v);
                a[ii+1]+=v;
            }
            else if(t==3){
                scanf("%d%d",&ii,&j);
                printf("%d\n",getSum(bitTree,j+1)-getSum(bitTree,ii));
            }
        }
    }
    return 0;
}
