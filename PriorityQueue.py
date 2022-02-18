import sys
import heapq

input = sys.stdin.readline
#### 우선순위 큐 라이브러리를 활용한 힙 정렬 구현 예제(python)
#오름차순 & 내림차순
def heapsort(iterable, n): 
    h = []
    result = []
    # 모든 원소를 차례대로 힙에 담기
    # n의 부호에 따라 오름차순 또는 내림차순으로 정렬
    for value in iterable:
        heapq.heappush(h, (n) * value)
    # 힙에 담은 모든 원소를 차례대로 꺼내어 담기
    for i in range(len(h)):
        result.append((n) * heapq.heappop(h))
    return result

print("Size")
n = int(input()) # 배열의 크기
print("Type asc(1) or dsc(-1)")
s = int(input()) # 부호로 오름/내림차순을 정한다.
arr = []

for i in range(n):
    arr.append(int(input())) # n개 배열에 숫자를 순서대로 담기

res = heapsort(arr, s)

for i in range(n):
    print(res[i])



# Ref. 이것이 취업을 위한 코딩 테스트다 with 파이썬, YOUTUBE[동빈나], https://programmer-ririhan.tistory.com/138
