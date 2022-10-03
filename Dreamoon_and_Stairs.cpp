#include<bits/stdc++.h> 
#define ll long long 
#define int ll 
using namespace  std; 

void solve() 
{
   int n,m; cin >> n >> m; 

   if (n < m) 
   {
        cout << -1;
   } 
   else 
   {
        cout << (n + (2 * m) - 1) / 2 / m * m;
   }
}

int32_t main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
    #endif 

    solve(); 
}
























