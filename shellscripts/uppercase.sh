read -p "Enter the string:" s 
upperstr=$(echo $s | tr '[:lower:]' '[:upper:]')
echo "Inputed Lowercase String : $s"
echo "Uppercase String : $upperstr"
