#!/usr/bin/env fish
set -l test $argv[1]

if [ ! -d $test ]
	echo "Please create files inside $test/"
	exit 1
end

cd $test

for i in $test.{cpp,in,out}
	if [ ! -f $i ]
		echo "Missing $i!"
		exit 1
	end
end

if g++ $test.cpp -std=c++11 -o $test
	time -p ./$test < $test.in | diff -qs - $test.out
end
