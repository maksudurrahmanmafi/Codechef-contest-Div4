n = int(input())
arr = list(map(int, input().split()))

pairs = []

for i in range(n):
    pairs.append((arr[i], i + 1))  # (Ti, index)

pairs.sort()

print(pairs[0][1])