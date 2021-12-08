#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0,j=n-1;
        int cnt=0;
        while(i<j)
        {
            if(s[i]=='N' && s[j]=='S')
            {
              swap(s[i],s[j]);
              i++;
              j--;
              cnt++;
            }
            else if(s[i]=='S')
            {
              i++;
            }
            else if(s[j]=='N')
            {
              j--;
            }
        }
        cout<<cnt;
    }
    return 0;
}
