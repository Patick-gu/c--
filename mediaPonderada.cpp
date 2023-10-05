#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
  double A;
  double B;
  double SOM=0, DIV=0, SOM2=0, total;
 
 
    cin>>A;
    cin>>B;
    SOM= A*3.5;
    SOM2= B*7.5;
    total=SOM+SOM2;
    DIV= total/11;
       
     
 cout<<fixed<<setprecision(5);
  cout<<"MEDIA = "<<DIV<<endl;
  
  
}