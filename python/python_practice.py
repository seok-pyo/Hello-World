# 퀵정렬
# 파이썬 자료형
# 수자료, 리스트, 문자, 튜플, 딕셔너리, 집합
# 수자료 > 정수/실수 > 실수는 이진수로 표현하는데 한계가 있어 오차가 발생한다.
a = 1000
a = -1
a = 0
a = 157.93
a = -1495.4
a = 5.
a = -.7

a = 1e9
a = 75.25e1
a = 3954e-3

a = 0.3 + 0.6

# print(round(a, 4))

# 리스트 > 배열, []로 생성, list()로 생성 가능, 리스트 인덱싱, 슬라이싱, 리스트 컴프리헨션, 리스트 메서드(append, insert, remove, count, max, reverse)
a = list()

n = 10
a = [0] * n

a = [1,2,3,4,5,6,7,8,9]
print(a[-1])
print(a[-3])
a[3] = 7
print(a)

print(a[1:4])

array = [i for i in range(1, 10)]
# print(array)

n = 3
m = 4
array = [[0] * n for _ in range(m)]
print(array)

a = [1,4,3]
print("기본 리스트", a)

# 리스트에 원소 삽입
a.append(2)
print("삽입: ", a)

# 오름차순 정렬
a.sort()
print("오름차순 정렬: ", a)

# 내림차순 정렬
a.sort(reverse=True)
print("내림차순 정렬: ", a)

# 리스트 원소 뒤집기
a.reverse()
print("원소 뒤집기: ", a)

# 특정 인덱스에 데이터 추가
a.insert(2,3)
print("인덱스 2에 3 추가: ", a)

# 특정 값인 데이터 개수 세기
print("값이 3인 데이터 개수: ", a.count(3))

# 특정 값 데이터 삭제
a.remove(1)
print("값이 1인 데이터 삭제: ", a)

# 특정 원소 모두 삭제하기
a = [1,2,3,4,5,5,5]
remove_set = {3,5}

result = [i for i in a if i not in remove_set]
print(result)

# 문자형 > 문자형도 in 메서드 사용 가능, 문자열 더하기 가능
data = "Hello, world!"
print(data)

data = "Don't you know \"Python\"?"
print(data)

a = "String"
print(a * 3)

# 튜플 > 한번 정해지면 값을 재할당 할 수 없다. ()로 초기화, in 메서드 사용 가능
a = (1,2,3,4)
print(a)
print(a[2])

# 딕셔너리 > 키, 밸류로 이루어진 자료형 / dict()으로 초기화 / keys, values 메서드 / in 메서드 사용 가능 /
data = dict()
data['사과'] = 'Apple'
data['바나나'] = 'Banana'
data['코코넛'] = 'Coconut'

print(data)

if '사과' in data:
  print('Yes')

print(data.keys())
print(data.values())

# 집합 > set({배열}) 으로 초기화 / {} / 합집합, 교집합, 차집합 메서드 가능 / add, update, remove 함수 존재
data= set([1,2,3,4,4,4,5])
print(data)

a = set([1,2,3,4,5])
b = set([3,4,5,6,7])

print(a | b)
print(a & b)
print(b - a)

data = set([1,2,3])
print(data)
data.add(4)
print(data)

data.update([5,6])
print(data)

data.remove(3)
print(data)

# 함수 밖에 있는 변수를 사용할 때는 global 키워드를 사용 > 지역 변수를 만들지 않고 함수 바깥에 있는 변수를 참조하게 된다.
a = 0

def func():
  global a
  a += 1

for i in range(10):
  func()

print(a)

# 람다 표현식
print((lambda a,b: a+b)(3, 5))

# 입출력 메서드 input()을 사용한다.
# 각 데이터를 공백으로 구분하여 입력
n = int(input())

data = list(map(int, input().split()))

data.sort(reverse=True)
print(data)

# n, m, k를 공배으로 구분하여 입력
n, m ,k = map(int, input().split())

print(n, m, k)

# 입력 효율이 좋은 라이브러리
import sys
sys.stdin.readline().rstrip()

