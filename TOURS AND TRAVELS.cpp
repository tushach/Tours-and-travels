#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<process.h>
#include<dos.h>
int choice,chplace,chgen,chb,n,chbd,gch;
int adl,child;
float price;
ifstream j1,j2,j3,gj1,gj2,gj3,k1,k2,k3,g1,g2,g3,bd1,bd2;
void dispmenu();
void bdeals();
void main();
void bdeals1();
void bdeals2();
void enterchoice();

struct places
{
char packname[50];
float price;
};
places objk[3]={{"Jammu Kashmir Package 1",30000},{"Jammu Kashmir Package 2",30000},{"Jammu Kashmir Package 3",15000}};
places obg[3]={{"Goa Package 1",30000},{"Goa Package 2",25000},{"Goa Package 3",20000}};
places obgj[3]={{"Gujarat Package 1",35000},{"Gujarat Package 2",25000},{"Gujarat Package 3",16000}};
places obkerala[3]={{"Kerala Package 1",40000},{"Kerala Package 2",16000},{"Kerala Package 3",8000}};
places obbd[2]={{"Goa Special",20000},{"Jammu Kashmir Special",20000}};

class user
{ 
char name[20];
char email[30];
char address[40];
long phone;
char package[50];
float cost;
public: void signin()

		  {
		    cout<<"SIGN IN"<<endl<<endl;
		    cout<<"-------------------"<<endl;
		    cout<<"       SIGN IN     "<<endl;
		  cout<<"-------------------"<<endl;
		  cout<<"Name : ";
		  cin>>name;
		  cout<<"Email Id: ";
		  cin>>email;
		  cout<<"Address: ";
		  cin>>address;
		  cout<<"Mobile No. :";
		  cin>>phone;
		  cout<<endl<<"Your account has been successfully created! ";
		  delay(2000);		    dispmenu();
		  }
		   void bill();
		   void printbill();
		   void enterchoice();
		   void enterc();
		   void enterbd();
}u1;
void user::enterbd()
{
    if(chbd==1)
   {
      strcpy(package,obbd[0].packname);
      cost=obbd[0].price;
     }
   else if(chbd==2)
   {
      strcpy(package,obbd[1].packname);
      cost=obbd[1].price;
   }

   u1.bill();
   u1.printbill();
}
int m;
void user::enterc()
{
   cout<<"Enter your choice:";
   cin>>m;
   if(chb==1)
   {
      if(m==1)
       {
         strcpy(package,objk[2].packname);
         cost=objk[2].price;
        }
      else if(m==2)
       {
         strcpy(package,obg[2].packname);
         cost=obg[2].price;
       }
      else if(m==3)
       {
         strcpy(package,obgj[2].packname);
         cost=obgj[2].price;
       }
      else if(m==4)
       {
         strcpy(package,obkerala[2].packname);
         cost=obkerala[2].price;
          }
   }
   else if(chb==2)
   {
      if(m==1)
       {
         strcpy(package,objk[1].packname);
         cost=objk[1].price;
       }
      else if(m==2)
      {
         strcpy(package,obg[1].packname);
         cost=obg[1].price;
      }
      else if(m==3)
      {
         strcpy(package,obgj[1].packname);
         cost=obgj[1].price;
      }
      else if(m==4)
      {
         strcpy(package,obkerala[1].packname);
         cost=obkerala[1].price;
       }
   }
   else if(chb==3)
   {
      if(m==1)
      {
         strcpy(package,objk[0].packname);
         cost=objk[0].price;
       }
      else if(m==2)
      {
         strcpy(package,obg[0].packname);
         cost=obg[0].price;
      }
      else if(m==3)
      {
         strcpy(package,obgj[0].packname);
         cost=obgj[0].price;
      }
       else if(m==4)
      {
         strcpy(package,obkerala[0].packname);
         cost=obkerala[0].price;
      }
   }
   if(m==5)
   return;
   u1.bill();
   u1.printbill();
}
void user::bill()
{
   clrscr();
   cout<<"Enter the number of adults";
   cin>>adl;
   cout<<"Enter the number of children";
   cin>>child;
   price=(cost*adl)+(cost/2)*child;
   cout<<"Price per person"<<cost;

   delay(2000);
}
void user::enterchoice()
{
   cout<<"Enter your choice";
   cin>>n;
   if(chplace==1 || (chgen==1 && gch==1) )
      {
         if(n==1)
          {
              strcpy(package,objk[0].packname);
              cost=objk[0].price;
           }
         else if(n==2)
          {
              strcpy(package,objk[1].packname);
              cost=objk[1].price;
           }
         else if(n==3)
          {
              strcpy(package,objk[2].packname);
              cost=objk[2].price;
          }
      }
   else if(chplace==2 || (chgen==1 && gch==2) || (chgen==3 && gch==2))
   {
         if(n==1)
          {
              strcpy(package,obg[0].packname);
              cost=obg[0].price;
           }
         else if(n==2)
          {
              strcpy(package,obg[1].packname);
              cost=obg[1].price;
           }
         else if(n==3)
         {
              strcpy(package,obg[2].packname);
              cost=obg[2].price;
         }
   }
   else if(chplace==3 || (chgen==1 && gch==3) || (chgen==2))
   {
       if(n==1)
          {
              strcpy(package,obgj[0].packname);
              cost=obgj[0].price;
            }
       else if(n==2)
       {
         strcpy(package,obgj[1].packname);
         cost=obgj[1].price;
       }
       else if(n==3)
       {
         strcpy(package,obgj[2].packname);
         cost=obgj[2].price;
       }
   }
   else if(chplace==4 || (chgen==3 && gch==1))
      {
         if(n==1)
          {
              strcpy(package,obkerala[0].packname);
              cost=obkerala[0].price;
           }
         else if(n==2)
         {
              strcpy(package,obkerala[1].packname);
              cost=obkerala[1].price;
         }
         else if(n==3)
        {
              strcpy(package,obkerala[2].packname);
              cost=obkerala[2].price;
         }

   }
   if(n==4)
   return;

   u1.bill();
   u1.printbill();
}
void user::printbill()
{  
   clrscr();
   cout<<"------------------------------"<<endl;
   cout<<"       BILLING DETAILS :      "<<endl;
   cout<<"------------------------------"<<endl;
   cout<<"Name:"<<name<<endl;
   cout<<"Email id: "<<email<<endl;
   cout<<"Address: "<<address<<endl;
   cout<<endl<<endl;
   cout<<"PACKAGE DETAILS:"<<endl;
   cout<<"Package name     : "<<package<<endl;
   cout<<"PRICE PER PERSON : "<<endl;
   cout<<"Adult    : "<<cost<<endl;
   cout<<"Children : "<<cost/2<<endl;
   cout<<"Total no. of adults   : "<<adl<<endl;
   cout<<"Total no. of children : "<<child<<endl<<endl;
   cout<<"TOTAL AMOUNT: "<<price<<endl;
   cout<<"\n\n\tTHANKYOU FOR  CHOOSING FERRY MERRY TRAVELS :D "<<endl;
   cout<<"\t\tVISIT AGAIN :)";
}
//TEXT FILES FOR ALL THE PACKAGES
char ch;
void fjk1()
{
   j1.open("jkpack1");
   while(j1)
   {
	j1.get(ch);
	cout<<ch;
   }
   j1.close();
}
void fjk2()
{
   j2.open("jkpack2");
   while(j2)
   {
	j2.get(ch);
	cout<<ch;
   }
  j2.close();
}
void fjk3()
{
   j3.open("jkpack3");
   while(j3)
	{
	 j3.get(ch);
	 cout<<ch;
	}
   j3.close();
}
void fg1()
{
   g1.open("goa1");
   while(g1)
   {
         g1.get(ch);
         cout<<ch;
   }
   g1.close();
}
void fg2()
{
   g2.open("goa2");
   while(g2)
      {
         g2.get(ch);
         cout<<ch;
      }
   g2.close();
}
void fg3()
{
   g3.open("goa3");
   while(g3)
      {
         g3.get(ch);
         cout<<ch;
       }
   g3.close();
}
void fguj1()
{
   gj1.open("gujpack1");
   while(gj1)
      {
         gj1.get(ch);
         cout<<ch;
      }
   gj1.close();
}
void fguj2()
{
   gj2.open("gujpack2");
   while(gj2)
      {
         gj2.get(ch);
         cout<<ch;
       }
   gj2.close();
}
void fguj3()
{
   gj3.open("gujpack3");
   while(gj3)
      {
         gj3.get(ch);
         cout<<ch;
       }
   gj3.close();
}
void fkerala1()
{
   k1.open("kerala1");
   while(k1)
      {
         k1.get(ch);
         cout<<ch;
       }
   k1.close();
}
void fkerala2()
{
   k2.open("kerala2");
    while(k2)
      {
         k2.get(ch);
         cout<<ch;
       }
   k2.close();
}
void fkerala3()
{ 
   k3.open("kerala3");
   while(k3)
      {
         k3.get(ch);
         cout<<ch;
       }
   k3.close();
}
void bdeals()
{
   cout<<"1. Package 1"<<endl;
   bdeals1();
   cout<<endl<<"2. Package 2"<<endl;
   bdeals2();
   cout<<"Enter 3 to go Back to previous page"<<endl;
   cout<<"Enter the package of your choice:";
   cin>>chbd;
   if(chbd==3)
   return;   
   delay(1000);
   clrscr();
   u1.enterbd();
   }
