st=701
[ $st = "$(cat c_st)" ] && exit
echo $st>c_st
telnetd
