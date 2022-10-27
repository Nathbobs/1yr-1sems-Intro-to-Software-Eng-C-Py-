def word_count(str):
    counts = dict()
    words = str.split()
    for word in words:
	    if word in counts:
	        counts[word] += 1
	    else:
	        counts[word] = 1
    return counts
s=input()
c=word_count(s)
keys=list(c.keys())
for i in range(len(c)):
    print("%s: %d" %(keys[i], c[keys[i]])) 