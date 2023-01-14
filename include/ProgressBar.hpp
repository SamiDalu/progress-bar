#include <string>

class ProgressBar {
  private:
    std::string name_;
    std::string outer_chars_;
    char inner_char_;
    unsigned int length_;
    double progress_ = 0.0;
  public:
    ProgressBar(std::string name, std::string outer_chars,  char inner_char, int length);
    ProgressBar();
    void updateProgress(double increase);
    void display();
    void reset();
};
