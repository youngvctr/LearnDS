import sys
import heapq

input = sys.stdin.readline
#### �켱���� ť ���̺귯���� Ȱ���� �� ���� ���� ����(python)
#�������� & ��������
def heapsort(iterable, n): 
    h = []
    result = []
    # ��� ���Ҹ� ���ʴ�� ���� ���
    # n�� ��ȣ�� ���� �������� �Ǵ� ������������ ����
    for value in iterable:
        heapq.heappush(h, (n) * value)
    # ���� ���� ��� ���Ҹ� ���ʴ�� ������ ���
    for i in range(len(h)):
        result.append((n) * heapq.heappop(h))
    return result

print("Size")
n = int(input()) # �迭�� ũ��
print("Type asc(1) or dsc(-1)")
s = int(input()) # ��ȣ�� ����/���������� ���Ѵ�.
arr = []

for i in range(n):
    arr.append(int(input())) # n�� �迭�� ���ڸ� ������� ���

res = heapsort(arr, s)

for i in range(n):
    print(res[i])



# Ref. �̰��� ����� ���� �ڵ� �׽�Ʈ�� with ���̽�, YOUTUBE[����], https://programmer-ririhan.tistory.com/138
