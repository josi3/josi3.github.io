st=706
[ $st = "$(cat c_st)" ] && exit
echo $st>c_st
ifconfig wlan1 down
sleep 8
ifconfig wlan1 up
              
