#include <iostream>
using namespace std;

class Histogram
{
    private:
        float low, a, b, c, up;
        int t[5]={0,0,0,0,0};
    public:
        Histogram(float lower, float aa, float bb, float cc, float upper)
        {
            low=lower;
            a=aa;
            b=bb;
            c=cc;
            up=upper;
        }
        void writenumber(float n)
        {
            if (n<low) {t[4]++; goto end;}
            if (n<=a) {t[0]++; goto end;}
            if (n<=b) {t[1]++; goto end;}
            if (n<=c) {t[2]++; goto end;}
            if (n<=up) {t[3]++; goto end;}
            t[4]++;
            end:;
        }
        void print()
        {
            cout<<low<<"-"<<a<<": "<<t[0]<<endl;
            cout<<a<<"-"<<b<<": "<<t[1]<<endl;
            cout<<b<<"-"<<c<<": "<<t[2]<<endl;
            cout<<c<<"-"<<up<<": "<<t[3]<<endl;
            cout<<"Out of range: "<<t[4]<<endl;
        }
};

int main()
{
    float l, x, y, z, u, numb;
        cout<<"Adja meg szamokat!"<<endl;
        cout<<"Also hatar"<<endl;
        cin>>l;
        cout<<"elso ertek"<<endl;
        cin>>x;
        cout<<"masodik ertek"<<endl;
        cin>>y;
        cout<<"Harmadik ertek"<<endl;
        cin>>z;
        cout<<"Felso hatar"<<endl;
        cin>>u;
        Histogram hist(l, x, y , z , u);
        cout<<"Irjon be szamokat"<<endl;
        while(cin>>numb)
        {
            hist.writenumber(numb);
        }
        hist.print();
}

