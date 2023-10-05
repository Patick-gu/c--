#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
  double A;
  double B;
  double C;
  double SOM=0, DIV=0, SOM2=0, SOM3=0, total;
 
 
    cin>>A;
    cin>>B;
    cin>>C;
    SOM= A*2;
    SOM2= B*3;
    SOM3= C*5;
    total=SOM+SOM2+SOM3;
    DIV= total/10;
       
     
 cout<<fixed<<setprecision(1);
  cout<<"MEDIA = "<<DIV<<endl;
  
  
}