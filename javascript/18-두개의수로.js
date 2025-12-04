const arr = [1, 2, 3, 4, 8];

function solution(arr, target) {
  const sub = new Set();

  for (let i = 0; i < arr.length; i++) {
    if (sub.has(target - arr[i])) return 'True';
    else sub.add(arr[i]);
  }

  return 'False';
}
