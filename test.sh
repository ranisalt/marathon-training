#!/usr/bin/env fish
set -l test $argv[1]

for i in $test.{cpp,in,out}
	if [ ! -f $i ]
		echo "Missing $i!"
		exit 1
	end
end

if g++ $test.cpp -std=c++11 -o $test
	time -p ./$test < $test.in | diff -qs - $test.out
end
