from sys import stdin, stdout, setrecursionlimit
from threading import stack_size
from math import gcd, lcm, pow
from collections import deque
from heapq import heappop, heappush, heapify
from itertools import product, permutations
from string import ascii_letters
from bisect import bisect_right, bisect_left

inf = float("inf")
module = 1_000_000_000 + 7


def cin():
    return stdin.readline().strip()


def cout(value):
    return stdout.write(str(value))


def solve():
    pass


def main():
    stack_size(2 ** 26), setrecursionlimit(10 ** 9)
    t = 1
    while t > 0:
        solve()
        t -= 1


if __name__ == "__main__":
    main()
