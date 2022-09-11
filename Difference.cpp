#include<bits/stdc++.h> 
#define ll long long 
#define int ll 
using namespace  std; 

//  X = (A * B) - (C * D). 

void solve() 
{
   int a,b,c,d ; cin >> a >> b >> c >> d ; 
   int x = (a*b) - (c*d) ;  
   cout << "Difference = " << x << endl;  
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