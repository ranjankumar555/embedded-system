echo "enter marks"
read marks
if test $marks -ge 80
then
	echo "Grade A"
elif test $marks -ge 60
then
	echo "Grade B"
elif [ $marks -ge 40 ]
then
	echo "Grade C"
else
	echo "Grade D"
fi
