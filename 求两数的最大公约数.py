#错误格式
"""def gcd(m, n):
    if abs(m) < abs(n):
        return None   #辗转相除法可以处理这种情况！ 但如果return None , 会导致无法处理
    else:
        if n == 0:
            return m
        while n > 0:
            m = n
            n = m % n  #由于程序的先后运行顺序，会导致m被赋值为n. 而 n = m % n 默认为 0， 从而导致逻辑错误
        return m"""

#正确格式
def gcd(m, n):
    m, n = abs(m), abs(n)  # 取绝对值保证正数运算
    while n != 0:
        m, n = n, m % n#保证了不会混淆调用的值!这里用了 Python 多重赋值
    return m

print(gcd(21, 7))  # 输出 7
print(gcd(7, 21))  # 输出 7
print(gcd(-42, 56)) # 输出 14
print(gcd(100,0))