#include <iostream>
#include <cmath>
using namespace std;
int main() 
//{
//    int x, i;
//
//    cout << "Enter a positive integer: ";
//    cin >> x;
//  cout << "Factors of " << x << " are: ";
//    for(i = 1; i <= x; i++) {
//        if(x % i == 0)
//            cout << i << " "<< endl;
//    }
//       
//
//    return 0;
//}
//
//
//{
//	float x;
//	cout<<"enter an integer "<<endl;
//	cin>>x;
//	if (x>10&&x<=20) {
//		cout<<"1";
//	}
//	else {
//			cout<<"0";
//	}
//	return 0;
//}
//
// {
//        int N, i;
//
//        cout << "Enter a positive integer: ";
//        cin >> N;
//
//        if (N <= 1) {
//            cout << "No prime number less than or equal to " << N << endl;
//            return 0;
//        }
//
//        i = N;
//
//        while (i >= 2) {
//            bool isPrime = true;
//
//            for (int y = 2; y <= sqrt(i); y++) {
//                if (i % y == 0) {
//                    isPrime = false;
//                    break;
//                }
//            }
//
//            if (isPrime) {
//                cout << "The largest prime number less than or equal to " << N << " is " << i << endl;
//                break;
//            }
//
//            i--;
//        }
//
//        return 0;
//    }
    
    
//   {
//     string str1,str2;
//     string newstring="";
//    cout<<"Enter the First String: "<<endl;
//    cin>>str1;
//    cout<<"Enter the Second String: "<<endl;
//    cin>>str2;
//    if (str1==str2)
//    {
//    	cout<<"	strings are equal "<<endl;
//     for ( int i= str1.length(); i>=0; i-- ) {
//     	newstring=newstring+str1[i];
//    	
//    	
//		}
//	
//
//	}
//	else {
//	cout<<"both strings are unequal";
//	
//}
//	
//	
//	
//}

//  {
//  int dividend , divisor , quotient = 0;  
//  cout<<"enter the dividend"<<endl;
//  cin>>dividend;
//  cout<<"enter the divisor"<<endl;
//  cin>>divisor;
//  if (dividend>=divisor) {
// 
//    while (dividend >= divisor) {
//        dividend = dividend-divisor;
//        quotient++;
//    }
//     }
//     else {
//     	 cout<<"try again"<<endl;
//	 }
//
//   
//    cout << "Quotient: " << quotient <<endl;
//   cout << "Remainder: " << dividend <<endl;
//
//    return 0;
//}


//{
//	string str1,strnew;
//	
//	cout<<"enter a string"<<endl;
//	cin>>str1;
//	for(int i=0;i<str1.length();i++) {
//		for(int j=0;j<str1.length();j++) {
//			if(i!=j){ if (str1[i]==str1[j]) { 
//			str1[j]=str1[j+1];
//			str1[j+1]=' ';
//			}
//			}
//		}
//		
//	}
//	cout<<"the new string is ";
//	for(int i=0;i<str1.length();i++) {
//		if(str1[i]==' '){
//			str1[i]=str1[i+1];
//			str1[i+1]=' ';
//			cout<<str1[i];
//		}
//		else { cout<<str1[i];
//		}
//	}}
	

//{
//	int x, a[5]={1,2,3,4,5} , b[5+x] ;
//	cout<<"enter the number of elements to add "<<endl;
//	cin>>x;
//	for(int i=0;i<5;i++) {
//		b[i]=a[i];
//	}
//	for(int i=5;i<5+x;i++) {
//		cout<<"enter the element number "<<i-4<<endl;
//		cin>>b[i];
//		cout<<endl;
//	}
//	cout<<"elements of a are";
//	for(int i=0;i<5+x;i++) {
//		cout<<b[i]<<" ";
//	}
//	
//}
	
//    {
//    	int sum=9;
//    	int a[6]={0,1,2,3,4,5};
//    	cout<<"combinations: "<<endl;
//    	for (int i=0; i<6; i++) {
//    			for (int j=0; j<6; j++) {
//    					for (int k=0; k<6; k++) {
//    						if( ((i!=j) && (j!=k) && ( k!= i) && a[i]+a[j]+a[k] ==sum ))
//    						{
//    							cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<" "<<endl;
//							}
//						}
//    					
//				}
//		}
//	}
//
{
	int x, a[6] ;
	cout<<"enter the numbers for bubble sorting"<<endl;
	for(int i =0; i<6;i++) {
		cout <<" enter number " <<i+1<<endl;
		cin>>a[i];
		cout<<endl;
		
	}
	for (int i =0; i<6; i++) {
		for ( int j=0; j<6;j++) {
			if (a[j+1]<a[j]) {
				x=a[j];
				a[j]=a[j+1];
				a[j+1] =x;
			}
		}
	}
	cout<<" bubble sort : ";
	for ( int i=0;i<6;i++) 
	cout<<a[i]<<" ";
	
}


