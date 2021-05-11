```
ls -l
-rwsr-s---+ 1 flag08 level08 8617 Mar  5  2016 level08 
-rw-------  1 flag08 flag08    26 Mar  5  2016 token # Not enough rights to read it
```

Let's try to execute level08:
```
./level08
./level08 [file to read]

./level08 token
You may not access 'token'

chmod 777 token
chmod: changing permissions of `token': Operation not permitted
```

Looks like we are going to have to find another way of doing such.
As we previously did, let's once more hexdump the file but it doesn't gives us much informations.
Let's try with ltrace to understand more deeply what's happening there:
```
ltrace ./level08 token
__libc_start_main(0x8048554, 2, 0xbffff7a4, 0x80486b0, 0x8048720 <unfinished ...>
strstr("token", "token")                          = "token"
printf("You may not access '%s'\n", "token"You may not access 'token'
)      = 27
exit(1 <unfinished ...>
+++ exited (status 1) +++
```

The interesting part is the strstr which means that our argument is compared to token.
I'm trying to avoid the strstr by doing such:
```
echo "`/bin/getflag`" > /tmp/test1
./level08 /tmp/test1
Check flag.Here is your token :
Nope there is no token here for you sorry. Try again :)
```
I guess we will have to try a different way...
Looks like we have to use the file without using it, we'll try creating a link:
```
ln -s ~/token /tmp/test2
./level08 /tmp/test2
quif5eloekouj29ke0vouxean
su flag08
getflag
Check flag.Here is your token : 25749xKZ8L7DkSCwJkT9dyv6f
```
