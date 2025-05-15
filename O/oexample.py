# principio Open/Closed

from abc import ABC, abstractmethod

# Clase base abstracta
class Pinguino(ABC):
    @abstractmethod
    def actuar(self):
        pass

# Pingüino que actúa en aguas superficiales
class PinguinoSuperficial(Pinguino):
    def actuar(self):
        print("Actúo en aguas superficiales.")

# Pingüino que actúa en aguas profundas
class PinguinoProfundo(Pinguino):
    def actuar(self):
        print("Actúo en aguas profundas.")

# Nueva clase sin modificar nada anterior
class PinguinoMixto(Pinguino):
    def actuar(self):
        print("Actúo en aguas superficiales.")
        print("Actúo en aguas profundas.")

# Función que puede trabajar con cualquier tipo de pingüino
def mostrar_accion(pinguino: Pinguino):
    pinguino.actuar()

# Ejemplo de uso
ping1 = PinguinoSuperficial()
ping2 = PinguinoProfundo()
ping3 = PinguinoMixto()

mostrar_accion(ping1)  # ✅ "Actúo en aguas superficiales."
mostrar_accion(ping2)  # ✅ "Actúo en aguas profundas."
mostrar_accion(ping3)  # ✅ "Actúo en aguas superficiales." y "Actúo en aguas profundas."
