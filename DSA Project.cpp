#include<iostream>
#include<string>
using namespace std;


class shahidafridi{
	
	public:
		void afridi_bat_ODI();            //shahidafridi class
		void afridi_bat_T20();
		void afridi_bat_Test();
		void afridi_bowl_ODI();
		void afridi_bowl_T20();
		void afridi_bowl_Test();
};

class babarazam{                          //babarazam class

	public:
		void babar_ODI();                 
		void babar_T20();
		void babar_Test();
};

class shoaibakhtar{                       //shoaibakhtar class
	public:
		void shoaibakhtar_ODI();
		void shoaibakhtar_T20();
		void shoaibakhtar_Test();	
};


void shahidafridi::afridi_bat_ODI(){                   //shahidafridi batting career ODI

	cout<<"Matches Played : 398 "<<endl;
	cout<<"Total Innings : 369 "<<endl;
	cout<<"Total Runs : 8064 "<<endl;
	cout<<"Number of Centuries : 6 "<<endl;
	cout<<"Number of Fifties  : 39 "<<endl;
	cout<<"Number of 6's : 351 "<<endl;
	cout<<"Number of 4's : 730 "<<endl;
	cout<<"Average : 23.6 "<<endl;
	cout<<"Strike Rate : 117.00 "<<endl;

}

void shahidafridi::afridi_bat_T20(){                //shahidafridi batting career T20

	cout<<"Matches Played : 99 "<<endl;
	cout<<"Total Innings : 91 "<<endl;
	cout<<"Total Runs : 1416 "<<endl;
	cout<<"Number of Centuries : 0 "<<endl;
	cout<<"Number of Fifties  : 4 "<<endl;
	cout<<"Number of 6's  : 73 "<<endl;
	cout<<"Number of 4's  : 103 "<<endl;
	cout<<"Average : 17.9 "<<endl;
	cout<<"Strike Rate : 159.0 "<<endl;

}

void shahidafridi::afridi_bat_Test(){              //shahidafridi batting career Test

	cout<<"Matches Played : 27 "<<endl;
	cout<<"Total Innings : 48 "<<endl;
	cout<<"Total Runs : 1716 "<<endl;
	cout<<"Number of Centuries : 5 "<<endl;
	cout<<"Number of Fifties  : 8 "<<endl;
	cout<<"Number of 6's  : 52 "<<endl;
	cout<<"Number of 4's  : 220 "<<endl;
	cout<<"Average : 36.5 "<<endl;
	cout<<"Strike Rate : 87.00 "<<endl;


}

void shahidafridi::afridi_bowl_ODI(){            //shahidafridi batting career ODI

	cout<<"Matches Played : 398 "<<endl;
	cout<<"Total Innings : 372 "<<endl;
	cout<<"Runs Given : 13632 "<<endl;
	cout<<"Wickets Taken : 395 "<<endl;
	cout<<"Average : 34.5 "<<endl;
	cout<<"Strike Rate : 44.7 "<<endl;


}

void shahidafridi::afridi_bowl_T20(){            //shahidafridi batting career T20

	cout<<"Matches Played : 99 "<<endl;
	cout<<"Total Innings : 97 "<<endl;
	cout<<"Runs Given : 2396 "<<endl;
	cout<<"Wickets Taken : 98 "<<endl;
	cout<<"Average : 24.4 "<<endl;
	cout<<"Strike Rate : 22.1 "<<endl;
}

void shahidafridi::afridi_bowl_Test(){             //shahidafridi batting career Test

	cout<<"Matches Played : 27 "<<endl;
	cout<<"Total Innings : 47 "<<endl;
	cout<<"Runs Given : 1709 "<<endl;
	cout<<"Wickets Taken : 48 "<<endl;
	cout<<"Average : 35.6 "<<endl;
	cout<<"Strike Rate : 66.5 "<<endl;
}

