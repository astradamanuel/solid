// principio Open/Closed

#include <iostream>
using namespace std;

// Clase base
class Pinguino {
public:
    virtual void actuar() = 0;  // Método que puede extenderse
    virtual ~Pinguino() {}
};

// Pingüino que actúa en aguas superficiales
class PinguinoSuperficial : public Pinguino {
public:
    void actuar() override {
        cout << "Actúo en aguas superficiales." << endl;
    }
};

// Pingüino que actúa en aguas profundas
class PinguinoProfundo : public Pinguino {
public:
    void actuar() override {
        cout << "Actúo en aguas profundas." << endl;
    }
};

// Función que usa cualquier tipo de pingüino sin modificarla
void mostrarAccion(Pinguino* p) {
    p->actuar();
}

int main() {
    PinguinoSuperficial superficial;
    PinguinoProfundo profundo;

    mostrarAccion(&superficial); // ✅ "Actúo en aguas superficiales."
    mostrarAccion(&profundo);    // ✅ "Actúo en aguas profundas."

    return 0;
}
