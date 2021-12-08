#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
 {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q;
    cin>>n>>q;
    vector<vector<int> > v(n);
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        for(int j=0;j<k;j++)
        {
          int a;
          cin>>a;
          v[i].push_back(a);
        }
    }
    for(int i=0;i<q;i++)
    {
      int r,c;
      cin>>r>>c;
      cout<<v[r][c]<<endl;
    }
    return 0;
}
