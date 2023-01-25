#~/bin/bash

echo "Ansi C Autograder: Chapter01"
echo -e "Script created by the CC3 Team - Galileo University\n"

# Program names
aryProgNames=(hello.c fahrcel.c celfahr.c fahrcel-for.c filecopy.c ex-1.8.c ex-1.9.c ex-1.10.c wordcount.c ex-1.12.c countdigits.c ex-1.13.c ex-1.14.c power.c ex-1.15.c longestline.c ex-1.17.c ex-1.18.c ex-1.19.c ex-1.20.c)

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
