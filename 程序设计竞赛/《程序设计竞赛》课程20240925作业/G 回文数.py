n, m = map(int, input().split())


def convert_to_base(x, b):
    result = []
    while x:
        result.append(x % b)
        x //= b
    return ''.join(map(str, result[::-1])) or '0'


def convert_from_base(s, b):
    return int(s, b)


def reverse_str(s):
    return s[::-1]


step = 0
num = str(m)

while step <= 30:
    if num == reverse_str(num):
        print(step)
        break
    num = convert_to_base(convert_from_base(num, n) + convert_from_base(reverse_str(num), n), n)
    step += 1
else:
    print("Impossible!")
