leaves = 44
daily_music = ["jazz", "pop", "none", "jazz", "classical"]

for music in daily_music:
    if music == "classical":
        leaves += 4

    print("Leaves:", leaves, "Music:", music)