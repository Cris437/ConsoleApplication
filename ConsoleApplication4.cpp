

#include <iostream>
using namespace std;
class Rook{
    private:
    int row;
    int col;
    bool isBlack;
    public:
    Rook(bool Black,int initialRow, int initialCol){
    isBlack=Black;
    row=initialRow;
    col=initialCol;
    }
    
}
int main()
{
    cout << "Hello World!\n";
}

