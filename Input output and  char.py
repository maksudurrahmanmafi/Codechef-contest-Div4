import sys

def solve():
    # সব ইনপুট একসাথে পড়ে স্প্লিট করা
    input_data = sys.stdin.read().split()
    
    # প্রতি ৩টি ক্যারেক্টার নিয়ে একটি সেট প্রসেস করা
    for i in range(0, len(input_data), 3):
        if i + 2 < len(input_data):
            a = input_data[i]
            b = input_data[i+1]
            c = input_data[i+2]
            
            # আউটপুট ফরম্যাট
            print(f"A = {a}, B = {b}, C = {c}")
            print(f"A = {b}, B = {c}, C = {a}")
            print(f"A = {c}, B = {a}, C = {b}")

if __name__ == "__main__":
    solve()