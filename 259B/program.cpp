#include <iostream>
#include <algorithm>
using namespace std;

typedef long long int ll;


int main()
{
    int arg[3][3];
    cin>>arg[0][0]>>arg[0][1]>>arg[0][2]>>arg[1][0]>>arg[1][1]>>arg[1][2]>>arg[2][0]>>arg[2][1]>>arg[2][2];

    int sum=(arg[0][1]+arg[0][2]+arg[1][0]+arg[1][2]+arg[2][0]+arg[2][1])/2;
    arg[0][0]=sum-arg[1][0]-arg[2][0];
    arg[1][1]=sum-arg[0][1]-arg[2][1];
    arg[2][2]=sum-arg[0][2]-arg[1][2];

    cout<<arg[0][0]<<" "<<arg[0][1]<<" "<<arg[0][2]<<endl;
    cout<<arg[1][0]<<" "<<arg[1][1]<<" "<<arg[1][2]<<endl;
    cout<<arg[2][0]<<" "<<arg[2][1]<<" "<<arg[2][2]<<endl;
    return 0;
}
