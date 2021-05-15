# def binarySearch(arr, x):
#     n = len(arr)
#     i, k = n // 2, 0
#     while(i >= 1):
#         while(k + i < n and arr[k + i] <= x):
#             k += i
#         i = i // 2
#     if (arr[k] == x):
#         return k
#     return -1


# def solution(numbers, target):
#     # Type your solution here
#     numbers.sort()
#     for i in range(len(numbers) - 1):
#         idx = binarySearch(numbers[i + 1:], target - numbers[i])
#         if idx != -1:
#             print(numbers[idx])
#             return True
#     return False

# print(solution([1, 2, 3], 6))

import math
def solution(prices):
    # Type your solution here
    sumf, sumi = .0, 0
    for e in prices:
        sumf += e
        sumi += int(e)
    copy = sorted(prices, key=lambda i: i - int(i), reverse=True)
    n = sumf - sumi 
    n = int(round(n))
    copy = copy[:n]
    res = []
    count = 0
    for e in prices:
        if count < n and e in copy:
            count += 1
            res.append(int(math.ceil(e)))
        else:
            res.append(int(math.floor(e)))
    return res
    

print(solution([5.4, 3.3, 5]))
