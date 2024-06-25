#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=0;
    int a=0;
    while(n>0)
    {
     if(n/10>=0)
     {
      a=n%10;
      n=n/10;
      m=m*10+a;

     }
     else
     {
         m=m+n;
     }
    }
    cout <<m<<endl;
    return 0;
}

