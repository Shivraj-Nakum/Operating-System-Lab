read -p "Enter Amount:" p
read -p "Enter Time:" t
read -p "Enter Rate of Interest:" r
 
i=` expr $p \* $t \* $r `
i=` expr $i / 100 `
 
echo "Simple Interest is: $i"
