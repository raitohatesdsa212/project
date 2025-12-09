nums = [1,1,1,2,2,3]

k = 2

freq = {}
for n in nums:
    freq[n] = freq.get(n, 0) + 1 
a = set()
target = set()
final = []
for i in freq:
    a.add(int(freq[i]))

for i in range(k):
    m = max(a)
    target.add(m)
    a.remove(m)


for i in freq:
    if freq[i] in target:
        final.append(i)
print(final)
