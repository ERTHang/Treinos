n, k = map(int, input().split())
frutas = list(map(int, input().split()))
dias = list(input().split())
total = 0
for dia in dias:
    if dia == 'C':
        for i in range(len(frutas)):
            if frutas[i] != 0:
                frutas[i] += 1
                total += frutas[i]

    elif dia == 'E':
        for i in range(len(frutas)):
            if frutas[i] != 0:
                frutas[i] -= 1
                total += frutas[i]

print(total)
