leaves = 19
daily_pests = [5, 7, 9, 8, 6]
print("Daily pests:", end = " ")

for pests in daily_pests:
    if pests <= leaves:
        leaves -= pests
    else:
        leaves = 0 
print("Leaves:", leaves)