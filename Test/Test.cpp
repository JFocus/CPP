#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void output(double * in , int num);

int main(int argc, char **argv) {
        double b[4] {1,2,3,4};
        double c[4] {2,3,4};
        cout<<"b: "<<b<<endl;
        output(b,4);
        cout<<"c: "<<c<<endl;
        swap(b,c);
        cout<<"b: "<<b<<endl;
        cout<<"c: "<<c<<endl;
        int n = 4 ;
        
        double * p = new double[n];
        double *q  = new double[1000];
        cout<<"p: "<<p<<endl;
        cout<<"q: "<<q<<endl;
        swap(p,q);
        cout<<"p: "<<p<<endl;
        cout<<"q: "<<q<<endl;
}
void output(double * in , int num)
{
        for(int i = 0;i <num;i++)
        {
                cout<<in[i]<<endl;
        }
}




