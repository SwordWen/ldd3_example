
Build hellomod on ubuntu 16.04
Linux ****** 4.4.0-57-generic #78-Ubuntu SMP Fri Dec 9 23:50:32 UTC 2016 x86_64 x86_64 x86_64 GNU/Linux


1. make linux module
#Run 'make oldconfig && make prepare' on kernel src
make all

2. insert module and remove module
#check /var/log/syslog
insmod hellomod.ko
rmmod hellomod
