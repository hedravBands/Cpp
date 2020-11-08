#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
    // variable declarations
    int T, N, B, nB; // nTestCases, nHouses, Budget, numberBought
    int t, n, p; // counters, swap
    
    cin >> T;
    int output[T]; // array with outputs
    
    // T cases to be evaluated
    for (t = 0; t < T; t++)
    {
        cin >> N;
        cin >> B;
        nB = 0; // reset number of houses bought
       
        int house[N]; // array with N prices 0 each house
             

        // receive each testCase t with n houses each
        for (n = 0; n < N; n++)
        {
            cin >> house[n];
        } // end for N

        //sort house[n]
        sort(house, house + N);
        
        // start to buy
        for (n = 0; n < N; n++)
        {
            if (house[n] <= B)
            {
                nB++;
                B -= house[n];  // buy; reduce budget
                
            } else {break;}
        }
        
        // log output
        output[t] = nB;
        
        
    
    } // end for T
    
    //print output
    for (t = 0; t < T; t++){
        cout << "Case #" << t+1 << ": " << output[t] << endl; //clear  array?
    }
} // end main
