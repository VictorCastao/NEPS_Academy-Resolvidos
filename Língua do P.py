frase = input()
tamanho = len(frase)
i = 0
while True:
    if i >= tamanho:
        break
    if frase[i] == 'p':
        print(frase[i+1], end='')
        i += 2
    else:
        print(frase[i], end='')
        i += 1



