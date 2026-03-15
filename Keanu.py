a = int(input())
b = a * a

if a % 2 == 0:
    # যদি n জোড় হয়
    res = b // 2
    print(f"{res} casas brancas e {res} casas pretas")
else:
    # যদি n বিজোড় হয়
    white = (b // 2) + 1
    black = b // 2
    print(f"{white} casas brancas e {black} casas pretas")