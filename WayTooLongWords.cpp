#include <bits/stdc++.h>
using namespace std;

int32_t main() 
{
    int n; cin >> n; 

    while(n--)
    {
        string s; 
        cin >> s; 
        int size = s.size(); 

            if(size > 10) 
            {
                cout << s[0] + to_string(size - 2) + s[size - 1] << endl ; 
            }
            else
            {
                cout << s << endl; 
            }
        
    }
    
    return 0; 
}