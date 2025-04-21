a = [1,2,3,4,5,5,5]
remove_set = {3,5}

result = [i for i in a if i not in remove_set]
print(result)

data = dict()
data['사과'] = 'apple'
data['바나나'] = 'banana'
data['코코넛'] = 'coconut'

key_list = data.keys()
value_list = data.values()

print(key_list)
print(value_list)

for key in key_list:
  print(key)

num = ['1', '2', '3']
int_nums = list(map(int, num))
print(int_nums)