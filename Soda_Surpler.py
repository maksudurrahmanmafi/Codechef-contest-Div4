import sys

# এক লাইনে E, F, এবং C ইনপুট নেওয়া
# map(int, ...) প্রতিটি ইনপুটকে ইন্টিজারে রূপান্তর করবে
E, F, C = map(int, sys.stdin.readline().split())

total_bottles = E + F
total_drunk = 0

# লজিক অনুযায়ী লুপ চালানো
while total_bottles >= C:
    new_sodas = total_bottles // C  # পূর্ণসংখ্যা ভাগ
    total_drunk += new_sodas
    
    # নতুন খালি বোতল + অবশিষ্ট বোতল
    total_bottles = new_sodas + (total_bottles % C)

print(total_drunk)