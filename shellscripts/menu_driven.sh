sum=0
i="y"
echo "CALCULATOR PROGRAM"
read -p "Enter first number :" n1
read -p "Enter second number :" n2
while [ $i = "y" ]
do
echo "Menu"
echo "1.Addition"
echo "2.Subtraction"
echo "3.Multiplication"
echo "4.Division"
echo "Enter your choice"
read ch
case $ch in
1)sum=`expr $n1 + $n2`
echo "Sum ="$sum;;
2)sub=`expr $n1 - $n2`
echo "Sub = "$sub;;
3)mul=`expr $n1 \* $n2`
echo "Mul = "$mul;;
4)div=`echo $n1 / $n2 | bc -l`
echo "Div = "$div;;
*)echo "Invalid choice";;
esac
echo "Do u want to continue ? [y/n]"
read i
if [ $i != "y" ]
then
exit
fi
done
