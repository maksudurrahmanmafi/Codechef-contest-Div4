p, j1, j2, r, a = map(int, input().split())

if r == 1:
    if a == 1:
        print("Jogador 2 ganha!")
    else:
        print("Jogador 1 ganha!")
else:
    if a == 1:
        print("Jogador 1 ganha!")
    else:
        s = j1 + j2
        if s % 2 == 0:  # even
            if p == 1:
                print("Jogador 1 ganha!")
            else:
                print("Jogador 2 ganha!")
        else:  # odd
            if p == 0:
                print("Jogador 1 ganha!")
            else:
                print("Jogador 2 ganha!")