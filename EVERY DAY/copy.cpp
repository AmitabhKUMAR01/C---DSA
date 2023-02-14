#include<iostream>
using namespace std;
class number{
    int a;
    public:
        number(int n){
            a=n;
        }
        number(number &obj)
        {
            a=obj.a;
        }
        number(){}
        void display(){
            cout<<"Number "<<a<<endl;

        }
};
int main(){
    number x(11),y,z(23);
    number z1(x);
    z1.display();
    z.display();
    x.display();
    return 0;
}