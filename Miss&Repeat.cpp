#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cout << "Enter Size of the Matrix: "
cin >> n;
vector<vector<int>> grid(n , vector<int>(n));   # a 2d vector
cout << "Enter size of the matrix: \n";
for(int i = 0; i < n; i++){         # i for ROW
for(int j = 0; j < n; j++{          # j for COLUMN
cin >> grid[i][j];
}
}

int total = n * n;          # calculate total no of elements in the matrix
vector<int> freq(total + 1, 0);         # create a frequency array

# NOW FILL THE FREQUENCY ARRAY -
for(int i = 0; i < n; i++){
for(int j = 0; j < n; j++){
cin >> grid[i[[j]++;
}
}


int repeated = -1, missing = 1;    # define 2 var
  for(int i = 1; i < total; i++){
if(freq[i] == 2)
  repeated = i;
if(freq[i] == 0)
  missing = i;
  }

cout << "Repeated Numbers are:" << repeated<<endl;
cout << "Missing Numbers are:" << missing<<endl;
return 0;
}




