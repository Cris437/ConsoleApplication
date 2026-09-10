

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
    string draw()
    {
        if(isBlack)
        {
            return "[##]";
        }
        else
        {
            return "[TT]";
        }
    }
    void printState()
    {
        if(isBlack)
        {
            cout << "[##] Black at Row: " << row
                 << ", Col: " << col << endl;
        }
        else
        {
            cout << "[TT] White at Row: " << row
                 << ", Col: " << col << endl;
        }
    }
}
int main()
{
    Rook TorreBlanca(false,1,1);
    Rook TorreNegra(true,8,8);

    TorreBlanca.printState();
    TorreNegra.printState();
    int fila, columna;
    cout<<"Ingrese la fila a la que desea mover la torre blanca (1-8): ";
    cin>>fila;
    cout<<"Ingrese la columna a la que desea mover la torre blanca (1-8): ";
    cin>>columna;
    TorreBlanca.move(fila,columna);
    cout<<endl;
    TorreBlanca.printState();
    
    cout<<endl;
    cout<<"Ingrese la fila a la que desea mover la torre negra (1-8): ";
    cin>>fila;
    cout<<"Ingrese la columna a la que desea mover la torre negra (1-8): ";
    cin>>columna;
    TorreNegra.move(fila,columna);
    cout<<endl;
    TorreNegra.printState();
    return 0;

}

