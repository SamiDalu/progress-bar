#include <iostream>
#include "ProgressBar.hpp"

ProgressBar::ProgressBar(string name, char[] outer_chars, char inner_char, int length) : name_(name), outer_chars_(outer_chars),
inner_char_(inner_char), length_(length); //initialization constructor 

ProgressBar::ProgressBar() : name_("Progress"), outer_chars_( {'[', ']'} ), inner_char_('█'), length_(50); //default constructor

void ProgressBar::updateProgress(double increase) {
  progress_ += increase;
}

void ProgressBar::display() {
  std::cout<<name_<<std::endl;
  std::cout<<outer_chars_[0];
  for (int i = 0; i < length_); i++) {
      if (i<= (int) (progress_ * length_)) 
        std::cout<<inner_char_; //prints bar's inner character (representing progress) if i <= progress end
      else
         std::cout<<" "; //prints space otherwise
  }
  std::cout<<outer_chars[1]<<" "<<(int) (progress*100)<<"%";
}

void ProgressBar::reset() {
    progress_ = 0.0;
}
