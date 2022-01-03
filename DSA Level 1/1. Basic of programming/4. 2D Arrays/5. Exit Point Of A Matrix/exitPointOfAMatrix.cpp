#include <iostream>
using namespace std;


const int mr = 100, mc = 100;

int** input(int** mat, int n, int m)
{
  mat = new int* [n];
  for (int i = 0; i < n; i++)
  {
    int* arr = new int[m];
    for (int j = 0; j < m; j++)
    {
      cin >> arr[j];
    }
    mat[i] = arr;
  }
  return mat;
}


int main(int argc, char** argv)
{
  int n, m;
  cin >> n >> m;
  int** mat = input(mat, n, m);

  // write your code here 

    int minRow = 0;
    int minCol = 0;
    int maxRow = n-1;
    int maxCol = m-1;

    int i=0;
    int j=0;
    char dir = 'R';

    while(true){
        if(mat[i][j]==1){
            if(dir == 'R'){
                dir = 'B';
            }else if(dir == 'B'){
                dir = 'L';
            }else if(dir == 'L'){
                dir = 'T';
            }else if(dir == 'T'){
                dir = 'R';
            }
        }

        if(dir == 'R'){
            j++;
            if(j>maxCol){
                j--;
                break;
            }
        }else if(dir == 'B'){
            i++;
            if(i>maxRow){
                i--;
                break;
            }
        }else if(dir == 'L'){
            j--;
            if(j<minCol){
                j++;
                break;
            }
        }else if(dir == 'T'){
            i--;
            if(i<minRow){
                i++;
                break;
            }
        }
    }
    cout<<i<<"\n"<<j;
  
    return 0;
}