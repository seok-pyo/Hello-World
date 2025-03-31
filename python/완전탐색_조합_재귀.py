# def combi(arr, r):
#   result = []
#   n = len(arr)

#   indices = list(range(r))

#   while True:
#     result.append([arr[i] for i in indices])

#     increasding_index = None

#     for i in reversed(range(r)):
#       if indices[i] != i + n - r:
