# on demande le nombre 1
x = int(input("Nombre 1 : "))
# on demande le nombre 2
y = int(input("Nombre 2 : "))
# le résultat au début
print(f"Le nombre 1 vaut {x} et le nombre 2 vaut {y}")
# le calcul
x, y = y, x
# le résultat à la fin
print(f"Le nombre 1 vaut {x} et le nombre 2 vaut {y}")