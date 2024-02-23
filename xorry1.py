import math

t = int(input())

while t > 0:
    x = int(input())

    nearest_power_of_2 = 2 ** int(math.log2(x))

    a = x - nearest_power_of_2
    b = nearest_power_of_2

    print(a, b)
    
    t -= 1

