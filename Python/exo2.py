x = int(input("Nombre 1 : "))
y = int(input("Nombre 2 : "))

print(f"Le nombre 1 vaut {x} et le nombre 2 vaut {y}")
x, y = y, x
print(f"Le nombre 1 vaut {x} et le nombre 2 vaut {y}")