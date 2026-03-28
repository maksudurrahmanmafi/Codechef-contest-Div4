import sys

def solve():
    input_data = sys.stdin.read().split()
    if not input_data:
        return

    curupira = int(input_data[0])
    boitata = int(input_data[1])
    boto = int(input_data[2])
    mapinguari = int(input_data[3])
    iara = int(input_data[4])

    total = (curupira * 300) + (boitata * 1500) + (boto * 600) + (mapinguari * 1000) + (iara * 150) + 225
    print(total)

if __name__ == "__main__":
    solve()