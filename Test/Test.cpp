#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void output(double * in , int num);

int main(int argc, char **argv) {
        int a = 5;
        int *b = &a;
        int *c = &a;
        cout<<b<<" "<<*b<<endl;
        cout<<c<<" "<<*c<<endl;
        cout<<(b==c)<<endl;
}
void output(double * in , int num)
{
        for(int i = 0;i <num;i++)
        {
                cout<<in[i]<<endl;
        }
}




