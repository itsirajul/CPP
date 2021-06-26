#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b;i++)
    {
        if(isPrime(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}