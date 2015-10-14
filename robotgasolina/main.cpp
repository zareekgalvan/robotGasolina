//
//  main.cpp
//  robotgasolina
//
//  Created by Zareek Galvan on 9/12/15.
//  Copyright (c) 2015 Trisquel Labs. All rights reserved.
//

#include <iostream>
using namespace std;

int matriz[100][100];

int gasolina(int x, int y, int n, int m)
{
    if (x<n && y<m)
    {
        if (matriz[x][y+1] < matriz[x+1][y])
        {
            return matriz[x][y] + gasolina(x, y+1, n, m);
        }
        return matriz[x][y] + gasolina(x+1, y, n, m);
    }
    return matriz[n-1][m-1];
}

int main()
{
    int n,m;
    cin >> n >> m;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cin >> matriz[i][j];
        }
    }
//    cout << endl;
//    for (int i=0; i<n; i++)
//    {
//        for (int j=0; j<m; j++)
//        {
//            cout << matriz[i][j] << " ";
//        }
//        cout << endl;
//    }
    cout << gasolina(0, 0, n, m) << endl;
}