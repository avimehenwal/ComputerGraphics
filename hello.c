#include <iostream>
#include <math.h>

using namespace std;

int pth (int x)  {
    return 2*x-3;
}

int main()  {
    int i,j,y;
    for (int x=-10;x <= 10;x++)  {
        for ( i=-10;i <= x;i++)  {
            if (i==x) {
                y=pth(x);
                cout<<"x=";
                cout<<x;
                cout<<"y=";
                cout<<y;

                for(j=-10;j<=y;j++) {
                    if(j==y)
                        cout << "*";
                    else
                        cout << " ";
                }
            }
        }
        cout << "\n";
    }
    cin.get();
    return 0;
 }
