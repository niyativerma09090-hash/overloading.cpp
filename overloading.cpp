#include <iostream>
using namespace std;
 class calculator
{
public:
int multiply(int a,int b)
{
return a*b;
}
int multiply(int a,int b,int c)
{
return  a*b*c;
}
};
int main()
{
calculator c;
cout<<"The multiplication of first is"<<c.multiply(6,7);
cout<<"Thr multiplication of second is"<<c.multiply(6,7,8);
return 0;
}
