#include <iostream>

using namespace std;

int main (){
  int num;
  cin >> num;
  int summ = 0;
  if (num < 0){
    cout << "Incorrect meaning" << endl;
  } else {
    for (int i = 0; i < num; ++i){
      summ += i;
    }
  }
  cout << "Total summ: " << summ << endl;
}
