leaves = 11
water = 1
daily_weather = ["Sunny", "Cloudy", "Sunny"]

for day in daily_weather:
    if day == "Sunny":
        light = 2
    else:
        light = 1
    leaves += light + water 
    print("leaves:", leaves)