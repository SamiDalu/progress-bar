class ProgressBar {
  private:
    string name_;
    char[] outer_chars_;
    char inner_char_;
    unsigned int length_;
    double progress_ = 0.0;
  public:
    ProgressBar(string name, char[] outer_chars,  char inner_char, int length);
    ProgressBar();
    void updateProgress(double increase);
    void display();
    void load();
}
