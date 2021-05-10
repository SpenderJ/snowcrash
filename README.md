# snowcrash
This project is the start of the Security branch at 42 Paris. Therefore this project is a small introduction to this vast world that is security in IT. Where making mistakes shouldn't exist.

### Running the project on M1 Mac

The snowcrash iso linked with the subject is made to run on Intel Architecture. Being on M1 mac was an issue since it's running on an AMD architecture. 
To run the VM on M1, you'll have to build the iso using UTM:
https://github.com/utmapp/UTM

To access the SSH server to copy file or to directly interact with the VM from your terminal, you'll have to set a Post Forward using the TCP protocol, the guest adress will be the adress of your virtual machine, don't change the host, and just set ports to 4242.
Then you should be able to connect using ssh.

```
ssh levelXX@127.0.0.1 -p 4242
```

I hope that this quick workaround was usefull. Maybe some updates made it easier but for now that's the best trick I found.

