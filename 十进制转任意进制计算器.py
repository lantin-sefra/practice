def process_10(source, bottom_number):
    if source == 0:
        return 0
    is_negative = False
    if source < 0:
        is_negative = True
        source = -source 
    digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    remainder_list =[]
    while source > 0:
        remainder = source % bottom_number
        source = source // bottom_number
        remainder_list.append(digits[remainder])
    result = str(remainder_list[::-1])
    return  "-" + result if is_negative else result
print(process_10(686,16))