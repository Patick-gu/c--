#include <iostream> 
#include <math.h>
using namespace std;

int main(){
    double A;
    double B;
    double C;
    cin>>A>>B>>C;
    double regra1= B*B;
    double regra2= A*C;
    double regra3= regra2 * 4;
    double delta=  regra1-regra3;
    double raiz = sqrt(delta);
    double div=  2*A;
    double tratamento = -(B);
    double div1=  raiz/div;
    double resultado1 = tratamento-div1;
    double resultado2 = tratamento+div1;
    cout<<"delta igual a = "<<delta<<endl;
    cout<<"raiz= "<<raiz<<endl;
    cout<<"div= "<<div<<endl;
    cout<<"tratamento= "<<tratamento<<endl;
    cout<<"div1= "<<div1<<endl;
    cout<<"R2= "<<resultado1<<endl;
    cout<<"R2= "<<resultado2<<endl;
}