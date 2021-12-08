#include <iostream>
#include <bits/stdc++.h>
#include <map>
#define ll long long int
using namespace std;

int main()
 {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int n;
string name;
long num;
cin >> n;
cin.ignore();
map <string, long> pBook;
for (int i = 0; i < n; i++) {
    cin >> name;
    cin >> num;
    pBook[name] = num;
}
while(cin >> name)
{
    if (pBook.find(name) != pBook.end())
     {
        cout << name << "=" << pBook.find(name)->second << endl;
    }
     else
     {
        cout << "Not found" << endl;
    }
}
return 0;
}
