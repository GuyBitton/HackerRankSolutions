#include <iostream>
#include <iomanip>
using namespace std;

class Box {

    private:
        int l; //box lenth
        int b; //box breadth
        int h; //box height


    public:
        Box():l(0),b(0),h(0){}; //default constructor
        Box(int l_in, int b_in,int h_in){l=l_in; b=b_in; h=h_in;} //constructor for 3 inputs
        Box(Box &bx){ l=bx.l; b=bx.b;h=bx.h;} //copy constructor

        int getLength(){return l;} //length getter
        int getBreadth(){return b;} //breadth getter
        int getHeight(){return h;} //height getter

        long long CalculateVolume(){//member function to calculate box volutme
            
            long long vol{l};
            vol*=b;
            vol*=h;
            return vol;} 

        //Overloading the '<' operator
        bool operator<(const Box &B){
            if (l<B.l){return true;}
            else if (l==B.l & b<B.b){return true;}
            else if (l==B.l & b==B.b & h<B.h){return true;}
            else{return false;}
        }

        friend ostream& operator<<(ostream& output,const Box& B){
        output<<B.l<<" "<<B.b<<" "<<B.h;
        return output;
        }

};



