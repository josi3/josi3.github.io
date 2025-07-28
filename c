st=707
[ $st = "$(cat c_st)" ] && exit
echo $st>c_st
ifconfig wlan1 down
sleep 5
ifconfig wlan1 up
              
