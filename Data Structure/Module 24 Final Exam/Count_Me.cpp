#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    getchar();

    for (int i = 0; i < n; i++)
    {
        string sentence;
        getline(cin, sentence);

        string word;
        stringstream ss(sentence);
        map<string, int> mp;

        string s;
        int count = 0;

        while (ss >> word)
        {
            mp[word]++;
            if (mp.size() == 1)
            {
                count = mp[word];
                s = word;
            }
            else
            {
                if (count < mp[word])
                {
                    count = mp[word];
                    s = word;
                }
            }
        }

        cout << s << " " << count << endl;
    }

    return 0;
}
