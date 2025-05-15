// Principio de Inversión de Dependencias (Dependency Inversion Principle)

// Los módulos de alto nivel no deben depender de módulos de bajo nivel. 
// Ambos deben depender de abstracciones.

#include <iostream>
using namespace std;

// Abstracción
class HerramientaPesca {
public:
    virtual void usar() = 0;
    virtual ~HerramientaPesca() {}
};

// Implementaciones
class Red : public HerramientaPesca {
public:
    void usar() override {
        cout << "Pescando con una red." << endl;
    }
};

class Pico : public HerramientaPesca {
public:
    void usar() override {
        cout << "Pescando con el pico." << endl;
    }
};

// Módulo de alto nivel
class Pinguino {
private:
    HerramientaPesca* herramienta;
public:
    Pinguino(HerramientaPesca* h) : herramienta(h) {}

    void pescar() {
        herramienta->usar();
    }
};

int main() {
    Red red;
    Pico pico;

    Pinguino p1(&red);
    Pinguino p2(&pico);

    p1.pescar();  // ✅ Pescando con una red.
    p2.pescar();  // ✅ Pescando con el pico.

    return 0;
}
