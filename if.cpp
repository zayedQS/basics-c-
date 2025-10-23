#include <iostream> 

using namespace std; 
 
int main (){


int grade; 
 
 cout << "enter your grade:  " << '\n'; 
 cin >> grade ; 


 if ( grade >= 80){
cout << "A" << '\n';
 
}else if (grade >= 70 && grade < 80 ){
    cout << "B" << '\n ';
}else if ( grade >=60 && grade < 70 ){
    cout << "C" << '\n';
}else if (grade >=50 && grade < 60){
    cout << "D" << "\n";

}else {
    cout << "F" << '\n';
}

































    return 0;
}