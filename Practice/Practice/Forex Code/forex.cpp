#include<iostream>
#include<iomanip>
using namespace std;

enum{
	STANDARD,
	MINI,
	MICRO
};

int main(){
	cout << "\t\t\**********ONLY FOR FOREX *************\n\n";
	//cout << "Give me Lot size\n Enter\n1 for Standard(100,000)\n2 for Mini(10,000)\n3 for Micro(1,000)\n";
	cout << "Enter the Lot/Contract Size \n[View->Symbols->Right_Click->Properties]\n";
	int lotSize =0;
	double onePipCost =0.0;
	cin >> lotSize;
	switch(lotSize){
		case 1 :
			lotSize = 100000;
			onePipCost = 10;
			break;
		case 2:
			lotSize = 10000;
			onePipCost = 1;
			break;
		case 3:
			lotSize = 1000;
			onePipCost = .1;
			break;
	}
	cout << "Current Equity ?\n";
	double equity;
	cin >> equity;

	cout << "Your Risk % ?\n";
	double riskPercentage,riskAmount;
	cin >> riskPercentage;

	riskAmount = (equity * riskPercentage)/100;
	cout << "riskAmount :" << riskAmount << endl; 

	cout << "You BUYING or Selling ?\n";
	cout << "1. BUYING \t 2. Selling ?\n";
	int orderType;
	cin >> orderType;
	double pips,valueOfPips,numberOfContrace;
	double Price, StopLoss;
	double Difference;
	switch(orderType){
		case 1: 
			cout << "At what price you are buying ?\n";
			cin >> Price;
			cout << "Protective Stop ?\n";
			cin >> StopLoss;

			/******DIFFERENCE B/W Buy Price And Buy Stop Loss***********/
			Difference = Price - StopLoss;
			//cout << "Buy Diff " << Difference << endl;
			pips = lotSize * Difference;
			//cout << "lot Size :" << lotSize << "\tPips : " << pips << endl;
			valueOfPips = pips * onePipCost;
			//cout << "valueOfPips : " << valueOfPips << endl;
			cout.setf(ios::fixed);
			numberOfContrace = 	riskAmount/valueOfPips;
			cout << "Contracts you can Buy : " << setprecision(7) << numberOfContrace << endl; 
			break;
		case 2:
            cout << "At what price you are Selling ?\n";
            cin >> Price;
            cout << "Protective Stop ?\n";
            cin >> StopLoss;

            /******DIFFERENCE B/W Buy Price And Buy Stop Loss***********/
            Difference = StopLoss - Price ;
//            cout << "Buy Diff " << Difference << endl;
            pips = lotSize * Difference;
//            cout << "lot Size :" << lotSize << "\tPips : " << pips << endl;
            valueOfPips = pips * onePipCost;
//            cout << "valueOfPips : " << valueOfPips << endl;
			cout.setf(ios::fixed);
            numberOfContrace =  riskAmount/valueOfPips;
            cout << "Contracts you can Sell : " << setprecision(7) << numberOfContrace << endl;
			break;
	}

	system("pause");
}
