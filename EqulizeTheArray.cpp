#include<iostream>
using namespace std;

class EqualizeTheArray
{
    public:
        int n;
        int *A;
        EqualizeTheArray()
        {
            cin >> n;
            A = new int[n];
            for(int i=0 ; i<n ; i++)
                cin >> A[i];
        }
        void swap(int &a, int &b)
        {
            int temp;
            temp = a;
            a = b;
            b = temp;
        }
        void BubbleSort()
        {
            int temp;
            for(int i=0 ; i<n-1 ; i++)
            {
                for(int j=0 ; j<n-1 ; j++)
                {
                    if(A[j] > A[j+1])
                    {
                        swap(A[j],A[j+1]);
                    }
                }
            }
        }
        void display()
        {
            for(int i=0 ; i<n ; i++)
            {
                cout << A[i] << " ";
            }
        }
        int duplicates()
        {
            int duplicates=1;
            for(int i=0 ; i<n ; i++)
            {
                if(A[i] == A[i+1])
                {
                    int j=i+1;
                    while(A[i] == A[j])
                    {
                        duplicates++;
                        j++;
                    }
                    i = j+1;
                }
            }
            return duplicates;
        }
};

int main()
{
    int key,D[100];
    EqualizeTheArray e1;
    e1.BubbleSort();
    for(int i=0 ; i<n)
    cout << key << endl;
}