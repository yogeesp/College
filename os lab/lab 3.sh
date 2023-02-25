ch=0
while [ $ch -ne 3 ]
do
echo "1. Generate Array 2. Find Min/Max 3. Exit"
echo -n "Enter Your Choice: ";
read ch
case $ch in
1) declare -a Arr
echo -n "Enter Initial Number: "
read n
c=0;
while [ $c -lt 10 ]
do
prime=1
i=2
l=`expr $n / 2`
while [ $i -lt $l ]
do
mod=`expr $n % $i`
if [ $mod -eq 0 ]; then
prime=0
fi
i=`expr $i + 1`
done
if [ $prime -eq 1 ]; then
Arr[$c]=$n
c=`expr $c + 1`
fi
n=`expr $n + 1`
done
echo "Array Contents: ${Arr[*]}"
;;
2) max=${Arr[0]}; min=${Arr[0]}
for (( i=0 ; i<n-1 ; i++ ))
do
if [ $max -lt ${Arr[$i+1]} ]; then
max=${Arr[$i+1]}
elif [ $min -gt ${Arr[$i+1]} ]; then
min=${Arr[$i+1]}
fi
done
echo "Max Term: $max"
echo "Min Term: $min"
echo
;;
3) echo "Exit…