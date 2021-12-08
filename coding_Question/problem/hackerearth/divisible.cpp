#include <bits/stdc++.h>
using namespace std;
int countKdivPairs(int A[], int n, int K)
{
    int freq[K] = { 0 };
    for (int i = 0; i < n; i++)
        ++freq[A[i] % K];
    int sum = freq[0] * (freq[0] - 1) / 2;
    for (int i = 1; i <= K / 2 && i != (K - i); i++)
        sum += freq[i] * freq[K - i];
    if (K % 2 == 0)
        sum += (freq[K / 2] * (freq[K / 2] - 1) / 2);
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int A[n];
      for(int i=0;i<n;i++) cin>>A[i];
      int K=4;
      cout << countKdivPairs(A, n, K);
    }
    return 0;
}
