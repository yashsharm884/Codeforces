#include<bits/stdc++.h> 
#define ll long long 
using namespace  std; 

void solve() 
{
    char ch; cin >> ch;  

    if(ch > 64 && ch < 97) 
    {
        cout << (char)(toupper(ch)+32) ; 
    }
    else if(ch >= 97) 
    {
        cout << (char)(tolower(ch)-32) ;  
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