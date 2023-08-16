let time = "11:05:20";

let log = `09:12:23 11:14:35
10:34:01 13:23:47
10:34:31 11:20:10`;
let t = time.split(":").join("");
let logs = log.split("\n");

let count = 0;
for (let log of logs) {
  let start = log.split(" ")[0].split(":").join("");
  let end = log.split(" ")[1].split(":").join("");
  if (start < t < end) {
    count += 1;
  }
}
