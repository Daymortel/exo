import csv

# on ouvre le fichier .csv
file = open("exo4.csv", "a")
# on indique ce que l'on veut écrire
modele = "206"
plaque = "CO-VID-19"

# ça écrit
writer = csv.writer(file)
writer.writerow((modele, plaque))

# on ferme le fichier .csv
file.close()