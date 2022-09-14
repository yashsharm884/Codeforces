#include<bits/stdc++.h> 
#define ll long long 
#define ld long double 
using namespace  std; 

void solve() 
{
   ll a,b,c,d; cin >> a >> b >> c >> d; 

   a = a % 100; 
   b = b % 100; 
   c = c % 100; 
   d = d % 100; 

   ll m = (a*b*c*d)  % 100 ; 

    if(m < 10) 
    {
        cout << 0 << m; 
    }
    else 
    {
        cout << m; 
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