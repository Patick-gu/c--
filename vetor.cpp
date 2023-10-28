#include <iostream>

using namespace std;

int main()
{
  float vetorA[5];
  float vetorB[5];
  float vetorC[5];
  int i;
  
  cout<<"digite valor de A"<<endl;
  i=0;
  while(i<5){
      cin>>vetorA[i];
      i++;
  }
   cout<<"digite valor de B"<<endl;
  i=0;
  while(i<5){
      cin>>vetorB[i];
      i++;
  }
    i=0;
  while(i<5){
      vetorC[i]=vetorA[i]+vetorB[i];
      i++;
  }
  
cout<<vetorC[i]<<endl;
 
}
