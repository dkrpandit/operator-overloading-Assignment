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

    friend demo operator+(demo obj, int n)
    {
        demo temp;
        temp.num = obj.num + n;
        return temp;
    }
    friend demo operator+(int n, demo obj)
    {
        demo temp;
        temp.num = obj.num + n;
        return temp;
    }
    void display()
    {
        cout << "sum is   " << num << "\n";
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
    cout << "(obj1+number )   -";
    obj2.display();
    cout << "(number + obj1 )  -";
    obj2 = n + obj1;
    obj2.display();

    return 0;
}

/*

output-

Enter number (main function)
23
Enter number (demo class)
34
(obj1+number )   -sum is   57
(number + obj1 )  -sum is   57

*/