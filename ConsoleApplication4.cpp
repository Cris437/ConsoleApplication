

#include <iostream>
using namespace std;
class Rook{

    private:
    int row;
    int col;
    bool isBlack;

    bool validateMovement(int newRow, int newCol)
    {
        if(newRow==row || newCol ==col)
        {
            return true;
        }
        return false;
    }

    public:

    Rook(bool Black,int initialRow, int initialCol){
    isBlack=Black;
    row=initialRow;
    col=initialCol;
    }
    void move(int newRow, int newCol)
    {
        if(newRow<0 || newRow>8 || newCol<0 || newCol>8)
        {
            cout<<"Error: La posicion esta fuera de los limites"<<endl;
            return;
        }
        if (validateMovement(newRow,newCol))
        {
            row=newRow;
            col=newCol;
            cout<<"Movimiento realizado correctamente"<<endl;
        }
        else
        {
            cout<<"Error: La torre no puede moverse en diagonal"<<endl;
        }
    }

}
int main()
{
    cout << "Hello World!\n";
}

