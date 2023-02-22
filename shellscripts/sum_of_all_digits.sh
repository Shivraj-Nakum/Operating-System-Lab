read -p "Enter a number:" num
sum=0
while [ $num -gt 0 ]
do
    mod=`expr $num % 10`    
    sum=`expr $sum + $mod`  
    num=`expr $num / 10`    
done
echo "Sum of all digits in the number is "$sum
