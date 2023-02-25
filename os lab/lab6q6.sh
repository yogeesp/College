echo Enter the name of 1st file :
read a
echo Enter the name of 2nd file :
read b
echo Enter the name of 3rd file :
read c
echo Contents of 1st file
cat $a
echo Contents of 2nd file
cat $b
echo Contents of 3rd file
cat $c
cat $b >> $a
cp $a $c
echo Contents of 3rd file after concatenation of 1st and 2nd file
cat $c