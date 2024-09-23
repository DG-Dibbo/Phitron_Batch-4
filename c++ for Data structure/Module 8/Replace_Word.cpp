#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s, x;
        cin >> s >> x;
        size_t found = 0;
        while ((found = s.find(x,found)) != string::npos) 
        {
            
            s.replace(found, x.size(), "#");           
            found++;
        }
        cout << s << endl;
    }
    return 0;
}
