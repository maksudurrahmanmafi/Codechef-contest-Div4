n = int(input())

bonecos = 0
arquitetos = 0
musicos = 0
desenhistas = 0

for _ in range(n):
    name, group, h = input().split()
    h = int(h)

    if group == "bonecos":
        bonecos += h
    elif group == "arquitetos":
        arquitetos += h
    elif group == "musicos":
        musicos += h
    elif group == "desenhistas":
        desenhistas += h

total = (bonecos // 8) + (arquitetos // 4) + (musicos // 6) + (desenhistas // 12)

print(total)