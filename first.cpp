#include <iostream>

using namespace std;

void subtotal ( float number[], int cell ){

    for ( int i = 0; i < cell; i++) {
            number[i] += number[i-1];
        }

    cout << "The sum of numbers: "<<endl;
    for ( int j = 0; j < cell; j++ ){
        cout << number[j]<< "\t";
    }
}

int main()
{
    int s = 0;

    cout << "How many numbers do you want to enter: ";
    cin >> s;

    float number[s];

    if ( s > 0){
        cout << "Enter the numbers: " << endl;
        for ( int n = 0; n < s; n++ ){
            cin >> number[n];
        }
        subtotal (number,s);
    }else {
        cout << "0";
    }
    return 0;
}
