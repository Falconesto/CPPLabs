#include <iostream>

template <class T>
T MaximumOutOfThree(T a, T b, T c){
    if(T==std::string){
        T maximum = a;
        int sizeA= sizeof(a);
        int sizeB= sizeof(b);
        int sizeC= sizeof(c);
        int max=sizeA;
        if (max < sizeB)
            max = sizeB;
        if (max < sizeC)
            max = sizeC;
        if(max==sizeA){
            return a;
        }else{
            if(max==sizeB){
                return b;
            }else{
                if(max==sizeC){
                    return c;
                }
            }
        }
    }
    T maximum = a;
    if (maximum < b)
        maximum = b;
    if (maximum < c)
        maximum = c;
    return maximum;
}


int main() {
    int a=5;
    int b=10;
    int c=7;
    int res= MaximumOutOfThree(a, b, c);
    std::cout<< res;
}