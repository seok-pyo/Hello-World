let list = ["a1", "a2", "a3", "a4", "b1", "b2", "b3", "b4"];
const zip = (a, b) => a.map((v, i) => [v, b[i]]);
let l1 = list.slice(0, list.lenght / 2);
let l2 = list.slice(list.length / 2);
zip(l1, l2).flat(2);

// swap 풀이
// 방식 1) temp 저장
const arr = [10, 20, 30, 40, 50, 60];
temp = arr[0];
arr[0] = arr[1];
arr[1] = temp;
// 방식 2) swap
[(arr[1], arr[3])] = [arr[3], arr[1]]; [10, 40, 30, 20, 50, 60];
[(arr[2], arr[3])] = [arr[3], arr[2]]; [10, 40, 20, 30, 50, 60];
[(arr[3], arr[4])] = [arr[4], arr[3]]; [10, 40, 20, 50, 30, 60];

[(arr[i], arr[arr.length/2])] = [arr[arr.length/2], arr[i]]; [10, 40, 30, 20, 50, 60];
[(arr[i+1], arr[arr.length/2])] = [arr[arr.length/2], arr[i+1]]; [10, 40, 20, 30, 50, 60];
[(arr[i+2], arr[arr.length/2+1])] = [arr[arr.length/2+1], arr[i+2]]; [10, 40, 20, 50, 30, 60];

const arr = [10, 20, 30, 40, 50, 60, 70, 80];
[(arr[1], arr[4])] = [arr[4], arr[1]]; [10, 50, 30, 40, 20, 60, 70, 80];
[(arr[3], arr[6])] = [arr[6], arr[3]]; [10, 50, 30, 70, 20, 60, 40, 80];

//for(let i = 1; i < arr.length/2; i)

[(arr[2], arr[4])] = [arr[4], arr[2]]; [10, 50, 20, 70, 30, 60, 40, 80];
[(arr[3], arr[5])] = [arr[5], arr[3]]; [10, 50, 20, 70, 30, 60, 40, 80];


[(arr[2], arr[4])] = [arr[4], arr[2]]; [10, 50, 20, 40, 30, 60, 70, 80];
[(arr[3], arr[5])] = [arr[5], arr[3]]; [10, 50, 20, 60, 30, 40, 70, 80];
[(arr[5], arr[6])] = [arr[6], arr[5]]; [10, 50, 20, 60, 30, 70, 40, 80];