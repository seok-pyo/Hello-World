data = [('h',1), ('s', 2), ('e', 4)]
data.sort(key=lambda x: x[1], reverse=True)
print(data)

from itertools import permutations
from itertools import combinations

data = ['A', 'B', 'C']
result = list(permutations(data, 3))

print(result)

result = list(combinations(data, 2))

print(result)

from itertools import product
result = list(product(data, repeat=3))
print(result)

from itertools import combinations_with_replacement
result = list(combinations_with_replacement(data, 2))
print(result)

a = 2.8
print(round(a, 1))