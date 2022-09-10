#include<bits/stdc++.h> 
using namespace std; 

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char a[100],b[100]; cin >> a >> b;   
    
    for(int i = 0 ; i < 100; i++)
    {
        a[i] = tolower(a[i]) ; 
        b[i] = tolower(b[i]) ; 
    }

    int c = strcmp(a,b) ; 
    cout << c << endl; 

    return 0; 
}