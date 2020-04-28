#!/bin/bash
#Tool by Basudev Rout
#Instagram- @basudevrout2001

echo ' '
echo ' '
echo -e "\e[5;49;93m           Checking requirements...\e[0m"
echo ' '
echo -e "\e[5;49;93m           Please wait...\e[0m"
echo ' '
sleep 3s

command -v figlet  > /dev/null


              if [ $? -eq 0 ]; then
                                  echo ' '
              else
         apt update -y
         apt upgrade -y
         pkg install figlet -y
              fi

command -v toilet > /dev/null


              if [ $? -eq 0 ]; then
                                  echo ' '
              else

pkg install toilet -y

fi

command -v nano > /dev/null

if [ $? -eq 0 ]; then
    echo ' '
else

pkg install nano -y
fi


command -v clang > /dev/null

if [ $? -eq 0 ]; then
    echo ' '
else
pkg install clang -y
fi


command -v mpv > /dev/null

if [ $? -eq 0 ]; then
    echo ' '
else
pkg install mpv
fi

command -v lolcat > /dev/null

if [ $? -eq 0 ]; then
    echo ' '
else
pkg install lolcat -y
fi



clang menu.c -o start

clear

lolcat $HOME/colorcode/modules/banner
bash $HOME/colorcode/modules/profile.sh

./start

