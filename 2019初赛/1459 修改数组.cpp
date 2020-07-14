#include<set>
#include<iostream>
#include<string.h>
using namespace std;
set<int> s;
int main()
{

    int n;
    int a[100000];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        while(s.count(a[i]) ==1)//如果s中有这个数
        {
            a[i]++;//有这个数就+1
        }
        s.insert(a[i]);
        cout << a[i] << " ";
    }

    return 0;
}
