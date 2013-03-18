/*
NI: Quiz #14
*/

/* -----------------------------------------------------------------------
1. What does it mean for the return type to be "covariant"?
*/

/* -----------------------------------------------------------------------
2. Handle1 did NOT override operator*() and operator->().
   Handle2 did.
   What are the advantages and disadvantages of the two approaches?
*/

/* -----------------------------------------------------------------------
3. What is the output of the following program?
   You must get the newlines right to get full credit.
   Write the word "blank" to indicate a blank line.
*/

#include <algorithm> // swap
#include <iostream>  // cout, endl

using namespace std;

template <typename T>
class Handle {
    friend bool operator == (const Handle& lhs, const Handle& rhs) {
        return (!lhs._p && !rhs._p) || (*lhs._p == *rhs._p);}

    friend bool operator != (const Handle& lhs, const Handle& rhs) {
        return !(lhs == rhs);}

    public:
        typedef T                 value_type;

        typedef value_type*       pointer;
        typedef const value_type* const_pointer;

        typedef value_type&       reference;
        typedef const value_type& const_reference;

    private:
        pointer _p;

    protected:
        pointer get () {
            return _p;}

        const_pointer get () const {
            return _p;}

    public:
        Handle (pointer p) {
            _p = p;}

        Handle (const Handle& that) {
            if (!that._p)
                _p = 0;
            else
                _p = that._p->clone();}

        ~Handle () {
            delete _p;}

        Handle& operator = (Handle that) {
            swap(that);
            return *this;}

        void swap (Handle& that) {
            std::swap(_p, that._p);}};

struct A {
    A () {
        cout << "A() ";}

    A (const A& other) {
        cout << "A(A) ";}

    A& operator = (const A& rhs) {
        cout << "=(A) ";
        return *this;}

    ~A () {
        cout << "~A() ";}

    A* clone () const {
        cout << "clone() ";
        return new A(*this);}};

int main () {
    {
    Handle<A> x = new A();
    cout << endl;

    Handle<A> y = x;
    cout << endl;

    y = new A();
    cout << endl;

    y = x;
    cout << endl;
    }
    cout << endl;

    return 0;}
