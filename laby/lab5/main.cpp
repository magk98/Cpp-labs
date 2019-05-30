#include "List.h"

template <typename T>
T max(const T a, const T b, const T c)
{
    if (b > a)
        return (c > b) ? c : b;
    else
        return (a > c) ? a : c;
}

template <typename T>
T max(const char* a, const char* b, const char* c)
{
    return max(string(a), string(b), string(c));
}



int main()
{
    List<int> l1;

    l1.insert(3);
    l1.insert(5);
    l1.insert(1);

    l1.remove();

    cout << l1 << endl << endl;

    List <int> l2;
    try{
        l2.remove();
    } 
    catch (Excp ex){
        cout << ex.getMsg() << endl;
    }

    cout << endl << max(1, 2, 3) << endl << max(1, 30, 2)
    << endl << max('a','b','c') << endl << max('d','f','z') << endl << endl;
}
