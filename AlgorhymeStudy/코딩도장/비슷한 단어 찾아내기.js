function OneEditApart(a, b) {
  while (a.length != 0 && b.length != 0) {
    if (a.slice(-1) == b.slice(-1)) {
      a = a.slice(0, -1);
      a = a.slice(0, -1);
    } else if (a[0] == b[0]) {
      a = a.slice(1);
      b = b.slice(1);
    } else {
      break;
    }
  }
  return a.length <= 1 && b.length <= 1;
}
