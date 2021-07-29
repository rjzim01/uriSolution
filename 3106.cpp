#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,x,df=0,i;
    cin >> x;
    for(i=0;i<x;i++){
        cin >> a;
        df += (a/3)*3;
    }

    cout << df << endl;

}
