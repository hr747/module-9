#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long
class edge
{
    public:
    int a,b,c;
    edge(int a, int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }

};
int dis[10005];
int n,e;
vector<edge>edge_list;
 

void bellman()
{
        for(int i=0;i<n;i++)
    dis[i]=INT_MAX;
    dis[0]=0;
    for (auto i=0;i<n-1;i++)
    {
    for(auto ed:edge_list)
    {
        int a=ed.a;
        int b=ed.b;
        int c=ed.c;
        if(dis[a]!=INT_MAX&&dis[a]+c<dis[b])
        dis[b]=dis[a]+c;
        
    }
}

}


 int main()

{ 
    cin>> n>>e;
    
    while (e--)
    {
        /* code */
        int a,b,c;
        cin>>a>>b>>c;
        edge_list.push_back(edge(a,b,c));
        // edge_list.push_back(edge(b,a,c)); undirect


    }
    bellman();


    for(auto i=0;i<n;i++)
    {
        cout<<dis[i]<<endl;
    }
    
    

    return 0;
}