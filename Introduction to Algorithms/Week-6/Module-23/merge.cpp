#include <bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int mid,int r)
{
    int leftside = mid-l+1;
    int rightside = r-mid;
    int L[leftside],R[rightside];
    int k = 0;
    for(int i = l; i<=mid; i++)
    {
        L[k] = a[i];
        k++;
    }
    k = 0;
    for(int i = mid+1; i<=r; i++)
    {
        R[k] = a[i];
        k++;
    }
    int i = 0,j=0;
    int cur = l;
    while(i<leftside && j<rightside)
    {
        /* code */
        if(L[i] <= R[j])
        {
            a[cur] = L[i];
            i++;
        }
        else
        {
            a[cur] = R[j];
            j++;
        }
        cur++;
    }
    while(i <leftside)
    {
        /* code */
        a[cur] = L[i];
        i++;
        cur++;
    }
    while (j<rightside)
    {
        /* code */
        a[cur] = R[j];
        j++;
        cur++;
    }
    
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    merge(a,0,3,n-1);
    for(int i = 0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}