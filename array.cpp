
#define ARR 
#include<iostream>
#include"array.hpp"
using namespace std;


//in the command line first number imput is number of dimensions then space, second number is number of rows 
int main(int argc, char *argv[]){
    int dimensions = atoi(argv[1]);
    int numrows = atoi(argv[2]);
    if (numrows == 0 || dimensions == 0){
        cout<<"Not what we are looking for, but be well "<<endl;
    }
//this is if you want to print out a 100 0's 
    //int arr[100] = {0};
    // printArray1D(arr, 100);
    
    if (dimensions == 1){
        int arr1[numrows] = {};
        cout<<"enter "<<numrows<<" integers";
        for(int i=0; i<numrows; i++)
            cin>>arr1[i];
        printArray1D(arr1, numrows);
    }else if(dimensions== 2){
//if 2d array input an array of numbers and rearange it into a 2d array
        int arr2[numrows][dim2] = {{},{}};
        cout<<"enter "<<numrows*dim2<<" integers"<<endl;
        for(int j=0; j<numrows; j++){
                for(int i=0; i<dim2; i++){
                    cin>>arr2[j][i];
                }
        }
        printArray2D(arr2, numrows);

    }else{
//if wrong imput
        cout<<"please enter 0, 1 or 2 dimensions"<<endl;
    }
return 0;
}
void printArray1D(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void printArray2D(int arr[][dim2], int size){
    for (int j=0; j<size; j++){
        printArray1D(arr[j], dim2);

    }
}
void printArray3D(int arr[][dim2][dim3], int size);
void printArray4D(int arr[][dim2][dim3][dim4], int size);
