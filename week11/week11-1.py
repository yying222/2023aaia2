def func(n):
  if n == 1:
    return 1
  return n * func(n - 1)
n = int(input('½Ð¿é¤J1­Ó¼Æ¦r:'))
ans = func(n)
print('µª®×¬O:', ans)