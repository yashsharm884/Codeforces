#include<bits/stdc++.h> 
#define ll long long 
using namespace  std; 

void solve() 
{
    string a,b,c,d ; cin >> a >> b >> c >> d;    

    if(b == d) 
    {
        cout << "ARE Brothers" ;
    }
    else 
    {
        cout<<"NOT";
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