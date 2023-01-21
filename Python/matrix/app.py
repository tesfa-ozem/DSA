next_arr = None
count = 0
next_digit = 0
arr = [12, 8]
class_room = []
for i in range(arr[:1][0] // 2):
    try:
        next_digit += 1
        class_room.append([next_digit, next_digit + 1])
        next_digit += 1
        print(class_room)
    except:
        pass


for i in range(arr[:1][0]//2):
    if class_room[i][0] not in arr[1:] and class_room[i][1] not in arr[1:]:
        count += 1
    try:
        if class_room[i][0] not in arr[1:] and class_room[i + 1][0] not in arr[1:]:
            count += 1
    except:
        pass

    try:
        if class_room[i][1] not in arr[1:] and class_room[i + 1][1] not in arr[1:]:
            count += 1
    except:
        pass

print(count)
