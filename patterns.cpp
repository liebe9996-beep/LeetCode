// #include<iostream>
// using namespace std ;
// int main (){
//     int l,b ;
//     cin >>l >> b ;
// for (int i=0 ; i <l ; i++) {
//     for (int j=0 ; j <b; j++ ){
//         cout << " *" ;
//     }
//     cout << endl ;
// }
// }
// #include <iostream>
// using namespace std ;
// int main (){
//     for ( int i = 0 )
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int rows = 3;
//     int cols = 5;

//     vector<vector<char>> grid(rows, vector<char>(cols, '*'));

//     // Column-first logic
//     for (int c = 0; c < cols; c++) {
//         for (int r = 0; r < rows; r++) {
//             grid[r][c] = '*';
//         }
//     }

//     // Now print normally (row-wise)
//     for (int r = 0; r < rows; r++) {
//         for (int c = 0; c < cols; c++) {
//             cout << grid[r][c] << " ";
//         }
//         cout << endl;
//     }
// }

// SQUARE :- 
// #include<iostream>
// using namespace std ;
// int main (){
//     int n ;
//     cin >> n ;
//     for (int i = 0 ; i < n ; i++ ){
//         for (int j = 0 ;j < n ; j++ ){
//             cout << "* " ;

//         }
//     cout << endl ;

//     }
// }


// #include <iostream>
// using namespace std ;
// int main (){
// int rowcount ;
// int colcount ;
// cin >> rowcount >> colcount ;

//     for(int row = 0 ; row <rowcount ; row++ ){
//         if (row==0 || row == rowcount-1 ){
//             for (int col=0 ;col < colcount ; col++ ){
//                 cout << "* " ;

//             }
//         }
//         else {
//             cout << "* " ;
//             for (int i=0 ; i < colcount-2 ; i++){
//                 cout <<"  " ;
//             }
//             cout << "* " ;
//         }
    
        
//         cout << endl ;

//     }



// }

// #include<iostream>
// using namespace std ;
// int main (){
//     int n ;
//     cin >> n ;
//     for (int row =0 ; row<n ; row ++){
//         for (int col=0 ; col < row +1 ; col ++ ){
//             cout << "* ";

//         }
//     cout << endl ; 
//     }
    
// }

// #include<iostream>
// using namespace std ;
// int main (){
//     int n ;
//     cin >> n ;
//     for (int row =0 ; row < n ; row ++ ){
//         for (int col=0 ;col < n - row ; col ++ ){
//             cout <<  "* ";
//         }
//     cout << endl ;
//     }
// }

// #include<iostream>
// using namespace std ;
// int main (){
//     int n ;
//     cin >> n ;
//     for (int row =0 ; row < n ; row ++ ){
//         for (int col=0 ;col < n - row ; col ++ ){
//             cout << col+1  ;
//         }
//     cout << endl ;
//     }
// }

// #include<iostream>
// using namespace std ;
// int main (){
//     int nb ;
//     cin >> n ;
//     for (int row = 0 ; row < n ; row ++ ){
//         for (int col= 0 ; col < row + 1 ; col ++ ){
//             cout << col + 1 << " " ;
//         }
//         cout << endl ;
//     }
// }


// #include<iostream>
// using namespace std ;
// int main(){
//     int n ;
//     if (cin >> n ) {
//         cout << " new ";
//     }





// }

// if (cout << "babbar "){
//     cout << "love "; 
// }

// #include<iostream>
// using namespace  std;
// int main (){
//     for (int row = 1 ; row < 6 ; row ++ ){
//         for (int col= 1 ; col<row + 1 ; col++ ){
//             cout << col+1 ;
//         }
//         cout << endl ;
//     }
// }





// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         // spaces
//         for (int s = 1; s <= n - i; s++) {
//             cout << " ";
//         }

//         // stars
//         for (int j = 1; j <= 2 * i - 1; j++) {
//             cout << "*";
//         }

//         cout << endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std ;
// int main (){
//     int n ;
//     cin >> n ;
//     for (int row =0 ; row < n ; row ++ ){
//         // space 
//         for (int col=0 ;col < n +row ; col ++ ){
//             cout <<  " ";
//         }
//      // star 
//      for (int i= 0 ; i < row ; i++ ){
//         cout << "* " ;
//      }
//     cout << endl ;
//     }

       
// }

// #include<iostream>
// using namespace std ;
// int main(){
//     int n ;
//     cin >> n ; 
//     for (int row = 0 ; row< n ; row ++ ){
//         for (int col =0; col < n ; col++){
//             cout << row  +1 ;
//         }
//         cout << endl ; 
//     }
// }



#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 0; row < n; row++) {

        if (row == 0 || row == n - 1) {
            for (int col = 0; col < n; col++) {
                cout << "* ";
            }
        }
        else {
            cout << "* ";
            for (int col = 0; col < n - 2; col++) {
                cout << "  ";
            }
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
