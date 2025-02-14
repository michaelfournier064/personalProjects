leaves = 29
print("Leaves:", leaves, end = " ")
daily_rain = [0, 0, 0, 1, 1, 2, 5]

for rain in daily_rain:
    if rain < 1:
        leaves -= 1
    elif rain > 4:
        leaves -=2
    else:
        leaves += 4
    print(leaves, end = " ")
