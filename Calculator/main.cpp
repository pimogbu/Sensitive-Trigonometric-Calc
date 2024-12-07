#include "./fac.cpp"

int main()
{
   double x;
   cin>>x;
   x*=PI/180.0;
   
   cout<<calc(fmod(x,2*PI));
}


