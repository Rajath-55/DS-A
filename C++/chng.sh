#! /bin/sh
f=$(1:-try.cpp)
c=$(2:-Codeforces)
sed -i 's/^\   Challenge .*$/   Challenge : '$c'/'  $f

echo $filename $changeTo
