# import time

# start1 = time.time()
# data1 = [0 for _ in range(1000)]
# end1 = time.time()
# print("리스트 컴프리헨션 시간:", end1 - start1)

# start2 = time.time()
# data2 = [0] * 1000
# end2 = time.time()
# print("곱셈 연산 시간:", end2 - start2)

data = [[(0,1),(2,3),(4,5)],[(6,7),(8,9),(0,1)]]
print(data[1:][0][::2])
