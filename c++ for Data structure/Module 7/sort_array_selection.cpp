#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
        string name;
        int ID;
        string section;
        int Reg;
};
int main()
{
    int n;
    cin  >> n;
    while (n--)
    {
        student a[3];
    for(int i = 0; i<3; i++)
    {
        cin >> a[i].ID >> a[i].name>> a[i].section>>a[i].Reg;
    }
    for(int i = 0; i<3-1; i++)
    {
        for(int j = i+1; j<3; j++)
        {
            if(a[i].Reg < a[j].Reg)
            {
                swap(a[i],a[j]);
            }
            else if(a[i].Reg == a[j].Reg)
            {
                if(a[i].ID > a[j].ID)
                {
                    swap(a[i],a[j]);
                }
            }
            
        }
        
    }
    cout<< a[0].ID <<" "<< a[0].name << " "<<a[0].section<<" "
    <<a[0].Reg<<endl;
    }
    
    return 0;
}