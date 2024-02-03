from sys import stdin, stdout
from math import gcd, lcm, pow
from collections import deque
from heapq import heappop, heappush, heapify
from itertools import product, permutations
from bisect import bisect_right, bisect_left, insort_right, insort_left


inf = float("inf")
module = pow(10, 9) + 7


def solve():
    # input
    name = stdin.readline().strip()
    # output
    stdout.write(f"Hello World, {name}.")


def main():
    t = 1
    while t > 0:
        solve()
        t -= 1


if __name__ == "__main__":
    main()
