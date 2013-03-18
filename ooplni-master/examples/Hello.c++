// ---------
// Hello.c++
// ---------

#include <iostream> // cout, endl

int main () {
    using namespace std;
    cout << "Nothing to be done." << endl;
    return 0;}

/*
% g++ -v
Using built-in specs.
Target: i486-linux-gnu
Configured with: ../src/configure -v --with-pkgversion='Ubuntu 4.4.3-4ubuntu5.1'
--with-bugurl=file:///usr/share/doc/gcc-4.4/README.Bugs
--enable-languages=c,c++,fortran,objc,obj-c++ --prefix=/usr --enable-shared
--enable-multiarch --enable-linker-build-id --with-system-zlib
--libexecdir=/usr/lib --without-included-gettext --enable-threads=posix
--with-gxx-include-dir=/usr/include/c++/4.4 --program-suffix=-4.4 --enable-nls
--enable-clocale=gnu --enable-libstdcxx-debug --enable-plugin --enable-objc-gc
--enable-targets=all --disable-werror --with-arch-32=i486 --with-tune=generic
--enable-checking=release --build=i486-linux-gnu --host=i486-linux-gnu
--target=i486-linux-gnu
Thread model: posix
gcc version 4.4.3 (Ubuntu 4.4.3-4ubuntu5.1)
*/

/*
% g++ Hello.c++ -o Hello.c++.appx -pedantic -std=c++0x -Wall
% Hello.c++.appx
Nothing to be done.
*/
