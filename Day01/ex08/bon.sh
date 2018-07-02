ldapsearch -H ldap://ldap-master.42.us.org -Q "sn=*bon*" | grep "sn: " | cut -c 5- | grep -i "bon" | wc | awk '{print $1}'
