#Check if string contains duplicate chars ...

s = raw_input()
hash = {i: 0 for i in s}
for i in s:
    hash[i] += 1

for i in hash.keys():
    if hash[i] > 1:
         print 'duplicate char'
         exit()

print 'no dups'
    


  

