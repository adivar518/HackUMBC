#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  //Variables to collect user information
  int grade;
  int subject;
  int className;
  string email;
  string firstn;
  string lastn;
  int question;
  char zoom;
  //Vectors for each subject
   vector<string>subjects={"Math","English","Science","History","Art","Computers","Health"};

   vector<string>math={"Algebra 1","Geometry", "Algebra 2","Pre Calculus","AP Calculus AB","AP Calculus BC","AP Stat"};

   vector<string>english={"English 9","English 10", "English 11","English 11","AP Lit","AP Lang"};

   vector<string>science={"Biology","Chemistry", "Physics","Environmental science","Forensics"};

   vector<string>history={"US History","Government and Politics", "World History","Geography"};

   vector<string>art={"Drawing","Painting", "Photography"};

   vector<string>computers={"AP Comp Sci","Programming 1", "AP Programming 2","Web design"};
   
   vector<string>health={"Health","Anatomy"};

  //Welcome screen
  cout << "**********************************************\nWelcome to the high school tutoring program!\nWe have tutors in every subject available at this time\n**********************************************\n\n";
  cout<<"Enter information below so we can set you up with one of our tutors\n";
  cout<<"What is your first name? ";
  cin>>firstn;
  cout<<"What is your last name? ";
  cin>>lastn;
  cout<<"What grade are you in?(9,10,11,12) \n";
  cin>>grade;

  //User chooses subject
  cout<<"What subject(number)?\n";
  for(int i=0;i<subjects.size();i++)
    cout<<i+1<<". "<<subjects[i]<<"\n";
  cin>>subject;

  cout<<"What class?(number)\n";
  //Math class list
  if(subject==1){
    for(int i=0;i<math.size();i++)
      cout<<i+1<<". "<<math[i]<<"\n";
    cin>>className;
  }
  //English class list
  else if(subject==2){
    for(int i=0;i<english.size();i++)
      cout<<i+1<<". "<<english[i]<<"\n";
    cin>>className;
  }  
  
  //Science class list
  else if(subject==3){
    for(int i=0;i<science.size();i++)
      cout<<i+1<<". "<<science[i]<<"\n";
    cin>>className;
  }

  //History class list
  else if(subject==4){
    for(int i=0;i<history.size();i++)
      cout<<i+1<<". "<<history[i]<<"\n";
    cin>>className;
  }

  //Art class list
  else if(subject==5){
    for(int i=0;i<art.size();i++)
      cout<<i+1<<". "<<art[i]<<"\n";
    cin>>className;
  }

  //Computers class list
  else if(subject==6){
    for(int i=0;i<computers.size();i++)
      cout<<i+1<<". "<<computers[i]<<"\n";
    cin>>className;
  }

  
  else if(subject==7){
    for(int i=0;i<health.size();i++)
      cout<<i+1<<". "<<health[i]<<"\n";
    cin>>className;
  }

  cout<<"What do you want to ask them?\n";

  cout<<"1) Homework Help\n2) Clarification\n3) Test/Quiz Review\n4) Other\n";
  cout<<"Option: ";
  cin>>question;
  
  cout<<"Would you like to join a Zoom meeting right now with a tutor? (y/n)";
  cin>>zoom;
  
  if (zoom == 'y'){
    if (subject == 1){
      cout<<"Here is the Zoom Meeting Number for a "<<subjects[0]<<" class tutor:\nID:345 958 3495\n";
    }
  
   else if (subject == 2){
     cout<<"Here is the Zoom Meeting Number for a "<<subjects[1]<<"class tutor:\nID: 948 837 4829\n";
   }

   else if (subject == 3){
     cout<<"Here is the Zoom Meeting Number for a "<<subjects[2]<<"  class tutor:\nID: 928 493 6059\n";
   }
   else if (subject == 4){
      cout<<"Here is the Zoom Meeting Number for a "<<subjects[3]<<" class tutor:\nID: 235 584 3948\n";
    }
   else if (subject == 5){
     cout<<"Here is the Zoom Meeting Number for a "<<subjects[4]<<" class tutor:\nID: 372 584 3845\n";
   }
   else if (subject == 6){
     cout<<"Here is the Zoom Meeting Number for a "<<subjects[5]<<" class tutor:\nID:237 589 3758\n";
   }
  else if (subject == 7){
    cout<<"Here is the Zoom Meeting Number for a "<<subjects[6]<<" class tutor:\nID:438 593 5839\n";
  }
  }

  cout<<"Your email so we can contact you at a later date:\n";
  cin>>email;
  
  cout<<"**********************************************\nThank you "<<firstn<<" "<<lastn<<"! I hope your questions were answered. If you need anything else feel free to email us at HSTutoring@gmail.com or attend one of our zoom calls!\n**********************************************";

 
}
