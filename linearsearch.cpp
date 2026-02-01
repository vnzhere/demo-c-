#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int searchValue)
{
    for (int i=0; i< size; i++)
    {
        if (searchValue == array[i])
        {
            return i;
        }
    }
    return -1;
}
int main (){

    int a[] = {15, 23, 7, 25, 8, 7 ,16};
    
    int userValue;

    cout << "Enter an integer: " << endl;
    cin >> userValue;

    int result = linearSearch(a, 7, userValue);

    if(result >= 0)
    {
        cout << "The number " << a[result] << " Was found at the element with Index " << result << endl;

    }
    else
    {
        cout << "The Number " << userValue << " Was not found." << endl;

    }
}