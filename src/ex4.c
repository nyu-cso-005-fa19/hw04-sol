long
ex4(long n)
{
  if (n <= 1) {
    return n;
  }	
  return ex4(n-1) + ex4(n-2);
}
