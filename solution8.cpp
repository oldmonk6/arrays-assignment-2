#include<iostream>
using namespace std;

double getAverage(int arr[], int size);//functionn not defined
int main () {
int balance[5] = {1000, 2, 3, 17, 50};
double avg;
avg = getAverage( balance[0], 5 ) ;//value is being passed instead of address
cout << "Average value is: " << avg << endl;
return 0;
}