void babarazam::babar_ODI(){                       //babar batting career ODI

	cout<<"Matches Played : 80 "<<endl;
	cout<<"Total Innings : 78 "<<endl;
	cout<<"Total Runs : 3808 "<<endl;
	cout<<"Number of Centuries : 13 "<<endl;
	cout<<"Number of Fifties : 17 "<<endl;
	cout<<"Number of 6's  : 37 "<<endl;
	cout<<"Number of 4's  : 342 "<<endl;
	cout<<"Average : 56.8 "<<endl;
	cout<<"Strike Rate : 88.7 "<<endl;

}

void babarazam::babar_T20(){                       //babar batting career T20

	cout<<"Matches Played : 54 "<<endl;
	cout<<"Total Innings : 52 "<<endl;
	cout<<"Total Runs : 2035 "<<endl;
	cout<<"Number of Centuries : 1 "<<endl;
	cout<<"Number of Fifties  : 18 "<<endl;
	cout<<"Number of 6's : 28"<<endl;
	cout<<"Number of 4's : 215 "<<endl;
	cout<<"Average :  47.3 "<<endl;
	cout<<"Strike Rate : 129.7 "<<endl;

}

void babarazam::babar_Test(){                     //babar batting career Test

	cout<<"Matches Played : 33 "<<endl;
	cout<<"Total Innings : 59 "<<endl;
	cout<<"Total Runs : 2169 "<<endl;
	cout<<"Number of Centuries : 5 "<<endl;
	cout<<"Number of Fifties  : 16 "<<endl;
	cout<<"Number of 6's  : 10 "<<endl;
	cout<<"Number of 4's  : 258 "<<endl;
	cout<<"Average : 42.5 "<<endl;
	cout<<"Strike Rate : 56.4 "<<endl;

}
 
void shoaibakhtar::shoaibakhtar_ODI(){             //shoaibakhtar bowling career ODI

	cout<<"Matches Played : 163 "<<endl;
	cout<<"Total Innings : 162 "<<endl;
	cout<<"Wickets Taken : 247 "<<endl;
	cout<<"Maiden Overs : 99 "<<endl;
	cout<<"Runs Given : 6169 "<<endl;
	cout<<"4W in Single Match : 6 "<<endl;
	cout<<"5W in Single Match : 4 "<<endl;
	cout<<"Strike Rate : 31.4 "<<endl;
	cout<<"Average : 25.0 "<<endl;
}

void shoaibakhtar::shoaibakhtar_T20(){           //shoaibakhtar bowling career T20

	cout<<"Matches Played : 15 "<<endl;
	cout<<"Total Innings : 15 "<<endl;
	cout<<"Wickets Taken : 19 "<<endl;
	cout<<"Maiden Overs : 3 "<<endl;
	cout<<"Runs Given : 432 "<<endl;
	cout<<"4W in Single Match : 0"<<endl;
	cout<<"5W in Single Match : 0"<<endl;
	cout<<"Strike Rate : 16.7 "<<endl;
	cout<<"Average : 22.7 "<<endl;
}

void shoaibakhtar::shoaibakhtar_Test(){         //shoaibakhtar bowling career Test

	cout<<"Matches Played : 46 "<<endl;
	cout<<"Total Innings : 82 "<<endl;
	cout<<"Wickets Taken : 178 "<<endl;
	cout<<"Maiden Overs : 236 "<<endl;	
	cout<<"Runs Given : 4574 "<<endl;
	cout<<"4W in Single Match : 10 "<<endl;
	cout<<"5W in Single Match : 12 "<<endl;
	cout<<"Strike Rate : 45.7 "<<endl;
	cout<<"Average : 25.7 "<<endl;
}

class addnew{
	
	private:
		string name,mainrole,batingstyle,bowlingstyle;
		int age,totalm;
		double height;
		
public:
string addbiodata(){
	
system("cls");
	cout<<"Enter Name of the Player : ";
	cin>>name;
	cout<<"Enter Age of the Player : ";
	cin>>age;
	cout<<"Enter Height of the Player : ";
	cin>>height;
	cout<<"Enter Player's Main Role in Team : ";
	cin>>mainrole;
	cout<<"Enter Player's Bating Style : ";
	cin>>batingstyle;
	cout<<"Enter Player's Bowling Style : ";
	cin>>bowlingstyle;
	cout<<"Enter Total Matches Played : ";
	cin>>totalm;
	return name;

}

void display(){
	
	system("cls");
	cout<<"Personal Information : \n\n";
	cout<<"--------------------------------\n";
	cout<<"Full Name : "<<name<<"\n";
	cout<<"Age : "<<age<<endl;
    cout<<"Total Innings : "<<totalm<<"\n";
    cout<<"Height : "<<height<<"\n";
	cout<<"Main Role : "<<mainrole<<endl;
	cout<<"Batting Style : "<<batingstyle<<endl;
	cout<<"Bowling Style : "<<bowlingstyle<<endl;
	cout<<"--------------------------------\n\n\n";	
}	
};

