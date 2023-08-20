s = [1, 3, 4, 8, 13, 17, 20];
index = 0;
minim = Infinity;
for (let i = 1; i < s.length; i++) {
  if (s[i] - s[i - 1] < min) {
    index = i;
    minim = s[i] - s[i - 1];
  }
}

// 2개로 그룹핑해서 푸는 방법
s = [1, 3, 4, 8, 13, 17, 20];
ss = s.slice(1);
s.map((v, i) => [v, ss[i]]).sort((a, b) => a[1] - a[0] - (b[1] - b[0]))[0];
