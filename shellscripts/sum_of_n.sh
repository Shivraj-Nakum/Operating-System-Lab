read -p "Enter Size(n):" n
sum=0
echo "Enter Numbers"
for((i=1 ; i<=n ; i++))
do
  read num
  sum=$((sum+num))
done

echo "Sum of numbers is:"$sum
