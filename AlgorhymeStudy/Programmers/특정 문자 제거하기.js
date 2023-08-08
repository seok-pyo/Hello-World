function solution(my_string, letter) {
  let reg = new RegExp(letter, "g");
  return my_string.replace(reg, "");
}

// 정규표현식
my_string.replaceAll("B", "");

my_string.replace(/B/g, "");
my_string.replace(/[123]/g, "");
my_string.replace(/[1-9]/g, "");
my_string.replace(/[A-Z]/g, "");
my_string.replace(/[a-z]/g, "");
