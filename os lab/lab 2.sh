 ch=0
while [ $ch -ne 3 ]
do
echo "1. Input and Sum 2. Sort 3. Exit"
echo -n "Enter Your Choice: ";
read ch
case $ch in
1) declare -a Arr
echo -n "Enter N: "
read n
echo "Enter Elements: "
sum=0;
for (( i=0 ; i<n ; i++ ))
do
 read Arr[$i]
sum=`expr $sum + ${Arr[$i]}`
done
echo "Sum of the Array is $sum"
;;
2) for (( i=0 ; i<$n-1 ; i++ ))
do
for (( j=0 ; j<$n-$i-1 ; j++ ))
do
if [ ${Arr[$j]} -gt ${Arr[$j + 1]} ]; then
temp=${Arr[$j]}
Arr[$j]=${Arr[$j + 1]}
Arr[$j + 1]=$temp
fi
done
done
echo "After Sorting: "
echo ${Arr[*]}
echo
;;
3) echo "Exiting Program...";;
*)
echo "Wrong Choice, Press Enter to Retry"
echo " "
;;
 esac
done 