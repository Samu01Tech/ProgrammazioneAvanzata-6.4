#include <iostream>
#include <stdexcept>
using namespace std;

class Dati{
    private:
        int valueI;
        float valueF;
    public: 
        Dati(int vi, float vf){
            if(vi < 0) throw invalid_argument("❌ vi < 0");
            valueI = vi; valueF = vf;
        }
};

class Test{
    private: 
        int valueT;
        Dati dato;
    public: 
        Test(int vi, float vf, int vt):dato(vi, vf){
            try{
                valueT = vt;
            } catch(...){
                cout << "ERR GEN" << endl;
            }
        }
};

int main() {
    try{
        Test t(-2, 3.14, 9);
    }catch(...){
        cout << "❌ ERRORE" <<  endl;
    }
    return 0;
} 