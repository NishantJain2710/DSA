#include<iostream>
#include<conio.h>
using namespace std;

int isEven(int number){
    if(number%2==0){
        return true;
    }else{
        return false;
    }
}

int numOfRings(float row, float col){
    if(row >= col){
        float number = col/2;
        if(number > (int)number){
            return ((int)number + 1);
        }else{
            return (int)number;
        }
    }else{
        float number = row/2;
        if(number > (int)number){
            return ((int)number + 1);
        }else{
            return (int)number;
        }
    }
}

int main(){
    int row;
    int col;
    // float n;
    int rings;
    int r;
    int s;

    cin>>row;
    cin>>col;
    // int arr[row][col];

    // for(int i=0; i<row; i++){
    //     for(int j=0;j<col; j++){
    //         cin>>arr[i][j];
    //     }
    // }
    cin>>s;
    cin>>r;

    // int smallestRowInd = s-1; //1
    // int smallestColInd = s-1; //1
    // int largestRowInd = row - 1 - smallestRowInd; //3
    // int largestColInd = col - 1 - smallestColInd; //5


    rings = numOfRings(row, col);
    int noOfElements = 0;

    if(!isEven(row) && !isEven(col) && s == rings){
        if(row <= col){
            noOfElements = row - (2*(s-1));
        }else{
            noOfElements = col - (2*(s-1));
        }
    }else{
        noOfElements = (2*((row-(s-1)*2) + (col - (s-1)*2))) - 4;
    }

    if(r >= noOfElements){
        r = r % noOfElements;
    }else if(r < 0){
        if((-1*r) > noOfElements){
            r = noOfElements + r;

            if(r%noOfElements > 1){
                r = r % noOfElements;
            }
        }else{
             r = noOfElements + r;
        }
    }      
        
    //         //-ve
    //         if((-1 * r) > noOfElements){
    //             r = noOfElements + r;
    //             if(r%noOfElements > 1){
    //                 r = r % noOfElements;
    //             }
    //         }
        
    // }
    
    cout<<"\n"<<noOfElements<<"\n";
    cout<<"\n"<<r<<"\n";

    // for( int rotation=0; rotation<r;rotation++){
    //     for(int i=smallestColInd; i<largestColInd; i++){
    //         int temp = arr[smallestRowInd][i];
    //         arr[smallestRowInd][i] = arr[smallestRowInd][i+1];
    //         arr[smallestRowInd][i+1] = temp;
    //     }
    //     for(int i=smallestRowInd; i<largestRowInd;i++){
    //         int temp = arr[i][largestColInd];
    //         arr[i][largestColInd] = arr[i+1][largestColInd];
    //         arr[i+1][largestColInd] = temp;
    //     }
    //     for(int i=largestColInd; i>smallestColInd;i--){
    //         int temp = arr[largestRowInd][i];
    //         arr[largestRowInd][i] = arr[largestRowInd][i-1];
    //         arr[largestRowInd][i-1] = temp;
    //     }
    //     for(int i=largestRowInd; i>smallestRowInd+1;i--){
    //         int temp = arr[i][smallestColInd];
    //         arr[i][smallestColInd] = arr[i-1][smallestColInd];
    //         arr[i-1][smallestColInd] = temp;
    //     }
    // }
    // for(int i=0; i<row; i++){
    //     for(int j=0;j<col; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    getch();
    return 0;
}