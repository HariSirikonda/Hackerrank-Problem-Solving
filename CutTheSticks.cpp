#include<iostream>
using namespace std;

class Array
{
    public:
        int n;
        int *A;
        Array()
        {
            cin >> n;
            A = new int[n];
            for(int i=0 ; i<n ; i++)
                cin >> A[i];
        }
        int FindMin()
        {
            int min = A[0];
            for(int i=0 ; i<n ; i++)
            {
                if(A[i] > 0 && A[i] < min)
                    min = A[i];
            }
            return min;
        }
};

int main()
{
    int sticks_cut=1,minimum;
    Array a1;
    while(sticks_cut != 0)
    {
        sticks_cut = 0;
        minimum = a1.FindMin();
        for(int i=0 ; i<a1.n ; i++)
        {
            if(a1.A[i] > 0 && a1.A[i] > minimum)
            {
                sticks_cut++;
                a1.A[i] -= minimum;
            }
        }
        cout << sticks_cut << endl;
    }
}