#include<iostream>
using namespace std;

int main(){
    // It is data structure which stores a collection of items.
    int array[]  = {2,3,4,5,6};
    cout<<array[2]<<endl;
   
  int size =  sizeof(array)/sizeof(array[0]);
  // for loop
    for(int idx=0;idx<size;idx++){
        cout<<array[idx]<<endl;
    }
    // memory allocation in array is contiguous. Means memory is located in consecutive blocks of memory.
    // array is of two types. i.e single dimensional aaray and multidimensional aaray
    // Transversing through the Array
    // For llop
    // For each loop
    // While loop

    int array1[] = {1,2,3,4,5};
    int size1 = sizeof(array1)/sizeof(array1[0]);
    for(int ele:array1){   // For Each Loop
        cout<<ele<<endl;
    }
    int array2[] = {9,8,7,6,5};
    int size2 = sizeof(array2)/sizeof(array2[0]);
    int idx1 = 0;
    while(idx1<size2){
        cout<<array2[idx1]<<endl;
        idx1++;
    }
    // Take array from users.
    char vowels[5];
    
    for(int index=0;index<5;index++){
        cin>>vowels[index];
    }
    for(int index=0;index<5;index++){
        cout<<vowels[index];
    }
    char vowels[5];
    for(char &element:vowels){
        cin>>element;
    }
    for(int index1=0; index1<5;index1++){
        cout<<vowels[index1]<<" ";
    }
    // Calculate the sum of all the elements in the given array.
    int myarray[5] = {1,2,3,4,5};
    int sum=0;
    int mysize = sizeof(myarray)/sizeof(myarray[0]);
    for(int i=0; i<mysize;i++){
        sum+=myarray[i];
    }
    cout<<sum<<endl;
    // Find the maximum value in the array.
}
