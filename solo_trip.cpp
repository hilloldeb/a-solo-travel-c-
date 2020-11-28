#include<iostream>
#include <cstdlib>

int main(){

  int percent = 0;
  int goa = 0;
  int kerla = 0;
  int manali = 0;
  int answer1,answer2, answer3;

    std::cout <<"====================\n";
    std::cout << "A Solo travel Trip\n";
    std::cout <<"====================\n\n";

std::cout <<"(if you want to go to this trip your exam percentage have to above 75% )\n";

std::cout << "What is your percentage: ";
std::cin >>percent ;

if(percent >= 75){
  std::cout <<"Woww!! pack your bags !!!!\n\n";
std::cout <<"There are three options for your solo trip\n";
std::cout <<"1)Goa\n";
std::cout <<"2)Kerla\n";
std::cout <<"3)Manali\n\n";
}else {
  std::cout <<"Oops!! sorry for this time !! study hard!!\n";
}
 std::cout << "( But before that you have to  choose some options then through your answer destination will choose\n";
 
//  ------ question 1  ------
 std::cout << "Q1) Choose one \n";
 std::cout << "1) beach\n";
 std::cout << "2) mountains\n";
 std::cout << "3) snow\n";

 std::cout <<"enter your answer : ";
 std::cin >> answer1;

 if (answer1 == 1)
    goa++;
  else if (answer1 == 2)
    kerla++;
  else if (answer1 == 3)
    manali++;

// ------ question 2--------

  std::cout << "Q2) Choose the food \n ";
  std::cout <<"1) maggie\n";
  std::cout <<"2) fish\n";
  std::cout <<"3) dosa\n";

  std::cout << " enter your answer : ";
  std::cin >>answer2;

  if (answer2 == 1)
    manali++;
  else if (answer2 == 2)
    goa++;
  else if (answer2 == 3)
   kerla++;

// ------ question 3--------

  std::cout << "Q2) Choose the season \n ";
  std::cout <<"1) summer\n";
  std::cout <<"2) winter\n";
  std::cout <<"3) rain\n";

  std::cout << " enter your answer : ";
  std::cin >>answer2;

  if (answer3 == 1)
    goa++;
  else if (answer2 == 2)
    manali++;
  else if (answer2 == 3)
   kerla++;
  //  sorting-----------

  std::cout<<"\n congrats!!! you are going ... ";

  int max = 0;
  std::string house;

  if (goa > max)
  {

    max = goa;
    house = "Goa";

  }

  if (kerla > max)
  {

    max = kerla;
    house = "Kerla";

  }

  if (manali > max)
  {

    max = manali;
    house = "Manali";

  }
  std::cout << house << "!\n";

  return 0;
}

