# Principio de Inversión de Dependencias (Dependency Inversion Principle)

# “Los módulos de alto nivel no deben depender de módulos de bajo nivel. 
# Ambos deben depender de abstracciones"

from abc import ABC, abstractmethod

# Abstracción
class HerramientaPesca(ABC):
    @abstractmethod
    def usar(self):
        pass

# Implementaciones concretas
class Red(HerramientaPesca):
    def usar(self):
        print("Pescando con una red.")

class Pico(HerramientaPesca):
    def usar(self):
        print("Pescando con el pico.")

# Módulo de alto nivel depende de la abstracción, no de implementaciones concretas
class Pinguino:
    def __init__(self, herramienta: HerramientaPesca):
        self.herramienta = herramienta

    def pescar(self):
        self.herramienta.usar()

# Uso
p1 = Pinguino(Red())
p2 = Pinguino(Pico())

p1.pescar()  # ✅ Pescando con una red.
p2.pescar()  # ✅ Pescando con el pico.
