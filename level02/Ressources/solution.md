For the first time, when listing the files present in the home repository, we find one.
```
ls-l
----r--r-- 1 flag02 level02 8302 Aug 30  2015 level02.pcap
```

Pcap stands for packet capture, it's an API aloowing you to capture network traffic.

We are now going to download this file and open it to see what we can get out of it.
```
scp -P 4242 level02@127.0.0.1:~/level02.pcap .
f2av5il02puano7naaf6adaaf
```

After few lookup online, I decided to go with Wireshark which looked like the easiest option there.
https://www.wireshark.org/#download
Set rights to the file so whireshark can open it
```
chmod 777 level02.pcap
```
Then We can open it using Wireshark, no need to install the other packages required to read on connections.
Analyzing it using TCP stream gives us quite a usefull information
```
..%..%..&..... ..#..'..$..&..... ..#..'..$.. .....#.....'........... .38400,38400....#.SodaCan:0....'..DISPLAY.SodaCan:0......xterm.........."........!........"..".....b........b....	B.
..............................1.......!.."......"......!..........."........"..".............	..
.....................
Linux 2.6.38-8-generic-pae (::ffff:10.1.1.2) (pts/10)

..wwwbugs login: l.le.ev.ve.el.lX.X
..
Password: ft_wandr...NDRel.L0L
.
..
Login incorrect
wwwbugs login: 
```
Knowing that . means del in hex we can deduct that the password is ft_waNDReL0L
Check flag.Here is your token : kooda2puivaav1idi4f57q8iq
