#include <iostream>
#include <string>
using namespace std; 

template<typename IterT, typename Func>
void ForEach(IterT begin, IterT end, Func f)
{
    while (begin != end)
    {
        f(*begin++); 
    }
}

template<typename T>
struct PrintFunctor
{
    string sep;  

    explicit PrintFunctor(const string& s = " ") 
    : sep(s) {}

    void operator()(T data) const 
    {
        cout << data << sep;  
    }
};

int main() 
{
    int arr[5] = {10, 20, 30, 40, 50}; 
    ForEach(arr, arr + 5, PrintFunctor<int>()); 
    cout << endl;

    string sarr[3] = {"abc", "ABCDE", "Hello!"}; 
    ForEach(sarr, sarr + 3, PrintFunctor<string>("*\n")); 
    cout << endl; 
    
    return 0; 
}