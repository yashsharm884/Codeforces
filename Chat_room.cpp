#include<bits/stdc++.h> 
#define ll long long 
using namespace  std; 

void solve() 
{
    string s; cin >> s; 
    string p = "hello" ;  int j = 0 ; int pas = 0 ; 

    for(int i = 0 ; i < s.size(); i++) 
    {
       if(s[i] == p[j]) 
       {
            j++; 
            pas++; 

            if(pas == 5) 
            {
                break; 
            } 
       }
    }
    
       if (pas == 5) {
        cout << "YES";
    } else {
        cout << "NO";
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