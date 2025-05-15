//  Liskov Substitution Principle

// Si una subclase no implementara correctamente alguno de esos métodos, rompería este principio.


#include <iostream>
using namespace std;

class Pinguino {
public:
    virtual void caminar() {
        cout << "Caminando sobre la nieve." << endl;
    }
    virtual void deslizarse() {
        cout << "Deslizándose sobre el hielo." << endl;
    }
    virtual ~Pinguino() {}
};

class PinguinoAdulto : public Pinguino {
    // Hereda todo igual
};

class PinguinoJoven : public Pinguino {
    // También hereda todo igual
};

void moverPinguino(Pinguino* p) {
    p->caminar();
    p->deslizarse();
}

int main() {
    PinguinoAdulto adulto;
    PinguinoJoven joven;

    moverPinguino(&adulto);  // ✅ Funciona correctamente
    moverPinguino(&joven);   // ✅ También funciona correctamente

    return 0;
}
