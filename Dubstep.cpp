#include<bits/stdc++.h> 
#define ll long long 
using namespace  std; 

void solve() 
{
    string s ; cin >> s ;  bool isTrue = true ;  

    for(int i = 0; i < s.size() ; i++) 
    {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B' )  
        {
            i = i + 2; 
            if(!isTrue) 
            {
                cout << " " ; 
            }
            continue; 
        } 
        else 
        {
            isTrue = false ; 
            cout << s[i] ; 
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