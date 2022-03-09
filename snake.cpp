#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int l;
        cin >> l;
        string a[l];
        for (int i = 0; i < l; i++)
        {
            cin >> a[i];
        }
        
        for (int i = 0; i < l; i++)
        {
            if(a[i]=="..H..T…HTH….T." ||a[i]=="…"){
                cout << "Valid" << endl;
                break;
            }
            else{
                cout << "Invalid" << endl;
                break;
            }
        }
    }
    
}