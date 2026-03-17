t = int(input())

for _ in range(t):
    s = input()

    if s == "P=NP":
        print("skipped")
    else:
        a, b = s.split("+")
        print(int(a) + int(b))