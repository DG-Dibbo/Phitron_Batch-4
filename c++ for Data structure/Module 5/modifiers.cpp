#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s,p;
    // cin >> s >> p; //dibbo tisa
    // // s += p;// same of append. 
    // s.append(p);
    // cout << s << endl; //dibbotisa
    // cout << p << endl; //tisa

    // string a;
    // cin >> a; // dibbo
    // // a += 'A'; // work //OT . dibboA
    // /* int len = a.size();
    //  a[len] = 'A'; // didn't work.*/
    // // a.push_back('A');//work.//output . dibboA
    // a.pop_back();//output. dibb
    // cout << a << endl;

    // string s;
    // cin >> s; // Dibbo
    // getchar();
    // string p;
    // cin >> p; // Tisa
    // //s = p; // output: Tisa
    // s.assign(p);// output: Tisa
    // cout << s << endl; 
    string s;
    cin >> s; //IYou
    // s.erase(3,1); //output. dibo
    //s.replace(5,0," Love "); // output . I love You
    s.insert(5," love "); // output . I love You
    cout << s << endl;
    return 0;
}