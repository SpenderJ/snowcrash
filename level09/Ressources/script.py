# coding utf-8
import sys

w=sys.argv[1]
for x in range(0,len(w)):print(chr(ord(w[x])-x),end="")
