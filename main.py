from sys import stdin, stdout, setrecursionlimit
from threading import stack_size
from math import gcd, lcm, pow
from collections import deque
from heapq import heappop, heappush, heapify
from itertools import product, permutations
from string import ascii_letters, ascii_lowercase, ascii_uppercase
from bisect import bisect_right, bisect_left

INF = float("inf")
MOD = 1_000_000_007
MOD_ = 1_000_000_009
BASE = 911382323
BASE_ = 972663749
EPS = 1e-9


def cin():
    return stdin.readline().strip()


def cout(value):
    return stdout.write(str(value))


def solve():
    pass


def main():
    stack_size(2 ** 23), setrecursionlimit(10 ** 9)
    t = 1
    # t = int(input())
    while t > 0:
        solve()
        t -= 1


if __name__ == "__main__":
    main()
