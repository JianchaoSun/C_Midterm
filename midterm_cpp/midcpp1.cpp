#include <iostream>
using namespace std;

class test{
    float *arr;
    int size =0;

public:
    test(int x){
        arr = new float[x];
        size = x;
        for(int i=0;i<size;i++){
            arr[i] = i;
        }
    }
    ~test(){
        delete [] arr;
    }
    void store(float n,int pos){
        arr[pos]= n;
    }
    float getNumber(int pos){
        return arr[pos];
    }
    float high(){
        float high=0;
        for(int i=0;i<size;i++){
            if(high<arr[i]){
                high = arr[i];
            }
        }
        return high;

    }
    float low(){
        float low=arr[0];
        for(int i=0;i<size;i++){
            if(arr[i]<low){
                low = arr[i];
            }
        }
        return low;
    }
    void printArr(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<",";
        }
    }



};
int main() {
    test t(10) ;
    t.printArr();
    cout<<t.getNumber(5)<<endl;
    cout<<"High"<<t.high()<<endl;
    cout<<"Low:"<<t.low()<<endl;
    cout<<"number 5: " <<t.getNumber(5)<<endl;
    t.store(100,3);
    t.printArr();



    return 0;
