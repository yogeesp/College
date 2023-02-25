h=0
while [ $ch -ne 3 ]
do
echo "1. Input and Reverse 2. Find Element 3. Exit"
echo -n "Enter Your Choice: ";
read ch
case $ch in
1) declare -a Arr
echo -n "Enter N: "
read n
echo "Enter Elements: "
for (( i=0 ; i<n ; i++ ))
do
read Arr[$i]
done
echo "Original Array: ${Arr[*]}"
echo -n "Reversed Array: "
for (( i=n-1 ; i>=0 ; i-- ))
do
echo -n "${Arr[$i]} "
done
echo
;;
2) echo -n "Enter Location (less than $n): "
read i
echo "Element Present at $i location is ${Arr[$i]}"
;;
3) echo "Exiting Program...";;
*)
echo "Wrong Choice, Press Enter to Retry"
echo " "
;; esac
done