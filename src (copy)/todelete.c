#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include "Eigen/Dense"
#include <vector>
#include <string>
#include <fstream>
#include "kalman_filter.h"
#include "tools.h"

using namespace std;
using Eigen::MatrixXd;
using Eigen::VectorXd;


int main()
{
	int i=12;

	cout<<i<<endl;

	int k;

	12>>k;

	cout<<k<<endl;

	MatrixXd F_laser_;
	F_laser_=MatrixXd(4,4);

	F_laser_ << 1, 0, 1, 0,
                  0, 1, 0, 1,
                  0, 0, 1, 0,
                  0, 0, 0, 1;

	VectorXd x_;                  

    x_ = VectorXd(4);
    x_ << 1, 1, 1, 1;

    x_ = F_laser_ * x_;

    cout<<M_PI<<endl;

    VectorXd holachi(3);
  
  //change atan to atan2 as suggested in project notes
  holachi << sqrt(8), atan2(32,333), 3;

  cout<< holachi<<endl;

  cout<< holachi[1]<<endl;


	return 0;
}