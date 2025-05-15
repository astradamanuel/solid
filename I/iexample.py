# Interface Segregation Principle

# Una clase no debe estar forzada a implementar interfaces que no usa.

from abc import ABC, abstractmethod

# Interfaces pequeñas y específicas
class PuedePescar(ABC):
    @abstractmethod
    def pescar(self):
        pass

class PuedeConstruirNido(ABC):
    @abstractmethod
    def construir_nido(self):
        pass

class PuedeCuidarHuevo(ABC):
    @abstractmethod
    def cuidar_huevo(self):
        pass

# Solo implementa lo que necesita
class PinguinoPescador(PuedePescar):
    def pescar(self):
        print("Pescando peces.")

class PinguinoNiñera(PuedeCuidarHuevo):
    def cuidar_huevo(self):
        print("Cuidando el huevo.")

class PinguinoArquitecto(PuedeConstruirNido):
    def construir_nido(self):
        print("Construyendo nido.")
