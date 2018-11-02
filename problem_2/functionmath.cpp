#include "functionmath.h"
#include <iostream>

using namespace std;

functionmath::functionmath()
{


}
unsigned int functionmath::logn(unsigned int n,unsigned int r)
{

  return (n>r-1) ? 1 + logn(n/r,r):0;
}

 double functionmath::sqroot(double square)
{
    double root=square/3;
    int i;
    if (square <= 0) return 0;
    for (i=0; i<32; i++)
        root = (root + square / root) / 2;
    return root;
}
int functionmath:: MyPow(int a,int b){
      if(b<0)
        return (1 / MyPow (a,-b));
      else if(b==0)
        return 1;
      else if(b==1)
        return a;
      else
        return a*MyPow(a,b-1);
    }
    double functionmath::epow(float power){

int acc=30;
float ans=1;
float temp=1;
for(int i=1;i<=acc;i++){
    temp=(temp*power)/i;
    ans+=temp;

}
return ans;

}
