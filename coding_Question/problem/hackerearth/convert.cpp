#include <bits/stdc++.h>
using namespace std;
int minOps(string& A, string& B)
{
    int m = A.length(), n = B.length();
    if (n != m)
       return -1;
    int count[256];
    memset(count, 0, sizeof(count));
    for (int i=0; i<n; i++)   // count characters in A
       count[B[i]]++;
    for (int i=0; i<n; i++)   // subtract count for
       count[A[i]]--;         // every character in B
    for (int i=0; i<256; i++)   // Check if all counts become 0
      if (count[i])
         return -1;
    int res = 0;
    for (int i=n-1, j=n-1; i>=0; )
    {
        while (i>=0 && A[i] != B[j])
        {
            i--;
            res++;
        }
        if (i >= 0)
        {
            i--;
            j--;
        }
    }
    return res;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      string s1;
      cin>>s1;
      string s2=s1;
      sort(s2.begin(),s2.end());
      int num1 =minOps(s1, s2);
       string s3;
       s3=s1;
       sort(s3.rbegin(),s3.rend());
       int num2=minOps(s1, s3);
       if(num1==-1 || num2==-1)
       cout<<-1<<endl;
       else
       cout<<min(num1,num2)<<endl;
    }
    return 0;
}
