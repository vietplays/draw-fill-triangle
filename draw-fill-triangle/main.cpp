//
//  main.cpp
//  draw-fill-triangle
//
//  Created by NGUYEN VAN NGHIA on 3/17/17.
//  Copyright © 2017 vietplays. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int height;
    cout << "Draw a fill triangle with height already\n";
    cout << "Input the height: "; cin >> height;
    
    
    for(int i = 0; i < height; i++){
        for(int j= 0; j <= 2*(height-1); j++){
            if(height - 1 - i <= j && j <= height - 1 + i)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
