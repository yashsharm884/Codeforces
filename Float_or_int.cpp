#include<bits/stdc++.h> 
#include<iomanip>
#define ll long long 
#define int ll 
using namespace  std; 

// ICPC Assiut University Community 


void solve() 
{   
    float n ; cin >> n; 
    int a = (int)n;  

    float res = n - a ; 

    if(res != 0 ) 
    {
        cout << "float " << a << " " << fixed << setprecision(3)  << res ; 
    }
    else 
    {
        cout << "int " << a ;
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
