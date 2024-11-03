
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n >> m;
        vector<int> v(n, 0);
        for (auto &i : v)
            cin >> i;

        sort(v.begin(), v.end());
        int maxi = v[n - 1];
        for (int i = 0; i < m; i++)
        {

            char c;
            int l, r;
            cin >> c >> l >> r;

            if (c == '+')
            {

                if (l <= maxi && maxi <= r)
                {

                    maxi = maxi + 1;
                    cout << maxi << " ";
                }else{

                    cout<<maxi<<" ";
                }
            }else{

               
                 if (l <= maxi && maxi <= r)
                {

                    maxi = maxi - 1;
                    cout << maxi << " ";
                }else{

                    cout<<maxi<<" ";
                }


            }
        }

        cout<<endl;
    }

    return 0;
}