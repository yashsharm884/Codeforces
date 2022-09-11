#include<bits/stdc++.h> 
#include<iomanip>
#define ll long long 
#define int ll 
using namespace  std; 

// Area = π * R2.

// Note: consider π = 3.141592653.

// ICPC Assiut University Community

void solve() 
{
    double a; cin >> a; 
    double Area = 3.141592653 * (a*a) ; 
    cout << fixed << setprecision(9) << Area ; 
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