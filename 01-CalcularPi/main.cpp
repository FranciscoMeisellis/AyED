#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double pi = 0.0, antsum=0.0;
    const double num = 0.0000001;  // Precisión requerida para los 6 primeros decimales
    double term = 1.0;
    int sign = 1;
    int iteracion = 0;

    do {
        //pi += sign * term;
        antsum=pi;
        pi += (4.0 / term) * sign;
        sign *= -1;
        term += 2;
        iteracion++;
    } while (fabs(pi - antsum) > num);

    //cout << "Valor de pi calculado: " << pi << endl;
    cout << "Número de iteraciones: " << iteracion << endl;
    cout << "Valor de pi calculado: " << setprecision(7) << trunc(pi*1000000)/1000000 << endl;
    return 0;
}