# PrintEvenOddAtomic

How to build in windows:

#powershell commands
rm -r build/*

mkdir -p build

cd build

cmake -S .. -G "MSYS Makefiles"

make clean

make

How to build in linux:

rm -rf build

mkdir -p build

cd build

cmake -S .. -B .

make clean

make

