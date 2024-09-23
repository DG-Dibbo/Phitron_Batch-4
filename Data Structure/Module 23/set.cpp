#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st.insert(x);// O(logn)
    }
    for(auto it = st.begin(); it != st.end(); it++)
    {
        cout << *it<<" ";
    }
    cout <<endl;
    cout <<st.count(100)<<endl;//O(logn)
    if(st.count(20))
    {
        cout <<"Yes"<<endl;
    }
    else
    {
        cout <<"No"<<endl;
    }
    return 0;
}