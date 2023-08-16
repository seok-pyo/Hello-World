let room = Array.fill(-1);
for (let i = 1; i < 121; i++) {
  for (let n = 1; n < 121; n++) {
    if (n % i == 0) {
      room[n - 1] *= -1;
    }
  }
}
