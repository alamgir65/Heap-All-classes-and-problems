import math
from fractions import Fraction

def fun(a, b, c):
    s = (a + b + c) / 2.0
    area = math.sqrt(s * (s - a) * (s - b) * (s - c))
    r = area / s
    return r * r
def main():
    t = int(input())
    for _ in range(t):
        x, y, z = map(float, input().split())
        result = fun(x,y,z)

        frac = Fraction(result).limit_denominator()
        print(f"{frac.numerator}/{frac.denominator}")

if __name__ == "__main__":
    main()