#include <iostream>
using namespace std;

void printArray(int * A,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<A[i];
    }
    
}
void Insertionsort(int *A, int size){
    int key;
    int j;
    for (int i = 1;i < size; i++)
    {
        key=A[i];
        j=i-1;
        while(j>=0 && A[j]>key ){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;

    }
    
    
}

int main(){
int A[]={5,2,7,8,9,1};
int size=sizeof(A)/sizeof(A[0]);
cout<<"Before Sorting"<<endl;
printArray(A,size);
cout<<"After Sorting"<<endl;
Insertionsort(A,size);
printArray(A,size);

}