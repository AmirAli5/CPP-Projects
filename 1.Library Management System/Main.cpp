#include <cstdio>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<cstdlib>
using namespace std;
int n1=0,n2=0;
class book
{
	private:
		string bid;           //Book ID.
		string nop;          //No. of pages.
		string bn;          //Book name.
		string an;         //Auther name.
		string in;        //Issuer name.
		ifstream input;
		ofstream output;
	public:
	    void create()
		{
			cout<<"\t\t\t LIBARARY MANEGMENT SYSTEM"<<endl;
			cout<<endl;
			string bid,nop,bn,an,in;
			cout<<"Enter the attributes of book which you want to create in the library!"<<endl;
			cout<<endl;
			cout<<"Enter the book ID!\t:";
			cin>>bid;
			cout<<endl;
			cout<<"Enter the no. of pages of book!\t:";
			cin>>nop;
			cout<<endl;
			cout<<"Enter the book name!\t:";
			cin>>bn;
			cout<<endl;
			cout<<"Enter the book's auther name!\t:";
			cin>>an;
			cout<<endl;
			cout<<"Enter the book's issuer name!\t:";
			cin>>in;
			cout<<endl;
			ofstream output;
			output.open("book.txt",ios::app);
			if(!output)
			{
				cout<<"File cannot be opened!!!"<<endl;
			}
			else
			{
				output<<"\n"<<bid<<"\t\t"<<nop<<"\t\t "<<bn<<"\t\t"<<an<<"\t\t "<<in<<"\n";
				cout<<endl;
				output.close();
				cout<<"\nYou have successfully created a book in the library!"<<endl;
			}
		}

          void modify()
 {
 	cout<<"\t\t\tLIBARARY MANEGMENT SYSTEM"<<endl;
         cout<<endl;
         	string cid,bid,nop,bn,an,in;
         	int n1=0,n2=0;
            ifstream input("book.txt");
            ofstream output("temp.txt");
            cout<<"Enter  book Id(which u wnt to modify)\t:";
            cin>>cid;
            cout<<endl;
	        if( !input)
           {
            cout << "Input file failed to open(not exist)\n";
           }
          else
          {
            while(input>>bid>>nop>>bn>>an>>in) 
	        {
	        	n1++;
    		if(cid==bid)
		       {
			    string bid,nop,bn,an,in;
			    cout<<"Enter the attributes of book which you wnt to modify in existing book recrd!"<<endl;
			    cout<<"\nEnter the book ID!\t:";
			    cin>>bid;
			    cout<<endl;
			    cout<<"Enter the no. of pages of book!\t:";
 			    cin>>nop;
			   	cout<<endl; 
				cout<<"Enter the book name!\t:";
			    cin>>bn;
			   	cout<<endl; 
				cout<<"Enter the book's auther name!\t:";
			    cin>>an;
			   	cout<<endl; 
				cout<<"Enter the book's issuer name!\t:";
			    cin>>in;
			    cout<<endl;
				output<<"\n"<<bid<<"\t\t"<<nop<<"\t\t "<<bn<<"\t\t"<<an<<"\t\t "<<in;
			    cout<<endl;
			    cout<<"You have successfully modified a book in the library!"<<endl;
			   	cout<<endl;	  
		     }
			else
			 {
			 	n2++;
			 	output<<"\n"<<bid<<"\t\t"<<nop<<"\t\t "<<bn<<"\t\t"<<an<<"\t\t "<<in<<'\n';
			 }
	        } 
	        if(n1==n2)
	        {
	        	cout<<"\nThe entered BId not exist so can't be modified"<<endl;
	        	cout<<endl;
	        }
             input.close();
             output.close();    
             remove("book.txt");
             rename("temp.txt","book.txt");
          }
}
			void search()
			{
				cout<<"\t\t\tLIBARARY MANEGMENT SYSTEM"<<endl;
				cout<<endl;
				
	           string bid,nop,bn,an,in;
	           int n1=0,n2=0;
				string c;
				ifstream input;
				cout<<"Enter the book id of book which you want to search in the library:"<<endl;
				cout<<endl;
				cout<<"Enter the Book ID\t:";
				cin>>c;
				cout<<endl;
				input.open("book.txt",ios::in);
				
				if(!input)
				{
					cout<<"File cannot be opened!!!"<<endl;
				}
				else
				{
				
					while(input>>bid>>nop>>bn>>an>>in)
					{
						n1++;
						if(bid==c)
						{
							cout<<"The record is as follows!!"<<endl;
							cout<<"\n"<<nop<<"\t"<<bn<<"\t"<<an<<"\t"<<in<<'\n';
						}
						else{
							n2++;
						}
					}
					if(n1==n2)
					{
						cout<<"\nThe entered BId not exist so can't be searched"<<endl;
						cout<<endl;
					}
					cout<<endl;
				}
			}

