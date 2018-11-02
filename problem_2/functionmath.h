#ifndef FUNCTIONMATH_H
#define FUNCTIONMATH_H


class functionmath
{
    public:
        unsigned int n;
        unsigned int r;
        int a;
        int b;
        float power;
        double square;
        functionmath();
        unsigned int logn(unsigned int n,unsigned int r);
        double sqroot(double square);
        int MyPow(int a,int b);
        double epow(float power);
    protected:

    private:
};

#endif // FUNCTIONMATH_H
