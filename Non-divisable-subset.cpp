#include<iostream>
using namespace std;

class Array
{
    public:
        int n,k,*A,*R,size_of_result=-1;
        Array()
        {
            R = new int[5000];
            cin >> n;
            cin >> k;
            A = new int[n];
            for(int i=0 ; i<n ; i++)
                cin >> A[i];
        }
        void display_A()
        {
            for(int i=0 ; i<n ; i++)
                cout << A[i];
        }
        void display_R()
        {
            for(int i=0 ; i<size_of_result ; i++)
                cout << R[i] << " ";
            cout << endl;
        }
        bool Not_present(int key)
        {
            for(int i=0 ; i<n ; i++)
            {
                if(R[i] == key)
                {
                    return false;
                }
                return true;
            }
        }
        void R_append(int key)
        {
            R[++size_of_result] = key;
        }
        int CountDuplicates()
        {
            int duplicates=1;
            for(int i=0 ; i<n ; i++)
            {
                for(int j=i+1 ; j<n ; j++)
                {
                    if(R[i] == R[j])
                    {
                        duplicates++;
                    }
                }
            }
            return duplicates;
        }
};

int main()
{
    Array a1;
    for(int i=0 ; i<a1.n ; i++)
    {
        for(int j=i+1 ; j<a1.n ; j++)
        {
            if(((a1.A[i] + a1.A[j]) % a1.k) != 0)
            {
                a1.R_append(a1.A[i]);
                a1.R_append(a1.A[j]);
            }
        }
    }
    a1.CountDuplicates();
    cout << a1.size_of_result - a1.CountDuplicates() << endl;
    return 0;
}