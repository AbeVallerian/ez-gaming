#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand((unsigned int)time(NULL));
    int x = rand();
    int y = rand();
    int result = x + y;
    int z;

    cout << x << endl;
    cout << y << endl;
    cout << "x + y : " << endl;
    cin >> z;

    if(z == result){
        cout << "You're correct!";
    }
    else{
        cout << "Incorrect answer!";
    }

    return 0;
}
