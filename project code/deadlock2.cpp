#include <iostream>

using namespace std;

int main()
{
    int f=0,k, i=0, j=0 , l=0;

    int all[3][4]={{50,100,150,200},{55,121,157,215},{35,137,151,206}};
    int max[3][4]={{70,125,170,230},{67,141,166,242},{76,145,186,254}};
    int avl[4]={56,89,75,101};
    int need[3][4];

    int new_all[3][4], n1_avl[4],  n2_avl[4];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            need[i][j]= max[i][j]-all[i][j];
            cout<<need[i][j]<<" ";
        }

        cout<<endl;

    }



    if(f=0)
    {
        for(int i; i<3; i++)
    {
        for(int j; j<4; j++)
        {
            if (need[i][j]<=avl[j])
            {
                new_all[i][j]=need[i][j]+all[i][j];

                n1_avl[j]=avl[j]-need[i][j];

                avl[j]=n1_avl[j]+max[i][j];

                cout<<n1_avl[j]<<" ";
                cout<<avl[j]<<" ";

                k=i;
            }
            else
            {
                f=1;
                l++;


                break;
            }
        }
        cout<<endl;



    }


    }

    else if(f=1)
    {
        for(int k; i<k+l; i++)
    {
        for(int j; j<4; j++)
        {
            if (need[k][j]<=avl[j])
            {
                new_all[k][j]=need[i][j]+all[i][j];

                n1_avl[j]=avl[j]-need[k][j];

                avl[j]=n1_avl[j]+max[k][j];

                cout<<n1_avl[j]<<" ";
                cout<<avl[j]<<" ";

            }
            else
            {



                break;
            }
        }
        cout<<endl;




    }
    }



    cout<<endl;
    cout<<endl;

    for(int i=0; i<4; i++)
    {
        cout<<avl[i]<<" ";
    }
    cout<<endl;







}
