After trying the same method as previously, we realize that we'll need to figure out an other trick.

So let's check unix password files:

```
cat /etc/shadow # Gives a permission denied
cat /etc/passwd # Permission allowed, output seems usefull
```

One of the lines seems like not the other one and it matches the number of our flag:
```
flag01:42hDRfypTqqnw:3001:3001::/home/flag/flag01:/bin/bash
```

So let's now create a file containing this code:
42hDRfypTqqnw

Using a well known tool known as john the reeper, we will try to crack the password.
You can find it online free to download.

```
./john test --show
?:abcdefg
```

Let's only keep abcdefg
And there you go.

```
su flag01
getflag
f2av5il02puano7naaf6adaaf
```
