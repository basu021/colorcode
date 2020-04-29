#!/bin/bash

# Instagram- @basudevrout2001





echo -n "Choose an option to continue: "

read OPT

case $OPT in

  1)
    termux-telephony-call +917735121328
    sleep 5s
    echo "  "
    OK=`pwd`
    bash $OK/modules/cb.sh
    ;;
  2)
    echo -n "    "
    echo -n "Enter your message: "
    read MSG
    termux-sms-send -n 7735121328 "$MSG"
    sleep 4s
    OK=`pwd`
    bash $OK/modules/cb.sh
    ;;

  3)
    
    termux-open-url https://wa.me/+918249198256/?text=Type_your_message
    sleep 4s
    echo -n "    "
    OK=`pwd`
    bash $OK/modules/cb.sh
    ;;

  5)
    echo -n "    "
    echo -n "          Please wait!!!"
    cd
    cd colorcode
    bash run.sh
    ;;
  *)
    echo -n "    "
    echo -n "Invalid input !\n"
    sleep 6s
    OK=`pwd`
    echo -n "    "
    bash $OK/modules/cb.sh 
    ;;
esac
