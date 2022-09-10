#include<bits/stdc++.h> 
#define ll long long 
using namespace  std; 

void solve() 
{
    int a ;     cin >> a  ; 
    string str = to_string(a);  
    int counter = 0 ; 
     
    if(a % 4 == 0 || a % 7 == 0 || a % 47 == 0) 
    {
        cout << "YES" << endl; 
        goto con; 
    }

    for(int i = 0 ; i < str.size(); i++) 
    {
        if(str[i] == '4') 
        {
            counter++; 
        }
        else if(str[i] == '7') 
        {
            counter++; 
        }
    }
    
    if(counter == str.size()) 
    {
        cout << "YES" << endl; 
    }
    else 
    {
        cout << "NO" << endl; 
    }
    con : 
    {

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