read -p "Enter a number:" num
fact=1
for((i=2;i<=num;i++))
{
  fact=$((fact * i))  #fact = fact * i
}
echo "The factorial of $num is  $fact"
