leaves = 19
daily_pests = [5, 7, 9, 8, 6]
birds = 5

for pests in daily_pests:
    if (2 * birds ) <= pests:
        pests_alive = pests - (2 * birds)
    else:
        pests_alive = 0

    if pests_alive <= leaves:
        leaves -= pests_alive
    else:
        leaves = 0
print("Leaves:", leaves)
