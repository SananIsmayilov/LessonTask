#include<iostream>
using namespace std;
int main(){
	cout<<"Xos gelmisiniz \nBurada siz yekun UOMG balinizi hesablaya bilersiniz."<<endl<<"Zehmet olmasa fenn sayinizi daxil edin :"<<endl;
	int subject_count ; // Smestr erzinde kecdiyiniz fenn sayi daxil edilir
	cin>>subject_count;
	
	int final_score[subject_count];//her fenn uzre yekun bal
	int subject_credit[subject_count];//her fenn uzre kredit
	
	double totalscore = 0;//yigdiyiniz balin fen uzre kredite hasili
	double totalcredit = 0; //kredit cemi
	
	for(int i = 0;i<subject_count;i++){
		cout<<"Zehmet olmasa "<<i+1<<" -ci fenn uzre topladiginiz yekun bali daxil edin "<<endl;
		cin>>final_score[i];
		
		cout<<"Zehmet olmasa "<<i+1<<" -ci fenn uzre krediti daxil edin "<<endl;
		cin>>subject_credit[i];
		
		totalscore = totalscore + (final_score[i]*subject_credit[i]);
		totalcredit = totalcredit + subject_credit[i];
		
	}
	double result = totalscore/totalcredit;
	cout.setf(ios::fixed);
	cout.precision(3);
	cout<<"UOMG baliniz : "<<result;
		
}
