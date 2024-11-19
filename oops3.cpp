#include<iostream>
using namespace std;

class Complex;
private:
int real;
int img;

public:
Complex()
{
real=0;
img=0;
}

{
Complex(int rr, int im):
}

void display()
Complex operator+ (complex)
friend Complex operator- (complex,complex)
Complex operator* (complex)
Complex operator/ (complex)


Complex operator+ (complex c2)
{
c3=c1.real+c2.real;
c3=c1.img-c2.img;
return c3;
} 

Complex operator- (complex c2)
{
c3=c1.real-c2.real;
c3=c1.img-c2.img;
return c3;
}

Complex operator* (complex c2)
{
c3=c1.real*c2.real+c1.img*c2.img / c1.real*c2.real + c1.img - 

