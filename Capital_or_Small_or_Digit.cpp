#include<bits/stdc++.h> 
#define ll long long 
using namespace  std; 

// Print a single line contains "IS DIGIT" if X is digit otherwise,
// print "ALPHA" in the first line followed by a new line that contains "IS CAPITAL"
// if X is a capital letter and "IS SMALL" if X is a small letter.


void solve() 
{
    char ch; cin >> ch; 

    if(ch > 64 && ch < 97) 
    {
        cout << "ALPHA" << endl << "IS CAPITAL" ; 
    }
    else if(ch >= 97) 
    {
        cout << "ALPHA" << endl << "IS SMALL" ; 
    }
    else 
    {
        cout << "IS DIGIT" << endl ; 
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