int main(){
	
	shahidafridi sa;
	babarazam ba;
	shoaibakhtar sak;
	addnew aa;
	string s1;
	string name;
	
	int ch;
	while(1){
	cout<<"Press 1-> For Searching\n";
	cout<<"Press 2-> For Adding New Record\n";
	cout<<"Press 3-> To Exit\n";
	cin>>ch;
	switch(ch)
	{
	case 1:
	{
		string name;
cout<<"\t\tPlayers Career Management"<<endl<<endl<<endl;
cout<<"\t\tEnter The Player Name to Search :"<<endl;
cin>>name;
if(name=="shahidafridi"){
	system("cls");
		
	cout<<"Personal information : \n\n";
	cout<<"--------------------------------\n";
	cout<<"Full Name : Sahibzada Mohammad Shahid Khan Afridi\n";
	cout<<"Nickname : Laala - Boom Boom\n";
    cout<<"Debut v/s India : 1994\n";
    cout<<"Height: 5ft 10 inches\n";
	cout<<"Main Role : All- Rounder\n";
	cout<<"Batting Style : Right Handed Batsman\n";
	cout<<"Bowling Style : Right Arm Leg Break\n";
	cout<<"--------------------------------\n\n\n";
	system("pause");
	system("cls");
	int n;
	cout<<"Enter your choice to See Afridi's Career info : "<<endl<<endl;
	cout<<"Press 1- For ODI Career : "<<endl;
	cout<<"Press 2- For T20 Career : "<<endl;
	cout<<"Press 3- For Test Career : "<<endl;
	cout<<"Enter Your Choice : ";
	cin>>n;
	system("cls");
	switch(n)
	{
		case 1:
			{
			int a,a1;	
			cout<<"Displaying Afridi's ODI Career : "<<endl;
			cout<<"Afridi is Bowler and Batsman at the same what do you want to check : "<<endl;
			cout<<"Press 1- For Bating Career"<<endl;
			cout<<"Press 2- For Bowling Career"<<endl;
			cout<<"Enter Your choice : ";
			cin>>a;
			system("cls");
			
			if(a==1)
			{
			sa.afridi_bat_ODI();
			cout<<"Press 1 ! If you want to go back otherwise press 0 to Exit : ";
			cin>>a1;
			if(a1==1)
			{
			sa.afridi_bowl_ODI();	
			}
			else if(a1==0)
			{
			exit(0);	
			}	
			}
			else if(a==2)
			{
			sa.afridi_bowl_ODI();	
			}
			else
			{
				cout<<"Invalid Input"<<endl;
			}
			break;
			}
		case 2:
			{
			int b;	
			cout<<"Displaying Afridi's T20 Career : "<<endl;
			cout<<"Afridi is Bowler and Batsman at the same what do you want to check : "<<endl;
			cout<<"Press 1- For Bating Career"<<endl;
			cout<<"Press 2- For Bowling Career"<<endl;
			cout<<"Enter your choice : ";
			cin>>b;
			system("cls");
			if(b==1)
			{
			sa.afridi_bat_T20();	
			}
			else if(b==2)
			{
			sa.afridi_bowl_T20();	
			}
			else 
			{
				cout<<"Invalid Input"<<endl;
			}
			break;
			}
		case 3:
			{
			int c;	
			cout<<"Displaying Afridi's Test Career : "<<endl;
			cout<<"Afridi is Bowler and Batsman at the same what do you want to check : "<<endl;
			cout<<"Press 1- For Bating Career"<<endl;
			cout<<"Press 2- For Bowling Career"<<endl;
			cout<<"Enter your choice : ";
			cin>>c;
			system("cls");
			if(c==1)
			{
			sa.afridi_bat_Test();	
			}
			else if(c==2)
			{
			sa.afridi_bowl_Test();	
			}
			else
			{
				cout<<"Invalid Input"<<endl;
			}
			break;
			}
		default:
		{
		cout<<"Invalid Input Please Select between 1 - 3"<<endl;	
		}		
	}
	break;
}

else if(name=="babarazam"){
	
	system("cls");
	cout<<"Personal information : \n\n";
	cout<<"--------------------------------\n";
	cout<<"Full Name : Mohammad Babar Azam \n";
	cout<<"Nickname : none \n";
    cout<<"Debut v/s Zimbabwe : 2015 \n";
    cout<<"Height: 5ft 9 inches \n";
	cout<<"Main Role : Batsman \n";
	cout<<"Batting Style : Right Handed Batsman \n";
	cout<<"--------------------------------\n\n\n";
	system("pause");
	system("cls");
	int n;
	cout<<"Enter your choice to See Babar's Career info : "<<endl<<endl;
	cout<<"Press 1- For ODI Career : "<<endl;
	cout<<"Press 2- For T20 Career : "<<endl;
	cout<<"Press 3- For Test Career : "<<endl;
	cout<<"Enter Your Choice : ";
	cin>>n;
	system("cls");
	switch(n)
	{
		case 1:
			{
			int a,a1;	
			cout<<"Displaying Babar's ODI Career : "<<endl;
			ba.babar_ODI();
			break;
			}
		case 2:
			{
			int b;	
			cout<<"Displaying Babar's T20 Career : "<<endl;
			ba.babar_T20();
			break;
			}
		case 3:
			{
			int c;	
			cout<<"Displaying Babar's Test Career : "<<endl;
			ba.babar_Test();
			break;
			}
		default:
		{
		cout<<"Invalid Input Please Select between 1 - 3"<<endl;	
		}		
	}
}

else if(name=="shoaibakhtar"){
	system("cls");
	cout<<"Personal information : \n\n";
	cout<<"--------------------------------\n";
	cout<<"Full name : Shoaib Akhtar \n";
	cout<<"Nickname : Rawalpindi Express , Tiger\n";
    cout<<"Debut v/s Zimbabwe : 1998\n";
    cout<<"Height: 5ft 9 inches\n";
	cout<<"Main Role : Bowler\n";
	cout<<"Batting Style : Right Handed Batsman\n";
	cout<<"Bowling Style : Right Arm Fast Bowler\n";
	cout<<"--------------------------------\n\n\n";
	system("pause");
	system("cls");
	int n;
	cout<<"Enter Your Choice to See Shoaib Akhtar's Career info : "<<endl<<endl;
	cout<<"Press 1- For ODI Career : "<<endl;
	cout<<"Press 2- For T20 Career : "<<endl;
	cout<<"Press 3- For Test Career : "<<endl;
	cout<<"Enter Your Choice : ";
	cin>>n;
	system("cls");
	switch(n)
	{
		case 1:
			{
			int a,a1;	
			cout<<"Displaying Shoaib Akhtar's ODI Career : "<<endl;
		    sak.shoaibakhtar_ODI();
			break;
			}
		case 2:
			{
			int b;	
			cout<<"Displaying Shoaib Akhtar's T20 Career : "<<endl;
		sak.shoaibakhtar_T20();
			break;
			}
		case 3:
			{
			int c;	
			cout<<"Displaying Shoaib Akhtar's Test Career : "<<endl;
		sak.shoaibakhtar_Test();
			break;
			}
		default:
		{
		cout<<"Invalid Input Please Select between 1 - 3"<<endl;	
		
		}		
	}
}
else if(name==s1)
{
aa.display();
}
else
{
	cout<<"Invalid Choice ";
}
	break;
	}
	case 2:
		{
			s1=aa.addbiodata();
			break;
		}
		case 3:
			{
				exit(0);
			}
	
}
}
}
