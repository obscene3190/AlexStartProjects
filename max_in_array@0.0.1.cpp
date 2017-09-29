#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    for( string string; getline(cin, string); ) {
        int numbers[ 10 ];
        istringstream stream( string );
        bool failure = false;
        for( int i = 0; i < 10; ++i ) {
            if( !( stream >> numbers[ i ] ) ) {
                failure = true;
                break;
                }
            }
        if( !failure ) {
            for( int i = 0; i < 10; ++i ) {
                cout << numbers[ i ] << " ";
                }
            }
        else {
            std::cout << "An error has occured while reading numbers from line" << endl;
            }
        int max = numbers[0];
        for(int i = 0; i< 10; i++) {
            if(numbers[i]>max) max=numbers[i];
        }
        cout<<endl<<max;
        }
}
