```
ls -l
./level09
You need to provied only one arg.
./level09 token
tpmhr
cat -e token
f4kmm6p|=M-^B^?pM-^BnM-^CM-^BDBM-^CDu{^?M-^LM-^I$

./level09 aaaaa
abcde
```
We can deduct that the script adds his position to every ascii value of the argument.
So we can suppose that the token got hashed this way. Let's make a script to fix this.

2 versions of the scripts are available. I recommend the version in C, the one in Python should but doesn't work for some encoding reasons.

```
ggc main.c
./a.out `cat token`
f3iji1ju5yuevaus41q1afiuq
```
