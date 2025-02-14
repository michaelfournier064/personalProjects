leaves = 36
daily_temps = [9, 14, 16, 25, 35, 27, 20]

for temp in daily_temps:
    if temp < 10:
        leaves -=2
    elif temp > 30:
        leaves -= 3
    elif 10 < temp < 20:
        leaves += 2
    else:
        leaves += 3
    
    print(leaves, end = " ")