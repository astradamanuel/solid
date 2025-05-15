// Interface Segregation Principle

// Una clase no debe estar forzada a implementar interfaces que no usa.

#include <iostream>
using namespace std;

// Interfaces pequeñas
class PuedePescar {
public:
    virtual void pescar() = 0;
    virtual ~PuedePescar() {}
};

class PuedeConstruir {
public:
    virtual void construirNido() = 0;
    virtual ~PuedeConstruir() {}
};

class PuedeCuidar {
public:
    virtual void cuidarHuevo() = 0;
    virtual ~PuedeCuidar() {}
};

// Pingüino que solo pesca
class PinguinoPescador : public PuedePescar {
public:
    void pescar() override {
        cout << "Pescando peces." << endl;
    }
};
