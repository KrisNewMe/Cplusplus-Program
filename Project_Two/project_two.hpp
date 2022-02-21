//
//  project_two.hpp
//  PROJECT_TWO
//
//  Created by Kristopher Collis  on 1/26/22.
//

#ifndef project_two_hpp
#define project_two_hpp


#include <stdio.h>
#include <iostream>
#include <string>
#include <istream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

class Display
{
public:
  //input display
  void SetInputDisplay ();

  //balance and interest without monthly deposit
  void SetBalanceWithoutDeposit ();

  //balance and interest with monthly deposit
  void SetBalanceWithDeposit ();

  //Getters
  double GetInputDisplay () const;
  double GetBalanceWithoutDeposit () const;
  double GetBalanceWithDeposit () const;
//Private class variables
private:
  double m_initalAmount = 0.00;
  double m_monDeposit = 0.00;
  double m_annInterest = 0.00;
  double m_numberYears = 0.00;
};
#endif /* project_two_hpp */