         void delet()
{          
cout<<"\t\t\t LIBARARY MANEGMENT SYSTEM"<<endl;
			cout<<endl;
    int i=0,n1=0,n2=0;
    char bid[30],nop[30],bn[30],an[30],in[30];
    string eid;
    cout<<"Enter book ID for delete\t :";
   cin>>bid;
   cout<<endl;
    for(i=0;bid[i]!='\0';i++);
    ifstream input;
	ofstream output;
    input.open("book.txt");
    if( !input)
    {
          cout << "Input file not exist ";
    }
    else
	{
    output.open("temp.txt");
    while(input>>eid>>nop>>bn>>an>>in )
	 {
	 	n1++;
    		if(bid==eid)
			{
    		cout<<"\nThe entered BID recrd has been Dleted....!"<<endl;
    		
    		}
    	   else
    	   {
    	   	n2++;
            output <<"\n"<<eid<<"\t\t"<<nop<<"\t\t" <<bn<<"\t\t"<<an<<"\t\t"<<in<<"\n" <<endl;
           }
	 }
	 if(n1==n2)
	 {
	 	cout<<"Cannot delet this record as the ID is not found!"<<endl;
	 }
	 
       
    input.close();
    output.close();    
    remove("book.txt");
    rename("temp.txt","book.txt");

    }
	}
};
class student
{
	private:
		string sid;        //Student ID.
		string name;       //Student name.
		string dname;       //Degree name.
		string sem;         // Semester.
		string nib;         //NO. Of Issued books.
		ifstream input1;
		ofstream output1;
	public:
	    void add()                 //for adding new student in the class.
		{
			cout<<"\t\t\t LIBARARY MANEGMENT SYSTEM"<<endl;
			cout<<endl;
			string sid,name,dname,sem,nib;
			cout<<"\nEnter the attributes for student which you want to add in the class!!"<<endl;
			cout<<endl;
			cout<<"Enter the student ID\t:";
			cin>>sid;
			cout<<endl;
			cout<<"Enter the name of the student\t:";
			cin>>name;
			cout<<endl;
			cout<<"Enter the Degree Name of the student\t:";
			cin>>dname;
			cout<<endl;
			cout<<"Enter the semester of the student\t:";
			cin>>sem;
			cout<<endl;
			cout<<"Enter the number of issued books to the name of that student\t:";
			cin>>nib;
			cout<<endl;
			ofstream output1;
			output1.open("student.txt",ios::app);
			if(!output1)
			{
				cout<<"Student cannot be added in the class!!!!"<<endl;
			}
			else
			{
				output1<<"\n"<<sid<<"\t\t"<<name<<"\t\t"<<dname<<"\t\t"<<sem<<"\t\t"<<nib<<"\n";
				cout<<endl;
				output1.close();
				cout<<"\nYou have successfully added a student in the class!!!"<<endl;
			}
		}
		void modify()
{
	cout<<"\t\t\t LIBARARY MANEGMENT SYSTEM"<<endl;
			cout<<endl;
	  string sid,name,dname,sem,nib,id;
	    int n1=0,n2=0;
    ifstream input("student.txt");
    ofstream output("temp.txt");
    cout<<"\nEnter  student Id(which u wnt to  record modify)\t:";
    cin>>id;
    cout<<endl;
	if( !input)
    {
          cout << "Input file failed to open(not exist)\n";
    }
    else
    {
    while(input>>sid>>name>>dname>>sem>>nib) 
	{
		n1++;
    		if(id==sid)
		{
		   string sid,name,dname,sem,nib;
			cout<<endl<<"Yes,this student id record exist"<<endl;
			cout<<"\nEnter the attributes for student which you want to add in the class!!"<<endl;
			cout<<endl;
			cout<<"Enter the student ID\t:";
			cin>>sid;
			cout<<endl;
			cout<<"Enter the name of the student\t:";
			cin>>name;
			cout<<endl;
			cout<<"Enter the Degree Name of the student\t:";
			cin>>dname;
			cout<<endl;
			cout<<"Enter the semester of the student\t:";
			cin>>sem;
			cout<<endl;
			cout<<"Enter the number of issued books to the name of that student\t:"<<endl;
			cin>>nib;
			cout<<endl;
			output<<"\n"<<sid<<"\t\t"<<name<<"\t\t "<<dname<<"\t\t"<<sem<<"\t\t "<<nib<<"\n";
			    cout<<endl;
			cout<<"You have successfully added a student in the class after modifying!!!"<<endl;
		}
			else
			{
				n2++;
    		 	output<<"\n"<<sid<<"\t\t"<<name<<"\t\t"<<dname<<"\t\t"<<sem<<"\t\t"<<nib<<"\n";
    		}
	}
	if(n1==n2)
	{
			cout<<"\nCannot be modified b/c given student ID recrd not exist !"<<endl;
	}
    input.close();
    output.close();    
    remove("student.txt");
    rename("temp.txt","student.txt");
}
}
		void search()        // For searching a student present in the class.
		{
			cout<<"\t\t\t LIBARARY MANEGMENT SYSTEM"<<endl;
			cout<<endl;
			string sid1,name1,dname1,sem1,nib1;
			  int n1=0,n2=0;
			string x;
			ifstream input1;
			cout<<"\nEnter the student id for finding his record in the class"<<endl;
			cout<<endl;
			cout<<"Enter the stdID\t:";
			cin>>x;
			cout<<endl;
			input1.open("student.txt",ios::in);
			if(!input1)
			{
				cout<<"File cannot be opened!!!"<<endl;
			}
			else
			{
				while(!input1.eof())
				{
					n1++;
					input1>>sid1>>name1>>dname1>>sem1>>nib1;
					if(sid1==x)
					{
						cout<<"Student of entered Id is as follows!"<<endl;
						cout<<"\n"<<name1<<"\t\t"<<dname1<<"\t\t"<<sem1<<"\t\t"<<nib1<<"\n"<<endl;
					}
					else
					{
						n2++;
					}
				}
				if(n1==n2)
				{
						cout<<"\nRecord of entered student ID not exist so can't be searched'!"<<endl;
				}
			}
		}
				void delet1()
{
			cout<<"\t\t\t LIBARARY MANEGMENT SYSTEM"<<endl;
			cout<<endl;
			int i=0;
    char sid[30],sn[30],dn[30],sen[30],nob[30];
      int n1=0,n2=0;
    string fsid;
    cout<<"Enter student_ID for delete : ";
   cin>>sid;
   	cout<<endl;
    for(i=0;sid[i]!='\0';i++);
    ifstream input("student.txt");
    if( !input)
    {
          cout << "Input file failed to open\n";
    }
    else
	{	
	 ofstream output("temp.txt");
     while(input>>fsid>>sn>>dn>>sen>>nob )
	  {
	  	n1++;
    		if(sid==fsid)
			{
    		   cout<<"The entered ID of student has been deleted  !"<<endl;
    		}
    	   else
    	   {
    	   	n2++;
            output <<"\n"<<fsid<<"\t\t"<<sn<<"\t\t" <<dn<<"\t\t"<<sen<<"\t\t"<<nob<<"\n";
      }
      
  }
  if(n1==n2)
      {
      	cout<<"\nThe entered ID of student has not been deleted b/c recrd not exist !"<<endl;
      	cout<<endl;
      }
    input.close();
    output.close();    
    remove("student.txt");
    rename("temp.txt","student.txt");
    }
}	
};
class issuebook
{
	private:
		string fbid;
		string fsid;
		string bid;
		string nop;
		string an;
		string isn;
		int in=0;
	public:
		void search()
		{
		
		string bid,nop,bn,an,in;
				string c;
				int n1=0,n2=0;
				ifstream input;
				cout<<"Enter the book id of book which you want to search in the library:"<<endl;
				cout<<endl;
				cout<<"Enter the BID \t: ";
				cin>>c;
				cout<<endl;
				input.open("book.txt",ios::in);
				
				if(!input)
				{
					cout<<"File cannot be opened!!!"<<endl;
				}
				else
				{ 
					while(input>>bid>>nop>>bn>>an>>in)
					{
						n1++;
						if(bid==c)
						{
							cout<<"\nThat book of ID exist in the library!"<<endl;
					    }
						else{
							n2++;
						}	
					}
						if(n1==n2)
					{
						cout<<"\nbook do not exist!!"<<endl;
					}
					cout<<endl;
				}
				
				cout<<endl;
			}
			void search2()        // For searching a student present in the class.
		{
			string sid1,name1,dname1,sem1,nib1;
			int n1=0,n2=0;
			string x;
			ifstream input1;
			cout<<"Enter the student id for finding his record in the class"<<endl;
			cout<<endl;
			cout<<"Enter the stdID\t:";
			cin>>x;
			cout<<endl;
			input1.open("student.txt",ios::in);
			if(!input1)
			{
				cout<<"File cannot be opened!!!"<<endl;
			}
			else
			{
				while(input1>>sid1>>name1>>dname1>>sem1>>nib1)
				{
				n1++;	
					if(sid1==x)
					{
						cout<<"Student exist!"<<endl;
					
					}
					else{
						n2++;
					}
					
				}
					if(n1==n2)
					{
						cout<<"\nStudent do not has the membership of library!!"<<endl;
					}
				cout<<endl;
			
				
			}
			
		}
		void issue()
		{
			cout<<"\t\t\t LIBARARY MANEGMENT SYSTEM"<<endl;
			cout<<endl;
			int Idcheck,rcheck;
			int n=0,t=0,Uid,Urno;
	int ID,Rno,nop,noib;
	string Bkname,Stdname,Aname,Iname,Dep,semster;
	//validaty book
	cout<<"Enter Book ID for searching\t:";
	cin>>Uid;
	cout<<endl;
	ifstream input1("book.txt");
	if(!input1){
		cout<<"Error";
	}
	else{
		while(input1>>ID>>nop>>Bkname>>Aname>>Iname){
			if(Uid==ID){
				n=1;
				cout<<"Found"<<endl<<endl;
				//student
				cout<<"Enter Student ID for searching\t:";
	            cin>>Urno;
	            cout<<endl;
	            t=0;
	            ifstream input2("student.txt");
	            if(!input2){
		        cout<<"Error";
	            }
	            else{
		        while(input2>>Rno>>Stdname>>Dep>>semster>>noib){
			    if(Urno==Rno){
				cout<<"\nAvailable"<<endl<<endl;
				t=1;
				if(noib==0){
					cout<<"You can issue the book to this student."<<endl<<endl;
					int chk;
					cout<<"Enter 1 to confirm book issuence\t:";
					cin>>chk;
					if(chk==1){
					ofstream issue("issuancebook.txt",ios::app);
					if(!issue){
						cout<<"error";
					}
					else{
						issue<<ID<<"\t\t"<<nop<<"\t\t"<<Bkname<<"\t\t"<<Aname<<"\t\t"<<Iname<<"\t\t"<<Rno<<"\n";
					    cout<<endl<<endl<<"book issued";
						Idcheck=ID;
					    rcheck=Rno;
					}
					issue.close();
					
				}
				}
				else{
					cout<<"You cannot issue the book."<<endl;
				}
				break;
			}
		}
	}
	input2.close();
}
}
}
if(n!=1){
	cout<<"Book not found"<<endl;
}
else if(t!=1){
	cout<<"Student Not found"<<endl;
}
	input1.close();
    //delete issed book
    ifstream indel("book.txt");
    if(!indel){
    	cout<<"Error";
    }
    else{
    	ofstream outdel("temp.txt",ios::out);
    	if(!outdel){
    		cout<<"Error";
    	}
    	else{
    	while(indel>>ID>>nop>>Bkname>>Aname>>Iname){
    		if(Idcheck==ID){
    			cout<<endl<<"Deleting....(bid recrd from the book.txt file mean updated ) "<<endl;
			}
			else{
				outdel<<ID<<"\t\t"<<nop<<"\t\t"<<Bkname<<"\t\t"<<Aname<<"\t\t"<<Iname;
			}
    	}
    }
    outdel.close();
  }
  indel.close();
  remove("book.txt");
  rename("temp.txt","book.txt");
  //change student 
  ifstream indel1("student.txt");
    if(!indel1){
    	cout<<"Error";
    }
    else{
    	ofstream outdel1("temp.txt",ios::out);
    	if(!outdel1)
		{
    		cout<<"Error";
    	}
    	else
		{
    	while(indel1>>Rno>>Stdname>>Dep>>semster>>noib)
		{
    		if(rcheck==Rno)
			{
    			
    			cout<<endl<<"Changing....(student.txt file also updated) ";
    			outdel1<<Rno<<"\t\t"<<Stdname<<"\t\t"<<Dep<<"\t\t"<<semster<<"\t\t"<<1<<"\n";
			}
			else{
				outdel1<<Rno<<"\t\t"<<Stdname<<"\t\t"<<Dep<<"\t\t"<<semster<<"\t\t"<<0<<"\n";
			}
    	}
    }
    outdel1.close();
  }
  indel1.close();
  remove("student.txt");
  rename("temp.txt","student.txt");}
		void validity()
		{
			cout<<"\t\t\t LIBARARY MANEGMENT SYSTEM"<<endl;
			cout<<endl;
		string a,b,c,d,e;
			fstream in;
			in.open("book.txt",ios::in);
			if(!in)
			{
				cout<<"File opening error!"<<endl;
			}
			else
			{
			while(in>>a>>b>>c>>d>>e)
			  {
				search();
				break;
		      }
			cout<<endl;
		}
			string f,g,h,i,j,sidf;
				fstream inp;
			inp.open("student.txt",ios::in);
			if(!inp)
			{
				cout<<"File opening error!"<<endl;
			}
			else
			{
			while(inp>>f>>g>>h>>i>>j)
			{
				search2();
				break;
	        }
	          cout<<endl;
	    }}
	void lim_check()
	{
		cout<<"\t\t\t LIBARARY MANEGMENT SYSTEM"<<endl;
			cout<<endl;
		ifstream input;
				string q;
				cout<<"Enter the student id to want limit check"<<endl;
				cout<<endl;
				cout<<"Enter your reg. no.\t:";
				cin>>q;
				cout<<endl;
				input.open("student.txt",ios::in);
				string bid,nop,bn,an,in;
				
				if(!input)
				{
					cout<<"File cannot be opened!!!"<<endl;
				}
				else
				{
				
					while(input>>bid>>nop>>bn>>an>>in)
					{
					
						if(in=="0" && bid==q)
						{
							cout<<"The student of ID "<<bid<<" can get a book!"<<endl;
						}
					if(in!="0" && bid==q)
					{
						cout<<"Sorry student of ID "<<bid<<" cannot get book as your limit is over!"<<endl;
					}	
					cout<<endl;
	}
}
}

};
class return_book
{
	private:
		string rbid;
		string rsid;
			int Idcheck,rcheck;
string bid,n,nop,an,in,stdid;
int np=0,t=0,Uid,Urno;
	int ID,Rno,noib;
	string Bkname,Stdname,Aname,Iname,Dep,semster;
	int n1=0,n2=0;
	public:
		void ret_book()
		{
			cout<<"\t\t\t LIBARARY MANEGMENT SYSTEM"<<endl;
			cout<<endl;

	ofstream output;
	ifstream input("issuancebook.txt",ios::in);
	cout<<"Enter the book id which u want to return in the library!!!";
	cout<<endl;
	cout<<"Enter the bid\t:";
	cin>>rbid;
		if(!input)
	{
		cout<<"\nFile not exist";
		
	}
	else{
			ofstream output("temp.txt",ios::out);
		while(input>>bid>>nop>>n>>an>>in>>stdid)
		{
			n1++;
			if(rbid==bid)
			{
			
				cout<<"succefully return";
				cout<<endl;
					ofstream output1;
		     output1.open("book.txt",ios::app);
				if(!output1)
				{
					cout<<"not exist";
				}
				else{
					output1<<bid<<"\t"<<nop<<"\t"<<n<<"\t"<<an<<"\t"<<in<<"\t"<<'\n';
					cout<<endl<<endl<<"\nbook is updated"<<endl;
					output1.close();
				}
			
		}
			if(rbid!=bid){
				n2++;
				output<<"\n"<<bid<<"\t"<<nop<<"\t"<<n<<"\t"<<an<<"\t"<<in<<"\t"<<stdid<<"\n"<<endl;
				}
	}
		if(n1==n2)
		{
			cout<<"\ncan't be returned b/c bid recrd not exist"<<endl;
		}
		input.close();
		output.close();
		remove("issuancebook.txt");
		rename("temp.txt","issuancebook.txt");
	}
		}
};
int main()
{
	cout<<"\t\t\t LIBARARY MANEGMENT SYSTEM"<<endl;
			cout<<endl<<endl;
	book c;
	student s;
	issuebook u;
	return_book r;
	string p="";
	char ch;
	cout<<"Enter the password to enter into the library:"<<endl<<endl;
	ch=getch();
	while(ch !=13)
	{
		p.push_back(ch);
		cout<<'*';
		ch=getch();
	}
	cout<<endl<<endl;
	if(p=="dawn" || p=="DAWN" || p=="Dawn")
	{
		cout<<"Welcome!you have entered correct password now you can enter into the library!"<<endl;
		cout<<endl;
		system("pause");
		int cho;
		do
		{
			system("cls");
				cout<<"\t\t\tLIBARARY MANEGMENT SYSTEM"<<endl;
					cout<<"\n\t\t\t\t MAIN MENU"<<endl;
			cout<<"Press 0 to creat a book record-----> "<<endl;
			cout<<endl;
			cout<<"Press 1 to Modify a book record-----> "<<endl;
			cout<<endl;
			cout<<"Press 2 to Search a book record-----> "<<endl;
			cout<<endl;
			cout<<"Press 3 to Delete a book record-----> "<<endl;
			cout<<endl;
			cout<<"Press 4 to Add a student record----->"<<endl;
			cout<<endl;
			cout<<"Press 5 to Modify in a student record----->"<<endl;
			cout<<endl;
			cout<<"Press 6 to Search a student record----->"<<endl;
			cout<<endl;
			cout<<"Press 7 to Delete a student record----->"<<endl;
			cout<<endl;
			cout<<"Press 8 to check validity of book & student record---->"<<endl;
			cout<<endl;
			cout<<"Press 9 to check limit to issue a book--->"<<endl;
			cout<<endl;
			cout<<"Press 10 to issue a book to a student----->"<<endl;
			cout<<endl;
			cout<<"Press 11 to Return book to librarian----->"<<endl;
			cout<<endl;
			cout<<"Press 12 to exit to the main menue!!"<<endl;
			cout<<endl;
			cout<<"Enter your choice number from (0-->12)!!"<<endl;
			cout<<endl;
			cin>>cho;
			system("cls");
			switch(cho)
			{
				case 0:
					c.create();
					break;
				case 1:
					c.modify();
					break;	
				case 2:
					c.search();
					break;	
				case 3:
					c.delet();
					break;
				case 4:
					s.add();
					break;
				case 5:
					s.modify();
					break;
				case 6:
					s.search();
					break;
				case 7:
					s.delet1();
					break;
				case 8:
					u.validity();
					break;
				case 9:
					u.lim_check();
					break;
				case 10:
					u.issue();
					break;				
				case 11:
					r.ret_book();
					break;
				case 12:
					break;
				default:
					cout<<"\nYou have entered number out of range!!"<<endl;	
			}
			cout<<endl;
			system("Pause");
	        system("cls");
		}
		while(cho>=0 && cho <=12);
    }
	if(p!="dawn" && p!="DAWN" && p!="Dawn")
	{
		cout<<"Sorry! You have enterd wrong password!"<<endl;
	}
}

