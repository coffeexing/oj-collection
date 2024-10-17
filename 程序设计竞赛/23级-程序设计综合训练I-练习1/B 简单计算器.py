while True:
    expression = input()
    if expression == "0":
        break
    result = eval(expression)
    print(f"{result:.2f}")
