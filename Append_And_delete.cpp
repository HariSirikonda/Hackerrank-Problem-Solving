#include<iostream>
using namespace std;

class AppendDelete
{
    private:
        string s1,s2;
        int k;
    public:
        AppendDelete()
        {
            cin >> s1;
            cin >> s2;
            cin >> k;
        }
        void check()
        {
            int commonLength = 0;
            for(int i=0 ; i < min(s1.length(),s2.length()) ; i++)
            {
                if(s1[i] == s2[i])
                    commonLength++;
                else
                    break;
            }

            int totalchanges = (s1.length()-commonLength) + (s2.length()-commonLength);

            if(k>= s1.length()+s2.length() || (k >= totalchanges && (k-totalchanges)%2 == 0))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
};

int main()
{
    AppendDelete a1;
    a1.check();
    
}
