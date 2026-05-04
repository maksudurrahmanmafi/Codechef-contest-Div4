import sys

for line in sys.stdin:
    t = int(line.strip())
    ch = chr(ord('a') + (t - 1))
    print(ch)