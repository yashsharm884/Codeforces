#include<bits/stdc++.h> 
#include<iomanip>
#define ll long long 
#define int ll 
using namespace  std; 

// ICPC Assiut University Community 

// Only one line containing A, S and B respectively (-100  ≤  A, B  ≤  100),
//  S can be ('<', '>','=') without the quotes.

// Given a comparison symbol S between two numbers A and B.
// Determine whether it is Right or Wrong.

void solve() 
{   
    int a; cin >> a; 
    char ch ; cin >> ch; 
    int b ; cin >> b; 

    if(ch == '>') 
    {
        if(a > b) 
        {
            cout << "Right" ; 
        }
        else 
        {
            cout << "Wrong" ;
        }
    }
        if(ch == '<') 
    {
        if(a < b) 
        {
            cout << "Right" ; 
        }
        else 
        {
            cout << "Wrong" ;
        }
    }
        if(ch == '=') 
    {
        if(a == b) 
        {
            cout << "Right" ; 
        }
        else 
        {
            cout << "Wrong" ;
        }
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
