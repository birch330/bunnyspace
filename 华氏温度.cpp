# include <iostream>
using namespace std;

float trans(float x)
{
       float y;
       y=5*(x-32)/9;
       return y;
}
int main()
{
   float c,h;
   cout<<"请输入华氏温度h=";
   cin>>h;
   c=trans(h);
   cout<<"对应的摄氏温度c="<<c<<endl;
   return 0;
}
