#~/bin/bash

echo "Ansi C Autograder: Chapter01"
echo -e "Script created by the CC3 Team - Galileo University\n"

# Program names
aryProgNames=(21atoi.c 22squeeze.c 23strcat.c)

echo -e "these are the programs I will be evaluating: \n${aryProgNames[@]} \n"

#for loop, navigating through files
for((i=0;i<${#aryProgNames[@]};i++)); do
	f=${aryProgNames[i]}
	if [ -f $f ]; then	# -f checks for file existence
		echo "$f exists, checking..."
		`cc $f`
		echo -e `./$f.autograder`
	else
		echo -e "$f not found, skipping..."
		echo -e "points:   0\n"
	fi
done
