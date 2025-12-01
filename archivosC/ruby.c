#include <iostream>
#include <vector>
using namespace std;

struct Termino {
    int pos;       // posición
    float coef;    // coeficiente
    int exp;       // exponente
};

// Mostrar en pantalla
void mostrarPolinomio(const vector<Termino>& P) {
    for (size_t i = 0; i < P.size(); i++) {
        cout << P[i].coef << "x^" << P[i].exp;
        if (i < P.size() - 1) cout << " + ";
    }
    cout << endl;
}

// Multiplicación de polinomios
vector<Termino> multiplicar(const vector<Termino>& A, const vector<Termino>& B) {
    vector<Termino> resultado;
    
    for (const auto& t1 : A) {
        for (const auto& t2 : B) {
            resultado.push_back({t1.pos, t1.coef * t2.coef, t1.exp + t2.exp});
        }
    }
    return resultado;
}

int main() {
    int numPoli;
    int pos;        
    float coef;    
    int exp;        
    
    cout << "Ingrese cúantos polinomios desea multiplicar: ";
    cin >> numPoli;

    vector<vector<Termino>> polinomios(numPoli);

    // Ingresar de polinomios
    for (int i = 0; i < numPoli; i++) {
        int numTerminos;
        cout << "Señale cuántos terminos tiene el Polinomio " << (i + 1)<<": ";
        cin >> numTerminos;
        
        cout << "Ingrese el polinomio según ('posición' 'coeficiente' 'exponente'):\n";
        for (int j = 0; j < numTerminos; j++) {
            cout << "Término " << (j + 1) << ": ";
            cin >> pos >> coef >> exp;
            polinomios[i].push_back({pos, coef, exp});
        }
        
        mostrarPolinomio(polinomios[i]);
    }

    // Multiplicación de todos los polinomios
    vector<Termino> resultado = polinomios[0];
    for (int i = 1; i < numPoli; i++) {
        resultado = multiplicar(resultado, polinomios[i]);
    }

    cout << "Resultado: ";
    mostrarPolinomio(resultado);

    return 0;
}