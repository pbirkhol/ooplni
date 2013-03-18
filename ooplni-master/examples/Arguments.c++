// -------------
// Arguments.c++
// -------------

#include <cassert>  // assert
#include <cstring>  // strcmp
#include <iostream> // cout, endl

void f (int v, int* p, int& r) {
    ++v;
    ++(*p);
    ++r;}

void g (std::string v, std::string* p, std::string& r) {
    ++v[1];
    ++(*p)[1];
    ++r[1];}

void h1 (int p[]) {
    assert(sizeof(p) == 8);
    ++p;
    ++p[0];
    ++*p;}

void h2 (int* p) {
    assert(sizeof(p) == 8);
    ++p;
    ++p[0];
    ++*p;}

int main () {
    using namespace std;
    cout << "Arguments.c++" << endl;

    {
    int i = 2;
    int j = 2;
    int k = 2;
    f(i, &j, k);
    assert(i == 2);
    assert(j == 3);
    assert(k == 3);
    }

    {
    string s = "abc";
    string t = "abc";
    string u = "abc";
    g(s, &t, u);
    assert(s == "abc");
    assert(t == "acc");
    assert(u == "acc");
    }

    {
    int a[] = {2, 3, 4};
    h1(a);
    assert(a[0] == 2);
    assert(a[1] == 5);
    assert(a[2] == 4);
    }

    {
    int a[] = {2, 3, 4};
    h2(a);
    assert(a[0] == 2);
    assert(a[1] == 5);
    assert(a[2] == 4);
    }

    cout << "Done." << endl;
    return 0;}
