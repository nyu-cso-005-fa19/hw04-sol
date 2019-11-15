int
ex2(char *str) {
  int i = 0;
  int count = 0;
  while (str[i] != 0) {
    if (str[i] == 'a') {
      count++;
    }
    i++;
  }
  return count;
}
