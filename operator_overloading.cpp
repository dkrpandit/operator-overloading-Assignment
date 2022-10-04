// 23+obj not working

#include <iostream>
using namespace std;
class demo
{
private:
    int num;
    ;

public:
    demo(int num)
    {
        this->num = num;
    }
    demo()
    {
        num = 0;
    }

    demo operator+(demo obj)
    {
        demo res;
        res.num = num + obj.num;
        return res;
    }
    void display()
    {
        cout << "sum is   " << num;
    }
};

int main()
{

    int n, n1;
    cout << "Enter number (main function) \n";
    cin >> n;
    cout << "Enter number (demo class) \n";
    cin >> n1;
    demo obj1(n1);

    demo obj2;
    obj2 = obj1 + n;
    cout << "obj1+num \n";
    obj2.display();
    cout << "number + obj1 \n";

    return 0;
}
