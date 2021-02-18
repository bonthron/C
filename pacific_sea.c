#include "pacific_sea.h"

int main(void){

  const int pacific_sea = AREA;
  double acres, sq_miles, sq_feet, sq_inches;
  
  sq_miles = SQ_MILES_PER_SQ_KILOMETER * pacific_sea;
  sq_feet = SQ_FEET_PER_SQ_MILE * sq_miles;
  printf("\nThe Pacific Sea covers an area of %d square kilometers.\n", pacific_sea);
  printf("\nor %22.7e square feet.\n", sq_feet);  
}

