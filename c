st=702
[ $st = "$(cat c_st)" ] && exit
echo $st>c_st
telnetd -p3102        
