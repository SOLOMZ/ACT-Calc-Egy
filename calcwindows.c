//BY SOLO (WINDOWS VERSION)
#include <stdio.h>
#include <windows.h>
int sleept=99999;
char *satavg;
int calca(int t[], int numb); int v;
const int maxsat = 1600;const int maxact = 36;const int maxgpa = 40;const int maxgov = 124;
double govuno(double sat1s, double sat2s, double gpas, double diff);
int main (void)
{
                                                                                                              
printf("Welcome to ACT Calc Egy!!\n\n");
                                                                                                                     
   int choice; int st=0;
   printf("Choose your test!\n 1: Non-Subject Test\n 2: Subject Test\n 3: Score to Tansiq\n : "); scanf_s("%d", &choice); switch(choice){ case 1 :
  printf("Enter your ACT 1 Math score: ");int act1[3]; scanf_s("%d", &act1[st]); st++;
  printf("Enter your ACT 1 English score: ");scanf_s("%d", &act1[st]); st++;
  printf("Enter your ACT 1 Reading score: ");scanf_s("%d", &act1[st]); st++; int act1avg; act1avg = calca(act1,st); switch(act1avg){case 9 : satavg = "590~610"; break; case 10 : satavg="620~640"; break; case 11 : satavg="650~680"; break; case 12 : satavg="690~720"; break; case 13 : satavg="730~770"; break; case 14 : satavg="780~820"; break; case 15 : satavg="780~820"; break; case 16 : satavg="880~910"; break; case 17 : satavg="920~950"; break; case 18 : satavg = "960~980"; break; case 19 : satavg ="990~1020"; break; case 20 : satavg="1030~1050"; break; case 21 : satavg="1060~1090"; break; case 22 : satavg="1100~1120"; break; case 23 : satavg="1130~1150"; break; case 24 : satavg="1160~1190"; break; case 25 : satavg="1200~1220"; break; case 26 : satavg="1230~1250"; break; case 27 : satavg="1260~1290"; break; case 28 : satavg="1300~1320"; break; case 29 : satavg="1330~1350"; break; case 30 : satavg="1360~1380"; break; case 31 : satavg="1390~1410"; break; case 32 : satavg="1420~1440"; break; case 33 : satavg="1450~1480"; break; case 34 : satavg="1490~1520"; break; case 35 : satavg="1530~1560"; break; case 36 : satavg="1570~1600"; break; default : satavg="unknown"; break;} st=0;
  printf("\nYour ACT 1 score is: %d and your ACT 1 score translated to SAT 1 is between %s\n\n", act1avg, satavg); Sleep(sleept); break; 
  case 2 : 
 printf("Enter your ACT 2 Math score: ");int act2[2]; scanf_s("%d", &act2[st]); st++;
  printf("Enter your ACT 2 Biology/Chemistry/Physics score: ");scanf_s("%d", &act2[st]); st++;
  int act2avg;  act2avg = calca(act2,st);  switch(act2avg){case 9 : satavg = "590~610"; break; case 10 : satavg="620~640"; break; case 11 : satavg="650~680"; break; case 12 : satavg="690~720"; break; case 13 : satavg="730~770"; break; case 14 : satavg="780~820"; break; case 15 : satavg="780~820"; break; case 16 : satavg="880~910"; break; case 17 : satavg="920~950"; break; case 18 : satavg = "960~980"; break; case 19 : satavg ="990~1020"; break; case 20 : satavg="1030~1050"; break; case 21 : satavg="1060~1090"; break; case 22 : satavg="1100~1120"; break; case 23 : satavg="1130~1150"; break; case 24 : satavg="1160~1190"; break; case 25 : satavg="1200~1220"; break; case 26 : satavg="1230~1250"; break; case 27 : satavg="1260~1290"; break; case 28 : satavg="1300~1320"; break; case 29 : satavg="1330~1350"; break; case 30 : satavg="1360~1380"; break; case 31 : satavg="1390~1410"; break; case 32 : satavg="1420~1440"; break; case 33 : satavg="1450~1480"; break; case 34 : satavg="1490~1520"; break; case 35 : satavg="1530~1560"; break; case 36 : satavg="1570~1600"; break; default : satavg="unknown"; break;} st=0;
  printf("\nYour ACT 2 score is: %d and your ACT 2 score translated to SAT 2 is between %s\n\n", act2avg, satavg); Sleep(sleept); break;
  case 3 :  
                        printf("Enter your SAT 1 score: ");int SAT1; scanf_s("%d", &SAT1);
                        printf("Enter your SAT 2 score: ");int SAT2; scanf_s("%d", &SAT2); 
                        printf("Enter your GPA: ");int gpa; scanf_s("%d", &gpa);
                        printf("\nThis score is for which university type?:\n 1: Government University\n 2: Private University\n : "); scanf_s("%d", &choice); 
                        switch(choice){ case 1 : v = 69; break; case 2 : v = 75; break;}; if(SAT1 < 1090){v=60;}; double res; res=govuno(SAT1, SAT2, gpa, v);
                        if(choice==1){ const int year = 2020;
                        printf("\nHere is a list of available colleges you can apply to with your score (according to year %d):\n", year); 
const char listname[173][255]={"Akhbar Al Youm Academy October 6 Administrative Sciences English", "International Academy of Engineering and Media Sciences","Higher for languages ​​in New Egypt","Academy of Bakhbar Today, Technology Journalism, October 6","Higher Marketing Marketing Division gathered the first","Aali Administrative, Business Administration St., 5th cluster","Abbasid Institute for Computers and Commercial Sciences - Business Administration St.","The International Higher Institute for Languages ​​and Translation in the fifth gathering","International Higher Institute for Languages ​​and Interpretation, Fifth Settlement (English Trade)","New Cairo Institute for Administrative Sciences and Computer in First Settlement (Division of Administration)","Canadian Institute of Management 6 October","International Media City Al-Shorouk","Nile High for Commercial Sciences Division of Mansoura Systems","International Academy of Media Sciences October","Aali Computer and Information Systems PJSC, management of fifth settlement","Canadian higher technology management pool, fifth settlement","Management Technology and Information Systems Port Said","Higher Institute of Technology, Ramadan 10 Branch, October 6 Engineering","The Higher Institute of Engineering and Technology, Tanta","Alexandria Media Institute, Semouha","Canada Techno Media Fifth","Fine Arts (Arts) Luxor","Applied Arts Banha","Fine Arts (Arts) Minya","Alexandria Trade","Alsun Sohag","Abbasid Institute for Commercial Sciences and Computers S.A.E (Information Systems)","Higher Institute of Technology, 10th of Ramadan, Division (Engineering), with fees","Alsun Minya","Fayoum Computers and Information Mathematics","Artistic Quality Education Alexandria","Canadian Higher Institute for Computer, Fifth Settlement, New Cairo","Veterinary Medicine Sadat City","Cairo Media","Alexandria Sciences","Navigation and Space Technology, Beni Suef","Fine Arts (Architecture) Helwan","Alsun Luxor","Alsun Aswan","Al Amiriya Integrated Technology Complex","Veterinary Medicine Sohag","Computers and Information Menoufia, Shebin El-Kom, Sport","Alsun Beni Suef","University of Science and Technology Engineering Zewail","Veterinary Medicine, Arish","Alsun Suez Canal in Ismailia","Alsun Ain Shams","Computers and Artificial Intelligence Subtrah Sports","Veterinary medicine Zagazig","Computers and artificial intelligence Sadat Sport","Applied arts Helwan","Assiut Computers and Information Sports","Veterinary Medicine Minya","Computers and Artificial Intelligence, South Valley, Hurghada Branch, Sports","Fine Arts (Arts) Asyut","Luxor Computers and Information Sports","Computer and Artificial Intelligence Banha Sports","Fine Arts (Arts) Helwan","The Egyptian-Chinese Technology, Suez Canal, Ismailia","Petroleum Sciences and Mining Matrouh","Applied Health Sciences Technology Beni Suef","Fine Arts (Arts) Alexandria","Computers and artificial intelligence Helwan Sport","Fine Arts (Arts) Mansoura","Veterinary Medicine Assiut","Veterinary medicine Mansoura","Veterinary Medicine Banha","Veterinary Medicine Aswan","Fine Arts (Architecture) Alexandria","Veterinary Medicine Damanhur","Computers and information Ain Shams Sport","Computers and information Damanhur with Nubaria Sports","Computers and information Kafr El Sheikh Sports","Artificial Intelligence Kafr El Sheikh Sports","Urban Planning Cairo","Energy Engineering Aswan","Electronic Engineering Menoufia Menouf","Computers and information Tanta Sports","Veterinary medicine Kafr El Sheikh","South Valley Engineering","Sohag Engineering","Minya Engineering","Engineering of the Suez Canal in Ismailia","Engineering Beni Suef","Veterinary Medicine Menoufia","Port Said Engineering","Damietta Engineering","Suez engineering","Alsun Kafr El Sheikh","Assiut Engineering","Fayoum Engineering","Zagazig Engineering","Banha Engineering","Menoufia Engineering in Shebin El-Kom","Benha Engineering, Shubra","Computers and Artificial Intelligence Cairo Sports","Aswan Engineering","Engineering Helwan in Matareya","Veterinary Medicine Cairo","Helwan Engineering","Mansoura Engineering","Kafr El Sheikh Engineering","Politics and Economy of Beni Suef","Tanta Engineering","Economy and political science of Suez","Ain Shams Engineering","Computer and Data Science Alexandria Sports","Economic Studies and Political Science Alexandria","Veterinary Medicine Alexandria","Cairo Engineering","Alexandria Engineering","South Valley Physiotherapy","Physiotherapy in Beni Suef","Physiotherapy Kafr El-Sheikh","Physiotherapist Banha","Engineering Petroleum and Mining Suez","Sohag Pharmacy","Pharmacy of Beni Suef","Port Said Pharmacy","Minya Pharmacy","Pharmacy Zagazig","Mansoura Pharmacy","Physiotherapy Cairo","Assiut Pharmacy","Damanhour Pharmacy","Pharmacy and drug manufacturing Kafr El-Sheikh","Tanta Pharmacy","Suez Canal Pharmacy in Ismailia","Sadat City Pharmacy","Economics and Political Science, Cairo","Menoufia Applied Health Sciences Technology","Alexandria, Pharmacy","Fayoum Pharmacy","Menoufia Pharmacy","Helwan Pharmacy","Ain Shams Pharmacy","Cairo Pharmacy","South Valley Pharmacy","Southern Valley Dentistry","Dentistry of Beni Suef","Assiut Dentistry","Suez Dentistry","Dentistry of the Suez Canal in Ismailia","Southern Valley Medicine","Sohag Medicine","Aswan Medicine","Dentistry in Zagazig","Assiut Medicine","Dentistry Kafr El Sheikh","Minya Medicine","Medicine Beni Suef","Mansoura Dentistry","Minya Dentistry","Suez Medicine","Medicine Faqous","Dentistry Tanta","Suez Canal Medicine Ismailia","Medicine Zagazig","Kafr El-Sheikh Medicine","Port Said Medicine","Tanta Medicine","Fayoum Medicine","Alexandria Medicine","Alexandria Dentistry","Mansoura Medicine","Menoufia medicine Shebin El-Kom","Fayoum Dentistry","Dentistry, Ain Shams","Medicine Banha","Cairo dentistry","Helwan Medicine","Ain Shams Medicine","Cairo Medicine"};const double listnum[173]={71.3750000,71.7855000,73.4500000,73.9250000,73.9500000,74.0750000,74.1185000,74.3975000,74.7310000,74.7500000,75.5000000,75.9700000,77.5000000,78.1750000,78.3750000,79.2687500,80.0062500,81.2000000,85.1312500,85.7062500,85.9470000,86.2062500,86.5562500,86.6952500,87.0375000,87.2625000,87.2812500,88.1662500,88.6695000,89.3562500,89.4000000,89.4625000,90.7312500,90.9312500,93.7312500,97.5875000,97.5875000,97.6300000,98.0062500,98.0937500,98.4750000,98.7255000,99.6500000,99.9875000,100.043750,100.075000,100.358000,100.506250,100.762500,100.850000,100.944207,101.312500,101.406250,101.537500,102.012500,102.168750,102.293750,102.343750,102.425000,102.531250,102.593750,103.162500,103.450000,103.562500,103.881250,104.056250,104.156250,104.518750,104.793750,105.187500,105.550000,105.650000,105.671250,105.686250,106.068750,106.212500,106.712500,106.937500,106.985000,107.257012,107.387500,107.443750,107.650000,107.675000,107.856250,108.025000,108.175000,108.225000,108.325000,108.493750,108.550000,109.143750,109.194250,109.450000,109.543750,109.687500,109.712500,110.081250,110.425000,111.232012,111.512500,111.787500,111.943750,112.225000,112.731250,112.768750,112.825000,112.937500,112.981250,113.250000,113.350000,113.781250,114.137500,114.343750,114.568750,114.650000,114.850000,114.893750,115.037500,115.056250,115.106250,115.281250,115.488750,115.662500,115.700000,115.719970,115.918750,116.037500,116.162500,116.237500,116.256250,116.275000,116.500000,116.537500,116.543750,116.650000,116.800000,117.081250,117.118750,117.239000,117.243750,117.250000,117.256250,117.268750,117.381250,117.437500,117.493750,117.675000,117.681250,117.712500,117.725000,117.918750,118.112500,118.162500,118.200000,118.268750,118.356250,118.593750,118.743750,118.881250,119.218750,119.356250,119.387500,119.712500,119.743750,119.800000,120.180000,120.325000,120.418750,120.656250,121.512500,121.675000,121.900000};
                        int tr=0; while (res>=listnum[tr] && tr < 173) {printf("\n%s (%lf)",listname[tr],listnum[tr]); tr++;};
                        }; printf("\n\nYour score is: %lf and the maximum is %d!\n\n", res, maxgov); Sleep(sleept); break;
  }                                                                                                                                                                                                                                                 
 return 0; 
};
int calca(int t[],int numb){int i; int avg = 0; for(i=0;i<numb;i++){avg+=t[i];}; return avg/i;};
double govuno(double sat1s, double sat2s, double gpas, double diff){double sat1t; double sat2t; sat1t=(sat1s*diff)/maxsat; sat2t=(sat2s*15)/maxsat; return sat1t+sat2t+gpas;};
