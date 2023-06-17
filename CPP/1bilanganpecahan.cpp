class Pecahan
{
    int a,b,c;
    int fbp(int m, int n)
    {
        while(n!=0)
        {
            int t=m%n;
            m=n;
            n=t;
        }
        return m;
    }
    void simple(){ .... }
    public:
    pecahan() {a=b=0; c=1;}
    void set(int p1, int p2, int p3)
    {
        a=p1;
        b=p2;
        c=p3;
        simple();
    }
    Pecahan operator+(Pecahan const &p)
    {
        Pecahan res;
        res.a = a+p.a;
        res.b = b*p.c+p.b*c;
        res.c = c*p.c;
        res.simple();
        return res;
    }
}