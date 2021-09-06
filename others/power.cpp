#include <bits/stdc++.h>
using namespace std;

int isPower(int B) 
{
    int A = B;
    int MAXN = A+1;
	cout << "0\n";
    int spf[MAXN];
    cout << "1\n";
    spf[1] = 1; 
    for (int i=2; i<MAXN; i++) 
        spf[i] = i; 
    for (int i=4; i<MAXN; i+=2) 
        spf[i] = 2; 
  
    for (int i=3; i*i<MAXN; i++) 
    { 
        if (spf[i] == i) 
        { 
            for (int j=i*i; j<MAXN; j+=i) 
  
                if (spf[j]==j) 
                    spf[j] = i; 
        } 
    } 
    cout << "2\n";
    if (spf[A] == A) return 0;
    
    vector<int> ret;
    int m = -1;
    while (A != 1) 
    { 
        ret.push_back(spf[A]);
        m++;
        //cout << ret.back() << endl;
        if (m != 0)
        {
            if (ret[m] != ret[m-1])
                return 0;
        }
        A = A / spf[A]; 
    } 
    
    return 1;
}

int main()
{
	cout << isPower(1024000000) << endl;
}
