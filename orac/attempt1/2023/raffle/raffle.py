inputFile = open("rafflein.txt", "r")
outputFile = open("raffleout.txt", "w")

firstLine = inputFile.readline()

numCompetitors = int(firstLine.split(" ")[0])
maxNumber = int(firstLine.split(" ")[1])

secondLine = inputFile.readline().split()

raffle = [0] * maxNumber

for num in secondLine:
  raffle[int(num) - 1] += 1

for i in range(len(raffle)):
  if raffle[i] == 1:
    line = str(i + 1)
    outputFile.write(line)
    exit()

outputFile.write("-1")