#include <iostream>
using namespace std;


int main()
{
    int n, cantidad, count=0, flag=0;
    cin>>n;
    cantidad=n;
    for (int i = 1; i <=n; ++i)
    {
        if(i%2==0 && cantidad>=2 && flag==1){
            count++;
            cantidad-=2;
            flag=0;
        }else if (i%2!=0 && cantidad>0 && flag==0){
            count++;
            cantidad--;
            flag=1;
        }
    }
    cout<<count<<endl;
    return 0;
}


