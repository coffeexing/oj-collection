# 使用一个全局数组来存储中间结果
path = [0] * 105

def bee_path(x, y):
    if path[x] != 0:
        return path[x]
    if x == y:
        return 1
    elif x > y:
        return 0
    # 递归调用，并将结果存储在 path[x] 中，避免重复计算
    path[x] = bee_path(x + 1, y) + bee_path(x + 2, y)
    return path[x]

if __name__ == "__main__":
    M, N = map(int, input().split())
    print(bee_path(M, N))
