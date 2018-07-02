ldapsearch -H ldap://ldap-master.42.us.org -x -LLL "(uid=z*)" | grep "cn:" | sed "s/cn: //" | sort -f -r
