#include <iostream>

using namespace std;

int gcd(int m,int k)
{



if(m==0)
return k;
return gcd(k % m,m);
}
int main()

{
int m= 210, k=45;
cout<<"GCD("<<m<<","<<k<<")="<<gcd(m,k)<<endl;


return 0;



}













