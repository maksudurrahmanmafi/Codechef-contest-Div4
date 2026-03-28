import sys


E, F, C = map(int, sys.stdin.readline().split())

total_bottles = E + F
total_drunk = 0
while total_bottles >= C:
    new_sodas = total_bottles // C  # পূর্ণসংখ্যা ভাগ
    total_drunk += new_sodas
    total_bottles = new_sodas + (total_bottles % C)

print(total_drunk)