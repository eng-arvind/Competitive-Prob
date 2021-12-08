#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<pair<int,pair<int,int>> > g[],int u,int v,int w)
{
  g[u].push_back(make_pair(w,make_pair(u,v)));
}
void Kruskal(vector<pair<int,pair<int,int>> > g[],int n)
{
  set<int> st;
  set<pair<int,pair<int,int>> > min_heap;
  for(int i=1;i<n;i++)
  {
  //  vector<int,pair<int,int> >::iterator j;
    for(int j=0;j<g[i].size();j++)
    {
      int u=g[i][j].second.first;
      int v=g[i][j].second.second;
      int w=g[i][j].first;
      min_heap.insert(make_pair(w,make_pair(u,v)));
    }
  }
  //set<int,pair<int,int> > ::iterator itr;
  //incomplete hai
  int mst=0;
  for(auto const &itr:min_heap)
  {
    int u=itr.second.first;
    int v=itr.second.second;
    int w=itr.first;
    if(st.find(u)==st.end() || st.find(v)==st.end())
    {
      st.insert(u);
      st.insert(v);
      mst+=w;
    }
    min_heap.erase(min_heap.begin());
  }
  cout<<mst;
}
int main()
{
  int n=8;
  vector<pair<int,pair<int,int>> > g[n];
  addEdge(g,1,2,28);
  addEdge(g,1,6,10);

  addEdge(g,2,1,28);
  addEdge(g,2,3,16);
  addEdge(g,2,7,14);

  addEdge(g,3,2,16);
  addEdge(g,3,4,12);
  addEdge(g,4,3,12);
  addEdge(g,4,5,22);
  addEdge(g,4,7,18);

  addEdge(g,5,4,22);
  addEdge(g,5,6,25);
  addEdge(g,5,7,24);

  addEdge(g,6,1,10);
  addEdge(g,6,5,25);

  addEdge(g,7,2,14);
  addEdge(g,7,4,18);
  addEdge(g,7,5,24);
  Kruskal(g,n);
  //cout<<g[1][0].first;
  return 0;
}
