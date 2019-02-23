#include<iostream>

using namespace std;

int main(){
    int n;
    bool flag=true;
    cin>>n;
    for (int b = n/7; b>=0; b--)
    {
        int a=n-7*b;
        if (a%4==0)
        {
            flag=false;
            for (int i = 0; i < a/4; ++i) cout<<4;
            for (int i = 0; i < b; ++i) cout<<7;
            break;
        }
    }
    if (flag)
    {
        cout<<-1;
    }
    cout<<endl;
    return 0;
}


