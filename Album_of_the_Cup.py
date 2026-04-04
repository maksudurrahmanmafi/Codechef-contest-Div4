
n = int(input())

m = int(input())

purchased_cards = set()
for _ in range(m):
    card = int(input())
    purchased_cards.add(card)


missing_cards = n - len(purchased_cards)

print(missing_cards)