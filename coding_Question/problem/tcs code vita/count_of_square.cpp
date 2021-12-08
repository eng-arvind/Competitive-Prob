
#include <bits/stdc++.h>
using namespace std;
#define sz(x) int(x.size())
int get_dis(pair<int, int> p1,
           pair<int, int> p2)
{
   int a = abs(p1.first - p2.first);
   int b = abs(p1.second - p2.second);
   return ((a * a) + (b * b));
}
bool check(pair<int, int> p1,
          pair<int, int> p2,
          pair<int, int> p3,
          pair<int, int> p4)
{

   int d2 = get_dis(p1, p2);
   int d3 = get_dis(p1, p3);
   int d4 = get_dis(p1, p4);
   if (d2 == d3
       && 2 * d2 == d4
       && 2 * get_dis(p2, p4) == get_dis(p2, p3)) {
       return true;
   }
   if (d3 == d4
       && 2 * d3 == d2
       && 2 * get_dis(p3, p2) == get_dis(p3, p4)) {
       return true;
   }
   if (d2 == d4
       && 2 * d2 == d3
       && 2 * get_dis(p2, p3) == get_dis(p2, p4)) {
       return true;
   }
   return false;
}
int count(map<pair<int, int>, int> hash,
         vector<pair<int, int> > v, int n)
{
   int ans = 0;
   map<pair<int, int>, int> vis;
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           if (i == j)
               continue;
           pair<int, int> p1
               = make_pair(v[i].first,
                           v[j].second);
           pair<int, int> p2
               = make_pair(v[j].first,
                           v[i].second);
           set<pair<int, int> > s;
           s.insert(v[i]);
           s.insert(v[j]);
           s.insert(p1);
           s.insert(p2);
           if (sz(s) != 4)
               continue;
           if (hash.find(p1) != hash.end()
               && hash.find(p2) != hash.end()) {
               if ((!vis[v[i]] || !vis[v[j]]
                    || !vis[p1] || !vis[p2])
                   && (check(v[i], v[j], p1, p2))) {

                   vis[v[i]] = 1;
                   vis[v[j]] = 1;
                   vis[p1] = 1;
                   vis[p2] = 1;
                   ans++;
               }
           }
       }
   }
   cout << ans;
   return ans;
}
void countOfSquares(vector<pair<int, int> > v, int n)
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   map<pair<int, int>, int> hash;
   vector<pair<int, int> >::iterator ptr;
   for (ptr = v.begin(); ptr < v.end(); ptr++)
       hash[*ptr] = 1;
   count(hash, v, n);
}
int main()
{

   int n;
   cin>>n;
   vector<pair<int, int> > v;
   for(int i=0;i<n;i++)
   {
     int a,b;
     cin>>a>>b;
     v.push_back(make_pair(a,b));
   }
   countOfSquares(v, n);
   return 0;
}
