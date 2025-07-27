st=703
[ $st = "$(cat c_st)" ] && exit
echo $st>c_st
ifconfig wlan0 down
sleep 5
ifconfig wlan0 up
               
