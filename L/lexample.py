#  Liskov Substitution Principle

# Si una subclase no implementara correctamente alguno de esos métodos, rompería este principio.



class Pinguino:
    def caminar(self):
        print("Caminando sobre la nieve.")
    
    def deslizarse(self):
        print("Deslizándose sobre el hielo.")

class PinguinoAdulto(Pinguino):
    pass  # No cambia nada, es un pingüino que hace todo lo que el base hace

class PinguinoJoven(Pinguino):
    pass  # También sabe caminar y deslizarse

# Función que espera un objeto tipo Pinguino
def mover_pinguino(p: Pinguino):
    p.caminar()
    p.deslizarse()

# Uso
adulto = PinguinoAdulto()
joven = PinguinoJoven()

mover_pinguino(adulto)  # ✅ Funciona
mover_pinguino(joven)   # ✅ También funciona sin romper nada
