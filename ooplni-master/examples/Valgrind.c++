// ------------
// Valgrind.c++
// ------------

#include <cassert>  // assert
#include <iostream> // cout, endl

int main () {
    using namespace std;
    cout << "Valgrind.c++" << endl;

    int* p = new int;

    cout << "Done." << endl;
    return 0;}

/*
% valgrind --version
valgrind-3.7.0

% g++ -pedantic -std=c++0x -Wall Valgrind.c++ -o Valgrind.c++.app
...

% valgrind Valgrind.c++.app
==19864== Memcheck, a memory error detector
==19864== Copyright (C) 2002-2011, and GNU GPL'd, by Julian Seward et al.
==19864== Using Valgrind-3.7.0 and LibVEX; rerun with -h for copyright info
==19864== Command: Valgrind.c++.appx
==19864==
Valgrind.c++
Done.
==19864==
==19864== HEAP SUMMARY:
==19864==     in use at exit: 4 bytes in 1 blocks
==19864==   total heap usage: 1 allocs, 0 frees, 4 bytes allocated
==19864==
==19864== LEAK SUMMARY:
==19864==    definitely lost: 4 bytes in 1 blocks
==19864==    indirectly lost: 0 bytes in 0 blocks
==19864==      possibly lost: 0 bytes in 0 blocks
==19864==    still reachable: 0 bytes in 0 blocks
==19864==         suppressed: 0 bytes in 0 blocks
==19864== Rerun with --leak-check=full to see details of leaked memory
==19864==
==19864== For counts of detected and suppressed errors, rerun with: -v
==19864== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 4 from 4)
*/
