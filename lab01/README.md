# Synpsis
The goal of this exercise is to get familiar the development environment, so you can work with the project going forward.

By the end, you should be able to build the program with make, run the executable and see the following output:
~~~~
+--------+----------------------------------------+----------+----------+
|       5|Super Mob                               |     12.90|     64.50|
+--------+----------------------------------------+----------+----------+
|      12|Tea Cup                                 |      5.30|     63.60|
+--------+----------------------------------------+----------+----------+
|       8|Red Wine Glass                          |      8.60|     68.80|
+--------+----------------------------------------+----------+----------+
                                                     Subtotal|    196.90|
                                                             +----------+
                                                        Taxes|     19.69|
                                                             +----------+
                                                        TOTAL|    216.59|
                                                             +----------+
~~~~

## Build the project
1. Generate the `Makefile`. This is a special file with instructions that is generated by `cmake` which we installed earlier. __This needs to be done only if you add/remove files.__.
```sh
cmake .
```
2. After the previous step is successful, you can build the project any number of times (whenever you make a change).
```sh
make
```

You should see progress reported of the different steps. You should see something like:
```
$ make
Scanning dependencies of target lab1
[ 16%] Building CXX object CMakeFiles/lab1.dir/src/main.cpp.o
[ 33%] Building CXX object CMakeFiles/lab1.dir/src/product.cpp.o
[ 50%] Building CXX object CMakeFiles/lab1.dir/src/item.cpp.o
[ 66%] Building CXX object CMakeFiles/lab1.dir/src/invoice.cpp.o
[ 83%] Building CXX object CMakeFiles/lab1.dir/src/textprinter.cpp.o
[100%] Linking CXX executable lab1
[100%] Built target lab1
```