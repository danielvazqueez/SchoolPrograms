#include <iostream>
using namespace std;

void procesa(char cLetra){
if(cLetra == 'a' || cLetra == 'e' || cLetra == 'i' || cLetra == 'o' || cLetra == 'u'){
    cout<<cLetra<<" es una vocal Minuscula, Felicidades!"<<endl;
  }
  else if (cLetra == 'A' || cLetra == 'E' || cLetra == 'I' || cLetra == 'O' || cLetra == 'U'){
    cout<<cLetra<<" es una vocal Mayuscula, Felicidades!"<<endl;
  }
  else {
    cout<<"NO es una vocal"<<endl;
  }

}
int main(){
  char cLetra;

  cout<<"Teclea la letra= ";
  cin>>cLetra;

  procesa(cLetra);

  return 0;
}
