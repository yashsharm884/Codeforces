#include<bits/stdc++.h> 
#include<iomanip>
#define ll long long 
#define int ll 
using namespace  std; 

// ICPC Assiut University Community 

void solve() 
{   
   int a,b, c , d ; cin >> a >> b >> c >> d ; 

   if(c >= a && c <= b) 
   {
        cout << c << " " ; 
        if( d >= b) 
        {
            cout << d ; 
        }
   }
   else 
   {
        cout << -1 ; 
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
