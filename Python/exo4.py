import csv

file = open("exo4.csv", "a")
modele = "206"
plaque = "CO-VID-19"

writer = csv.writer(file)
writer.writerow((modele, plaque))

file.close()