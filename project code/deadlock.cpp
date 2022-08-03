#include <iostream>

using namespace std;

int main()
{

    int all_a[4]={50,100,150,200}, all_b[4]={55,121,157,215}, all_c[4]={35,137,151,206} ;
    int max_a[4]={70,125,170,230}, max_b[4]={67,141,166,242}, max_c[4]={76,145,186,254};
    int avl[4]={56,89,75,101};
    int need_a[4], need_b[4], need_c[4], need_d[4];

    int new_all_a[4], n1_avl[4],  n2_avl[4];

    for(int i=0; i<4; i++)
    {
        need_a[i]= max_a[i]-all_a[i];
        cout<<need_a[i]<<" ";
    }

    cout<<endl;

    for(int i=0; i<4; i++)
    {
        need_b[i]= max_b[i]-all_b[i];
        cout<<need_b[i]<<" ";
    }

    cout<<endl;

    for(int i=0; i<4; i++)
    {
        need_c[i]= max_c[i]-all_c[i];
        cout<<need_c[i]<<" ";
    }

    cout<<endl;

    for(int i=0; i<4; i++)
    {
        if (need_a[i]<=avl[i])
        {
            new_all_a[i]=need_a[i]+all_a[i];

            n1_avl[i]=avl[i]-need_a[i];

            n2_avl[i]=n1_avl[i]+max_a[i];


        }


    }

    for(int i=0; i<4; i++)
    {
        cout<<new_all_a[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<4; i++)
    {
        cout<<n1_avl[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<4; i++)
    {
        cout<<n2_avl[i]<<" ";
    }
    cout<<endl;



    //cout<<all_a[3];





}
