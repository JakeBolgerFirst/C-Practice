#include <iostream>

using namespace std;

int main(){
    
    char vowels [] {'a', 'e', 'o', 'i', 'u'};
    cout << "First vowel is " << vowels[0] << endl;
    
    //multidimensional
    //
    int movie_rating [3][4]{
        {0, 4, 3, 6},
        {2, 3, 6, 7},
        {3, 7, 5, 8}
    };
    
    
    cout << "First rating is " << movie_rating[0][0] << endl;
    cout << "Second rating is " << movie_rating[0][1] << endl;
    cout << "last rating is " << movie_rating[2][3] << endl;
}
