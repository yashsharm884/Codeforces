#include <bits/stdc++.h>
using namespace std;


int main()
{
    
int n, x, count1 = 0, count2 = 0, count3 = 0 , counti = 0 , countii = 0;

vector<int> tp;
vector<int> tm;
vector<int> tpe;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if (x == 1)
        {
            count1++;
            tp.push_back(i);
        }
        if (x == 2)
        {
            count2++;
            tm.push_back(i);
        }
        if (x == 3)
        {
            count3++;
            tpe.push_back(i);
        }
    }

    if ( (count1 && count2 && count3 != 0) )
    {
        counti = min(count1, count2);
        countii = min(counti, count3);
        cout << countii << endl;

        for (int j = 0; j < countii; j++)
        {
            cout << tp[j] << " " << tm[j] << " " << tpe[j] << endl;
        }
    }
    else
        cout << 0 << endl;
}