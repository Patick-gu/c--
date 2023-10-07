#include <iostream>

using namespace std;

int main(void)
{
  double vetor[5];
   
   
   for(int i=0; i<5; i++)
   {
       cin>>vetor[i];
       if(vetor[i]<=10){
          cout<<"X["<<i<<"] = "<<vetor[i]<<endl;
       }
      
   }
}
