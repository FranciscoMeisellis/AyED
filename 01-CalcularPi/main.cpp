#include <iostream>
#include <iomanip>
using namespace std;

double calcularpi () {
    double suma_rest=0.0;
    double denominador=1.0;
    int signo=1.0;
    int cont=0;
    while (cont<=1000000)
    {
        cont++;
        suma_rest+=signo/denominador;
        denominador+=2;
        signo*=-1;
    }
    return suma_rest*4;
}
int main(){
double valorpi=0;
valorpi=calcularpi();
cout << setprecision(7);
cout << " pi con precision 6: " << valorpi << endl;
return 0;
}