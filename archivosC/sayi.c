#include <iostream> 
#include <vector>
#include <iomanip>
#include <cmath> 
using namespace std;

// ------------ MUESTRA UN POLINOMIO --------------------
void mostrarPolinomio(const vector<long long>& P) {
    bool primero = true;

    for (int i = P.size() - 1; i >= 0; i--) {
        if (P[i] == 0) continue;

        if (!primero) {
            cout << ((P[i] > 0) ? " + " : " - ");
        } else {
            if (P[i] < 0) cout << "-";
            primero = false;
        }

        long long absCoef = llabs(P[i]);

        if (i == 0) cout << absCoef;
        else if (i == 1) cout << absCoef << "x";
        else cout << absCoef << "x^" << i;
    }

    if (primero)
        cout << "0";

    cout << endl;
}

// ------------ MULTIPLICACIÓN DE POLINOMIOS -------------
vector<long long> multiplicar(const vector<long long>& A, const vector<long long>& B) {
    vector<long long> C(A.size() + B.size() - 1, 0);

    for (int i = 0; i < A.size(); i++)
        for (int j = 0; j < B.size(); j++)
            C[i + j] += A[i] * B[j];

    return C;
}

// ------------ POTENCIA DE UN POLINOMIO ----------------
vector<long long> elevarPolinomio(const vector<long long>& P, int n) {
    vector<long long> resultado = {1};
    vector<long long> base = P;

    for (int i = 0; i < n; i++) {
        resultado = multiplicar(resultado, base);
    }

    return resultado;
}

// ------------ INTEGRAR UN POLINOMIO -------------------
vector<double> integrar(const vector<long long>& P) {
    vector<double> I(P.size() + 1, 0);

    for (int i = 0; i < P.size(); i++)
        I[i + 1] = (double)P[i] / (i + 1);

    return I;
}

// ------------ PROGRAMA PRINCIPAL -----------------------
int main() {

    cout << "===== MULTIPLICADOR Y ELEVADOR DE POLINOMIOS =====\n";

    int grado;
    cout << "\nIngrese el grado del polinomio: ";
    cin >> grado;

    vector<long long> P(grado + 1);

    cout << "\nIngrese coeficientes desde x^0 hasta x^" << grado << ":\n";
    for (int i = 0; i <= grado; i++) {
        cout << "Coeficiente de x^" << i << ": ";
        cin >> P[i];
    }

    int n;
    cout << "\nIngrese la potencia n a la que quiere elevar el polinomio: ";
    cin >> n;

    cout << "\nPolinomio original:\n";
    mostrarPolinomio(P);

    // Elevar sin mostrar pasos
    vector<long long> elevado = elevarPolinomio(P, n);

    cout << "\nRESULTADO FINAL DEL POLINOMIO ELEVADO A " << n << ":\n";
    mostrarPolinomio(elevado);

    // Integración opcional
    cout << "\n¿Desea integrar el resultado? (1 = sí, 0 = no): ";
    int opc;
    cin >> opc;

    if (opc == 1) {
        vector<double> integ = integrar(elevado);
        cout << "\nIntegral: ";
        bool primero = true;
        for (int i = integ.size() - 1; i >= 0; i--) {
            if (integ[i] == 0) continue;

            if (!primero)
                cout << ((integ[i] > 0) ? " + " : " - ");
            else {
                if (integ[i] < 0) cout << "-";
                primero = false;
            }

            double absCoef = fabs(integ[i]);

            if (i == 0) cout << absCoef;
            else if (i == 1) cout << absCoef << "x";
            else cout << absCoef << "x^" << i;
        }
        cout << " + C\n";
    }

    return 0;
}