void bdeals1()
{
   bd1.open("spgoa");
   while(bd1)
      {
         bd1.get(ch);
         cout<<ch;
       }
   bd1.close();
}
void bdeals2()
{
   bd2.open("jammu");
   while(bd2)
      {
         bd2.get(ch);
         cout<<ch;
       }
   bd2.close();
}
void gensearch()
{
   cout<<"Enter your choice:";
   cin>>gch;
}
void dispmenu()
{
   start:
   clrscr();
   cout<<endl;
   cout<<"       MAIN MENU      "<<endl;
   cout<<"----------------------"<<endl;
   cout<<"1. Search by place"<<endl;
   cout<<"2. Search by budget"<<endl;
   cout<<"3. Search by genre"<<endl;
   cout<<"4. Best deals and packages ;)"<<endl;
   cout<<"5. Exit"<<endl<<endl;
   cout<<"ENTER YOUR CHOICE";
   cin>>choice;
   switch(choice)
   {
       case 1:
          {
	     startpl:
	     clrscr();
   	     cout<<"  SEARCH BY PLACE : "<<endl;
	     cout<<"--------------------"<<endl;
	     cout<<"1. Jammu and Kashmir"<<endl;
	     cout<<"2. Goa"<<endl;
              cout<<"3. Gujarat"<<endl;
	     cout<<"4. Kerala"<<endl;
	     cout<<"5. Go back to MAIN MENU"<<endl;
	     cout<<"ENTER YOUR CHOICE";	     
              cin>>chplace;
	     if(chplace==1)
	      {
                     clrscr();
	            fjk1();
	            fjk2();
	            fjk3();
	            cout<<"Press 4 to Back to previous page"<<endl;
	            u1.enterchoice();
	            if(n==4)
	            goto startpl;
                }
	     else if(chplace==2)
	     { 
                     clrscr();
	            fg1();
	            fg2();
	            fg3();
	            cout<<"Press 4 to Back to previous page"<<endl;
	            u1.enterchoice();
	            if(n==4)
	            goto startpl;
	    }
	    else if(chplace==3)
	    {
                     clrscr();
	           fguj1();
	            fguj2();
	            fguj3();
	            cout<<"Press 4 to Back to previous page"<<endl;
	            u1.enterchoice();
	            if(n==4)
	            goto startpl;
	     }
	    else if(chplace==4)
	    { 
                     clrscr();
	            fkerala1();
	            fkerala2();
	            fkerala3();
	            cout<<"Press 4 to Back to previous page"<<endl;
	            u1.enterchoice();
	            if(n==4)
	            goto startpl;
	       }
	       else if(chplace==5)
	       goto start;

      }
   break;
       case 2:
       {
              startbud:
              clrscr();
              cout<<"Range"<<endl;
              cout<<"1. Rs.0 - Rs. 15,000"<<endl;
              cout<<"2. Rs.15,000 - Rs.25,000"<<endl;
              cout<<"3. Rs.25,000 - Rs.45,000"<<endl;
              cout<<"4. Back"<<endl;
              cin>>chb; char b;
              if(chb==1)
               {  
                   start1:
                   clrscr();
                   fjk3();
                   fg3();
                   cout<<"Press any key to go to next page:";
                   getch();
                   clrscr();
                   fguj3();
                   fkerala3();
                   cout<<"Press 'B' to go back to the previous page else press 'N' to continue:";
                   cin>>b;
                   if(b=='B' || b=='b')
                   goto start1;
                  else
                      {
                       cout<<"Press 5 to go back to the budget menu"<<endl;
                       u1.enterc();
                       if(m==5)
                       goto startbud;
                       }
                 }
                else if(chb==2)
                   {
                     start2:
                     clrscr();
                     fjk2();
                     fg2();
	            cout<<"Press any key to go to next page";
                     getch();
                     clrscr();
                     fguj2();
                     fkerala2();
	            cout<<"Press 'B' to go back else press 'N' to continue:";
	            cin>>b;
                     if(b=='B' || b=='b')
                     goto start1;
                     else
                    { 
                          cout<<"Press 5 to go back to the budget menu"<<endl;
                         u1.enterc();
                         if(m==5)
                          goto startbud;
                     }
             }
            else if(chb==3)
            { 
                start3:
                clrscr();
                fjk1();
                fg1();
                cout<<"Press any key to go to next page";
                getch();
                clrscr();
                fguj1();
                fkerala1();
	       cout<<"Press 'B' to go back else press 'N' to continue:";
	       cin>>b;
                if(b=='B' || b=='b')
                goto start3;
                else
                {
                     cout<<"Press 5 to go back to the budget menu"<<endl;
                     u1.enterc();
                     if(m==5)
                     goto startbud;
                 }
             }
              else if(chb==4)
              goto start;
              }
   break;

       case 3:
       {
              start4:
              clrscr();
              cout<<"   SEARCH BY GENRE :  "<<endl;
              cout<<"----------------------"<<endl;
              cout<<"1. Adventure"<<endl;
              cout<<"2. Historic places"<<endl;
              cout<<"3. Relaxation"<<endl;
              cout<<"4. Back"<<endl;
              cout<<"ENTER YOUR CHOICE: ";
              cin>>chgen;
              if(chgen==1)
             {
                 startad:
                 clrscr();
		cout<<"ADVENTURE"<<endl;
                cout<<"-------------------"<<endl;
                cout<<"1. Jammu and Kashmir"<<endl;
                cout<<"2. Goa"<<endl;
                cout<<"3. Gujarat"<<endl;
                cout<<"4.Back"<<endl;
                gensearch();
                if(gch==1)
                    {
                          clrscr();
                          fjk1();
                          fjk2();
                          fjk3();
                          cout<<"Press 4 to go back to previous menu"<<endl;
                          u1.enterchoice();
                          if(n==4)
                          goto startad;
                          }
                else if(gch==2)
                {
                     clrscr();
                     fg1();
                     fg2();
                     fg3();
                     cout<<"Press 4 to go back to previous menu"<<endl;
                     u1.enterchoice();
                     if(n==4)
                     goto startad;
                }
                else if(gch==3)
                { 
                     clrscr();
                     fguj1();
                     fguj2();
                     fguj3();
                     cout<<"Press 4 to go back to previous menu"<<endl;
                     u1.enterchoice();
                     if(n==4)
                     goto startad;
                }
                else if(gch==4)
                goto start4;
               }
              else if(chgen==2)
              {
                   starthist:
                   clrscr();
                   cout<<"       HISTORIC PLACES"<<endl;
                   cout<<"-------------------"<<endl;
                   cout<<"1.Gujarat"<<endl;
                   cout<<"2.Back"<<endl;
                   gensearch();
                   if(gch==1)
                   {
                        clrscr();
                        fguj1();
                        fguj2();
                        fguj2();
                        cout<<"Enter 4 to go back to the previous menu"<<endl;
                        u1.enterchoice();
                        if(n==4)
                        goto starthist;
                    }
                   else if(gch==2)
                   goto start4;
               }
 
            else if(chgen==3)
            {
            startrel:
            clrscr();
            cout<<"       RELAXATION" <<endl;         
            cout<<"-------------------"<<endl;
            cout<<"1. Kerala"<<endl;
            cout<<"2. Goa"<<endl;
            cout<<"3.Back"<<endl;
            gensearch();
            if(gch==1)
               {
                    clrscr();
                    fkerala1();
                    fkerala2();
                    fkerala3();
                    cout<<"Enter 4 to go back to the previous menu"<<endl;
                    u1.enterchoice();
                    if(n==4)
                    goto startrel;
               }
               else if(gch==2)
               {
               clrscr();
               fg1();
               fg2();
               fg3();
               cout<<"Enter 4 to go back to the previous menu"<<endl;
               u1.enterchoice();
               if(n==4)
               goto startrel;
               }
               else if(gch==3)
               goto start4;
         }
         else if(chgen==4)
         goto start;
         }
   break;

       case 4:
       {
            startbd:
            clrscr();
            cout<<"       BEST DEALS AND PACKAGES  ;)"<<endl;   
            cout<<"-------------------"<<endl;
            cout<<"1. Best deals"<<endl;
            cout<<"2. Go back to previous menu"<<endl;
            int c;
            cout<<"Enter your choice:";
            cin>>c;
            if(c==1)
            {
               bdeals();
               if(chbd==3)
               goto startbd;
             }
             else
             goto start;
       }
   break;
       case 5:
           main();
    break;
     }
   }
void mainmenu()
{
cout<<endl;
cout<<"                              FERRY MERRY TRAVELS                                            "<<endl<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cout<<"************************************WELCOME*************************************"<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
   cout<<endl<<endl<<endl;
   cout<<"1. Sign in"<<endl;
   cout<<"2. Exit"<<endl;
   int choice;
   cout<<"ENTER YOUR CHOICE"<<endl;
   cin>>choice;
   if(choice==1)
   u1.signin();
   else if(choice==2)
   exit(0); 
}
void main()
{
   clrscr();
   mainmenu();
   getch();
}
