#include <iostream>
#include <string>
using namespace std; 

template<typename IterT, typename Func>
void ForEach(IterT begin, IterT end, Func pf)
{
    while (begin != end)
    {
        pf(*begin++); 
    }
}

template<typename T>
void Print(T data)
{
    cout << data << " "; 
}

int main() 
{
    int arr[5] = {10, 20, 30, 40, 50}; 
    ForEach(arr, arr + 5, Print<int>); 
    cout << endl;

    string sarr[3] = {"abc", "ABCDE", "Hello!"}; 
    ForEach(sarr, sarr + 3, Print<string>); 
    cout << endl; 
    
    return 0; 
}