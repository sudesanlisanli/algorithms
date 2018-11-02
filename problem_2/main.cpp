#include <iostream>
#include "functionmath.h"

using namespace std;

int main()
{
    int a;
    int b;
    cout<< "Logaritma r tabanininda n icin:" << endl;
    cout<< "taban:"<< endl;
   do
    {
       cin>>a;
        if(a<=1)
        {
            cout<<"lutfen 1 den buyuk bir deger giriniz!"<< endl;
        }
        else
            break;
    }
    while(1);
    cout<< "deger:"<< endl;
    cin>> b;
    functionmath q=functionmath();
    unsigned int c=q.logn(b,a);
    cout<< "sonuc"<<endl;
    cout <<c<< endl;
        cout<< "karekokunun alinmasini istediginiz sayiyi giriniz:"<< endl;
    int sqrt;
    do
    {
        cin>>sqrt;
        if(sqrt<0)
        {
           cout<<"porzitif bir deger giriniz:"<< endl;
        }
        else
            break;
    }
    while(1);
    double k=q.sqroot(sqrt);
    cout<< "sonuc"<<endl;
    cout<< k<<endl;
        cout<< " a ussu b icin degerler giriniz"<< endl;
    int s;
    int d;

    cin>> s;
    cin>>d;
    int m=q.MyPow(s,d);
    cout<< "sonuc"<<endl;
    cout<< m<< endl;
    float power;
cout<< "e ussu icin deger giriniz:"<<endl;
cin>>power;
 double r=q.epow(power);
cout<<"sonuc"<<endl;
cout<<r<<endl;
    return 0;
}
