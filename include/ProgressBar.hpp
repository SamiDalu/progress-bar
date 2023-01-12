#include <string>
class ProgressBar {
  private:
    std::string name_;
    char outer_chars_ [2];
    char inner_char_;
    unsigned int length_;
    double progress_ = 0.0;
  public:
    ProgressBar(std::string name, char outer_chars [2],  char inner_char, int length);
    ProgressBar();
    void updateProgress(double increase);
    void display();
    void reset();
};
