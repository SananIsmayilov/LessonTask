#include<iostream>
#include <unistd.h>
using namespace std;

int main(){
	cout<<" Xos geldiniz ... \n Zehmet olmasa emeliyyati secin : \n 1 - Nagd pul 2 - Pin kodu deyisme ";
	int operation_number = 0 , card_pin = 2345; // emeliyyat nomresi ve s.
	double amount = 430; // balans deyiseniniz double olmalidir !!!
	cout<<endl;
	cin>>operation_number;
	if(operation_number == 1){
		double temp_amount;
		cout<<" Cixarmaq istediyiniz meblegi daxil edin ."<<endl;//istifadeciden mebleg istenir
		cin>>temp_amount;
		if(temp_amount>amount){
			cout<<" Balansinizda mebleg azdir . "; //balans az olduqda bu blok calisir 
		}else {
			amount = amount - temp_amount;// balans kifayet olduqda mebleg cixilir.
			cout<<" Emeliyyat bitdi \n Balansiniz : "<<amount<<endl;
			sleep(3); // sleep funksiyasi daxilinde yazilan qeder saniye gozleyir sonra asagidaki kodlar icra olunur.
			cout<<" Zehmet olmasa pulu ve kartiniz goturun."<<endl;
		}
	}else if(operation_number == 2){
		int temp_cardpin;
		cout<<" Yeni pin kodunuzu daxil edin."<<endl;
		cin>>temp_cardpin; // yeni Kart Pini ucun muveqqeti deyisen yaradiriq
		if(temp_cardpin>=1000 && temp_cardpin <10000){ // eslinde burada string daha dogru olardi cunki pin kod 0000 ola biler , amma string kecilmeyib.
			card_pin = temp_cardpin;
			cout<<" Pid kodunuz ugurla deyisildi.";
		}else {
		cout<<" Pin kod 4 reqemli olmalidir!";
		}
	}else {
		cout<<" Dogru emeliyyati secin !";
	}
	
	
}
