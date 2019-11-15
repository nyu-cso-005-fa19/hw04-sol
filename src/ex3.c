void
ex3(char *buf1, char *buf2, int len)
{
  for (int i = 0; i < len; i++) {
    char tmp = buf1[i];
    buf1[i]  = buf2[i];
    buf2[i] = tmp;
  }
}
