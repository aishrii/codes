st = input()
x = [' ', '\t', '\n']
count = 0
for i in range(len (st) - 1):
    if(st[i] == st[i + 1]) and (st[i] in x):
        continue
    elif st[i] in x:
        count += 1;
print(count + 1)