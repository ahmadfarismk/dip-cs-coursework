#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
using namespace std; 

int main()
{
	//variable declaration
	
	string username, password, username1="faris",password1="hensem" ;
	char code, answer='Y';
	int choice ;
	double pi = 3.142, side, vol, surf, length, height, width, rad;
	
	
	cout<<"\nWELCOME TO 3D GEOMETRY CALCULATOR!";
	
	//login section
	
	for (int attempt=4; attempt>0; attempt --)
	{
		cout<<"\nPlease enter Username:";
		cin>>username ;
		cout<<"Please enter Password:";
		cin>>password ;
		if ((username==username1) && (password==password1))
		{
			cout <<"\nLogin Success, welcome back !";
			break ;
		}
		else
		{	
			cout <<"\nInvalid credentials, you have ("<<(attempt-1)<<") left";
		}
			
		if(attempt==1)
		{
			cout<<"\nYou have reached limit attempts, program ends...  ";
			return 0;
		}
	}

	//calculat0r body loop
	while (toupper(answer)== 'Y')
	{
		cout<<"\n\n\n-------------------------------------------------";
		cout<<"\n A - CUBE";
		cout<<"\n B - RECTANGLE SOLID";
		cout<<"\n C - SPHERE";
		cout<<"\n D - RIGHT CIRCULAR CYLINDER";
		cout<<"\n E - RIGHT CIRCULAR CONE";
		cout<<"\n F - SQUARE PYRAMID";
		cout<<"\n G - REGULAR TETRAHEDRON";
		cout<<"\n-------------------------------------------------\n";
		cout<<"<PLEASE ENTER ANY CODES ABOVE TO PROCEED>: ";
		cin>>code;
	
		while (toupper(code)!='A' &&  toupper(code)!='B' && toupper(code)!='C' && toupper(code)!='D' && toupper(code)!='E' && toupper(code)!='F' && toupper(code)!='G')
		{
			cout<<"\nYou have entered an invalid code, please enter again... :";
			cin>>code;
		}
		system ("cls");
		
		//Cube section
		if (toupper(code)=='A')
		{
			cout<<"CUBE";
			cout<<"\n1. Volume";
			cout<<"\n2. Surface";
			cout<<"\nChoose 1 or 2"<<endl;
			cin>>choice ;
			while (choice!= 1 && choice!= 2)
			{
				cout<<"\nYou have entered an invalid code, please enter again...";
				cin>>choice ;
			}
			
			if (choice==1)
			{
				cout<<"\nPlease enter the side length:";
				cin>>side;
				vol = pow(side,3);
				cout<<"\nThe volume of Cube is:"<<vol ;
			}
			else if (choice==2)
			{
				cout<<"\nPlease enter the side length:";
				cin>>side;
				surf = 6 * (pow(side,2));
				cout<<"\nThe surface of Cube is:"<<surf ;
			}
		
		}
		//rectangle solid section
		else if ((toupper(code)=='B'))
		{
			cout<<"RECTANGLE SOLID" ;
			cout<<"\n1. Volume";
			cout<<"\n2. Surface";
			cout<<"\nChoose 1 or 2"<<endl;
			cin>>choice ;
			while (choice!= 1 && choice!= 2)
			{
				cout<<"\nYou have entered an invalid code, please enter again...";
				cin>>choice ;
			}
			
			
				if (choice==1)
				{
					cout<<"\nPlease enter the length:";
					cin>>length;
					cout<<"\nPlease enter the width:";
					cin>>width;
					cout<<"\nPlease enter the height:";
					cin>>height;
					vol = length * width * height;
					cout<<"\nThe volume of Rectangle Solid is:"<<vol ;
				}
				else if (choice==2)
				{
					cout<<"\nPlease enter the length:";
					cin>>length;
					cout<<"\nPlease enter the width:";
					cin>>width;
					cout<<"\nPlease enter the height:";
					cin>>height;
					surf = (2*length*width) + (2*length*height) + (2*width*height);
					cout<<"\nThe surface of Rectangle Solid is:"<<surf ;
				}
		}
			
		//sphere
		else if ((toupper(code)=='C'))
		{
			cout<<"SPHERE";
			cout<<"\n1. Volume";
			cout<<"\n2. Surface";
			cout<<"\nChoose 1 or 2"<<endl;
			cin>>choice ;
			while (choice!= 1 && choice!= 2)
			{
				cout<<"\nYou have entered an invalid code, please enter again...";
				cin>>choice ;
			}
			
			
				if (choice==1)
				{
					cout<<"\nPlease enter the radius:";
					cin>> rad;
					vol = 4.0/3.0 * pi * pow(rad,2) ;
					cout<<"\nThe volume of Sphere is :"<<vol ;
				}
				else if (choice==2)
				{
					cout<<"\nPlease enter the radius:";
					cin>>rad;
					surf = 4 * pi * pow(rad,2);
					cout<<"\nThe surface of Sphere is :"<<surf ;	
				}
		}
		
		//right circular cylinder section
		else if ((toupper(code)=='D'))
		{
			cout<<"RIGHT CIRCULAR CYLINDER";
			cout<<"\n1. Volume";
			cout<<"\n2. Surface";
			cout<<"\nChoose 1 or 2"<<endl;
			cin>>choice ;
			while (choice!= 1 && choice!= 2)
			{
				cout<<"\nYou have entered an invalid code, please enter again...";
				cin>>choice ;
			}
			
				if (choice==1)
				{
					cout<<"\nPlease enter the radius:";
					cin>> rad;
					cout<<"\nPlease enter the height:";
					cin>> height;
					
					vol = pi * pow(rad,2) * height ;
					cout<<"\nThe volume of Right Circular Cylinder is :"<<vol ;
				}
				else if (choice==2)
				{
					cout<<"\nPlease enter the radius:";
					cin>>rad;
					cout<<"\nPlease enter the height:";
					cin>> height ;
					
					surf = (2 * pi * rad * height) + (2 * pi * pow(rad,2));
					cout<<"\nThe surface of Sphere is :"<<surf ;	
				}
		}
		
		//right circular cone section
		else if ((toupper(code)=='E'))
		{
			cout<<"RIGHT CIRCULAR CONE" ;
			cout<<"\n1. Volume";
			cout<<"\n2. Surface";
			cout<<"\nChoose 1 or 2"<<endl;
			cin>>choice ;
			while (choice!= 1 && choice!= 2)
			{
				cout<<"\nYou have entered an invalid code, please enter again...";
				cin>>choice ;
			}
			
				if (choice==1)
				{
					cout<<"\nPlease enter the radius:";
					cin>> rad;
					cout<<"\nPlease enter the height:";
					cin>> height;
					
					vol = 1/3 * pi * pow(rad,2) * height ;
					cout<<"\nThe volume of Right Circular Cone is :"<<vol ;
				}
				else if (choice==2)
				{
					cout<<"\nPlease enter the radius:";
					cin>>rad;
					cout<<"\nPlease enter the height:";
					cin>> height ;
					
					surf = pi * rad * sqrt(pow(rad,2)+pow(height,2)) + (pi * pow(rad,2)) ;
					cout<<"\nThe surface of Right Circular Cone is :"<<surf ;	
				}
		}
		
		//square pyramid section
		else if ((toupper(code)=='F'))
		{
			cout<<"SQUARE PYRAMID" ;
			cout<<"\n1. Volume";
			cout<<"\n2. Surface";
			cout<<"\nChoose 1 or 2"<<endl;
			cin>>choice ;
				
			while (choice!= 1 && choice!= 2)
			{
				cout<<"\nYou have entered an invalid code, please enter again...";
				cin>>choice ;
			}
				
				if (choice==1)
				{
					cout<<"\nPlease enter the side:";
					cin>> side;
					cout<<"\nPlease enter the height:";
					cin>> height;
					
					vol = 1.0/3.0 * pow(side,2) * height ;
					cout<<"\nThe volume of Square Pyramid is :"<<vol ;
				}
				else if (choice==2)
				{
					cout<<"\nPlease enter the side:";
					cin>>side;
					cout<<"\nPlease enter the height:";
					cin>> height ;
					
					surf = side * (side + sqrt(pow(side,2) + 4 * pow(height,2))) ;
					cout<<"\nThe surface of Square Pyramid is :"<<surf ;
				}
		}
		
		//regular tetrahedron section
		else if ((toupper(code)=='G'))
		{
			cout<<"REGULAR TETRAHEDRON";
			cout<<"\n1. Volume";
			cout<<"\n2. Surface";
			cout<<"\nChoose 1 or 2"<<endl;
			cin>>choice ;
			while (choice!= 1 && choice!= 2)
			{
				cout<<"\nYou have entered an invalid code, please enter again...";
				cin>>choice ;
			}
			
				if (choice==1)
				{
					cout<<"\nPlease enter the side:";
					cin>> side;
					
					vol = 1.0/12.0 * sqrt(2 * pow(side,3)) ;
					cout<<"\nThe volume of Square Pyramid is :"<<vol ;
				}	
				else if (choice==2)
				{
					cout<<"\nPlease enter the side:";
					cin>>side;
					surf = sqrt(3*pow(side,2)) ;
					cout<<"\nThe surface of Square Pyramid is :"<<surf ;	
				}		
		}	
		
		//repeat loop confirmation
		cout<<"\nDo you want to repeat? Enter Y/N :";
		cin>> answer ;
		system ("cls");
	}	
	
	cout<<"\nThank you for using 3D GEOMETRY CALCULATOR :D !" ;
			
	
	return 0;
	
}

