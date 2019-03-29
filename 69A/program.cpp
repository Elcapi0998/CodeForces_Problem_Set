#include <iostream>
using namespace std;

int main() {
  int n=0,x=0,y=0,z=0;
  cin>>n;
  for (int i = 0; i < n; ++i)
  {
    int ans;
    cin>>ans;
    x+=ans;
    cin>>ans;
    y+=ans;
    cin>>ans;
    z+=ans;
  }
  if(x==0 && y==0 && z==0) cout<<"YES\n";
  else cout<<"NO\n";
  return 0;
}