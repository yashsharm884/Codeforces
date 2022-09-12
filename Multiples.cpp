#include<bits/stdc++.h> 
#include<iomanip>
#define ll long long 
#define int ll 
using namespace  std; 

void solve() 
{   
   int a, b; cin >> a >> b;  

    if( b % a == 0 || a % b == 0)  
   {
    cout << "Multiples" ; 
   }
   else 
   {
    cout << "No Multiples" ; 
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