#include <iostream>
using namespace std;

const int mr = 100, mc = 100;
void inputBound(int (&mat)[mr][mc], int n, int m)
{

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> mat[i][j];
    }
  }
}

int main(int argc, char** argv)
{


  int mat[mr][mc] = {0};
  int n, m;
  cin >> n >> m;

  inputBound(mat, n, m);

  // write your code here

  int minRow = 0;
  int minCol = 0;
  int maxRow = n-1;
  int maxCol = m-1;
  int count = 0;
  int totalElement = n*m;

  while(count < totalElement){
    for(int i=minRow, j=minCol; i<=maxRow && count < totalElement; i++){
      cout<<mat[i][j]<<"\n";
      count++;
    }
    minCol++;

    for(int i=maxRow, j=minCol; j<=maxCol && count < totalElement; j++){
      count++;
      cout<<mat[i][j]<<"\n";
    }

    maxRow--;

    for(int i=maxRow, j=maxCol; i>=minRow && count < totalElement; i--){
      cout<<mat[i][j]<<"\n";
      count++;
    }

    maxCol--;

    for(int i=minRow, j=maxCol; j>=minCol && count < totalElement; j--){
      cout<<mat[i][j]<<"\n";
      count++;
    }
    minRow++;
  }  
}