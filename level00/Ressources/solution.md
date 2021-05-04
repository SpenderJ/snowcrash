## Level 00

```
Login: level00
Passwd: level00
```

Let's check the content of files owned by flag00 since we are looking for the flag 00.

```
find / -user flag00 2>/dev/null
```

We checking the content of the 2 found files get a code that we will try to decode using a rot.
```
cdiiddwpgswtgt
```
Why rot? We coded one in our entry test lvl (13), and in Darkly I already had to use it.

```
http://theblob.org/rot.cgi?text=cdiiddwpgswtgt
```
By watching the results we realize that ROT11 seems to make sense:
```
ROT-11: nottoohardhere
```
