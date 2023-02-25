h=0
while [ $ch -ne 4 ]
do
echo "1. Input 2 Arrays and Merge"
echo "2. Find Location of Duplicate Elements"
echo "3. Delete Duplicate Elements"
echo "4. Exit"
echo -n "Enter Your Choice: ";
read ch
case $ch in
1) declare -a Arr1; declare -a Arr2
echo -n "Enter Size of Arr1: "
read n1
echo -n "Enter Size of Arr2: "
read n2
echo "Enter Arr1 Elements: "
for (( i=0 ; i<n1 ; i++ ))
do
read Arr1[$i]
done
echo "Array 1 : ${Arr1[*]}"
echo "Enter Arr2 Elements: "
for (( i=0 ; i<n2 ; i++ ))
do
read Arr2[$i]
done
echo "Array 1 : ${Arr2[*]}"
max=`expr $n1 + $n2`
for (( i=n1,j=0 ; i<max ; i++ ))
do
Arr1[$i]=${Arr2[$j]}
j=`expr $j+1`
done
echo "Merged Array : ${Arr1[*]}"
;;
2) for (( i=0; i<max ; i++ ))
do
p=1
echo -n "${Arr1[$i]} at $i;...