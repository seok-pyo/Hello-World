import random

def your_code(n, m, k, array):
    array.sort(reverse=True)
    f = array[0]
    s = array[1]
    result = 0
    for i in range(1, m + 1):
        result += f if i % (k + 1) != 0 else s
    return result

def correct_code(n, m, k, array):
    array.sort(reverse=True)
    f = array[0]
    s = array[1]
    count = (m // (k + 1)) * k + (m % (k + 1))
    return f * count + s * (m - count)

# 반례 자동 탐색
for test_num in range(1, 1000):
    n = 2
    m = random.randint(1, 50)
    k = random.randint(1, 10)
    f = random.randint(1, 100)
    s = random.randint(1, f)  # s ≤ f

    array = [f, s]

    yours = your_code(n, m, k, array[:])
    correct = correct_code(n, m, k, array[:])

    if yours != correct:
        print(f"❌ 반례 발견! (Test #{test_num})")
        print(f"n = {n}, m = {m}, k = {k}, array = {array}")
        print(f"당신의 결과: {yours}, 정답: {correct}")
        break
else:
    print("✅ 1000개의 테스트에서 모두 정답입니다.")
