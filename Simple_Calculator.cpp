#include<bits/stdc++.h> 
#define ll long long 
using namespace  std; 

void solve() 
{
    ll a,b; cin >> a >> b; 
    cout << a << " + " << b << " = " << a + b << endl ; 
    cout << a << " * " << b << " = " << a * b << endl ; 
    cout << a << " - " << b << " = " << a - b << endl ; 
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