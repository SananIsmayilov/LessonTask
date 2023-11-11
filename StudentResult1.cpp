#include<iostream>
using namespace std;
 
int main(){
	cout<<"Fenn sayinizi daha sonra ise fenler uzre balinizi daxil ederek teqaudunuzu hesablaya bilersiniz. \nFenn sayinizi daxil edin : "<<endl;
	int subject_count,A_count=0,C_count=0,DE_count=0,fraction_count=0; // fenn sayi ve A B D F E qiymetlerin sayi
	cin>>subject_count;
	
	int subject_point[subject_count];//fenler uzre ballarin saxlandigi massiv
	for(int i=0;i<subject_count;i++){
		cout<<i+1<<" -ci fen uzre topladiginiz bali daxil edin : "<<endl;
		cin>>subject_point[i];
		if(subject_point[i]>=91){
			A_count++;
		}else if(subject_point[i]>=71){
			C_count++;
		}else if(subject_point[i]>=51){
		DE_count++;
		}else {
			fraction_count++;
		}
	}
	
	if(fraction_count == 0){ // eger kesr yoxdursa teqaud teyin olunur
		if(	DE_count > 0){
				cout<<"Siz adi teqaud alacaqsiniz";//eger minimum bir eded D veya E qiymetiniz varsa adi teqaud
		}else {
			if(C_count > 0){ 
				if(A_count == 0){ //eger yalniz C qiymetiniz varsa adi teqaud
					cout<<"Siz adi teqaud alacaqsiniz";
				}else { // eger C ve minimum 1 eded A qiymetiniz varsa zerbeci teqaud
						cout<<"Siz zerbeci teqaudu alacaqsiniz";
				}
			}else { // eger butun qiymet A olarsa zerbeci teqaudu alirsiniz
				cout<<"Siz elaci teqaudu alacaqsiniz";
			}
		}
	}else { // kesr halinda teqaud ala bilmezsiniz
		cout<<"Siz teqaud ala bilmezsiniz";
	}
	
	
	
	
	
	
	
	
	return 0;
}
