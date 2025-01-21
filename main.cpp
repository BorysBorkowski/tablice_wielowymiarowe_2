#include <iostream>

using namespace std;

int main()
{
    int tablica[3][5] = {{0, 0, 0, 0, 0},
                         {0, 0, 0, 0, 0},
                         {0, 0, 0, 0, 0}};
    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<=4; j++)
        {
        cout<<tablica[i][j];
        }
        cout<<endl;
    }
    return 0;
}
