#include <iostream> 
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    double A,B,C;
    cin>>A>>B>>C;
    double delta= (B*B)-(4*(A*C));
    double raiz = sqrt(delta);
    double div=  2*A;
    
    
    if(delta<0){
         cout << "impossível calcular " << endl;
    }
    else if(A==0){
         cout << "impossível calcular " << endl;
    }
    else{
        double BHASKARA2=(-(B)-raiz)/div; 
        double BHASKARA1=(-(B)+raiz)/div; 
        cout<<fixed<<setprecision(5)<<endl;
        cout<<"R1= "<<BHASKARA1<<endl;
        cout<<"R2= "<<BHASKARA2<<endl;
    }
}

//oi
