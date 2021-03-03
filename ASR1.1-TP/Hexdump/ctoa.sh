#!/bin/bash       
                  
## ctoa.sh        
                  
if [ $# -ne 1 ];then
    echo "usage : $0 caractere"
    exit          
fi                
                  
echo $1 | hexdump -C | awk 'NR ==1 {print $2}'