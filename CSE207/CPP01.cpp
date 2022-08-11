#include<iostream>
using namespace std;
class Sample
{
public:
    int *ptr;
    Sample(int i)
    {
        ptr = new int(i);
    }
    ~Sample()
    {
        delete ptr;
    }
    void PrintVal()
    {
        cout << "The value is " << *ptr;
    }
};
void SomeFunc(Sample x)
{
    cout << "Say i am in someFunc " << endl;
}
int main()
{
    Sample s1= 10;
    SomeFunc(s1);
    s1.PrintVal();
}
