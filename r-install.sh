#!bin/bash

clear
figlet -f small Installing...
sleep 1s
figlet -f small please wait


apt upgrade -y
apt install toilet -y
apt install cowsay -y
apt install nano -y
pkg install mpv -y
pkg install termux-api -y
gem install lolcat

echo -e "\e[35mCompleted"
figlet -f big Done !!! |lolcat
echo -e "\e[93mNow run ⟩bash run.sh\e[0m...!!!"
echo ''
echo -e "\e[1m\e[32m Devlope4d by :\e[33m Instagram- @basudevrout2001"
echo ''
echo ''

