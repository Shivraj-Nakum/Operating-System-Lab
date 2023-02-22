num=1
rows=5
for((i=1; i<=rows; i++))
do
  for((j=1; j<=i; j++))
  do
    echo -n "$num "
    num=$((num + 1))
  done
  num=1
  echo
done
