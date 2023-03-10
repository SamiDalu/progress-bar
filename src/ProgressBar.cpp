#include <iostream>
#include "../include/ProgressBar.hpp"

ProgressBar::ProgressBar(std::string name, std::string outer_chars, char inner_char, int length) : name_(name), outer_chars_(outer_chars), inner_char_(inner_char), length_(length) {} //initialization constructor 

ProgressBar::ProgressBar() : name_("Progress"), outer_chars_( "[]" ), inner_char_('|'), length_(50) {} //default constructor

void ProgressBar::updateProgress(double increase) {
  progress_ += increase;
}

void ProgressBar::display() {
	if (progress_>1)
		progress_ = 1.0;
  std::cout<<name_<<std::endl;
  std::cout<<outer_chars_[0];
  for (int i = 0; i < length_; i++) {
      if (i<= (int) (progress_ * length_)) 
        std::cout<<inner_char_; //prints bar's inner character (representing progress) if i <= progress end
      else
         std::cout<<" "; //prints space otherwise
  }
  std::cout<<outer_chars_[1]<<" "<<(int) (progress_*100)<<"%"<<std::endl;
}

void ProgressBar::reset() {
    progress_ = 0.0;
}

double ProgressBar::getProgress() {
	return progress_;
}
