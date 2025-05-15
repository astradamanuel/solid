// SRP (Single Responsibility Principle) con ejemplo de PINGUINOS en C++
// Separando, cada clase tiene una responsabilidad 

#include <iostream>
using namespace std;

// Clase con única responsabilidad: pescar
class Pescador {
public:
    void pescar() {
        cout << "Estoy pescando peces." << endl;
    }
};

// Clase con única responsabilidad: construir nido
class ConstructorDeNidos {
public:
    void construirNido() {
        cout << "Estoy construyendo un nido." << endl;
    }
};

// Pingüino común: pesca y construye nido
class PinguinoComun {
private:
    Pescador pescador;
    ConstructorDeNidos constructor;

public:
    void pescar() {
        pescador.pescar();
    }

    void construirNido() {
        constructor.construirNido();
    }
};

// Pingüino cazador: solo pesca
class PinguinoCazador {
private:
    Pescador pescador;

public:
    void pescar() {
        pescador.pescar();
    }
};

int main() {
    PinguinoComun p1;
    p1.pescar();           // Output: Estoy pescando peces.
    p1.construirNido();    // Output: Estoy construyendo un nido.

    PinguinoCazador p2;
    p2.pescar();           // Output: Estoy pescando peces.
    // p2.construirNido(); // ❌ No compila: no tiene ese método

    return 0;
}
