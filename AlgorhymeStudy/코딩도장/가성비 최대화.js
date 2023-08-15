let mac_pri = 10;
let mac_per = 150;
let app_pri = 3;
let app_per = [30, 70, 15, 40, 65];
app_per.sort((a, b) => b - a);

for (i of app_per) {
  if (mac_per / mac_pri > (mac_per + i) / (mac_pri + app_pri)) {
    break;
  } else {
    mac_per += i;
    mac_pri += app_pri;
  }
}
