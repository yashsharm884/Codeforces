#include<bits/stdc++.h> 
using namespace std; 

int32_t main() 
{
    char str[100]  ; 
    cin >> str; 

    char ch ; 

    for(int i = 0 ;  i < strlen(str); i++) 
    {
        str[i] = tolower(str[i]) ;  

// vowels are given in the question description. 

        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i' || str[i] == 'y') 
        {
            continue; 
        }
        else 
        {
            str[i] = tolower(str[i]); 
            cout << '.' << str[i] ; 
        }
    }

    return 0; 
}