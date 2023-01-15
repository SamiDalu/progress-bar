#include <iostream>
#include "../include/ProgressBar.hpp"

int main() {
	ProgressBar bar = ProgressBar("Download Progress", "[]", '#', 20);
	while (bar.getProgress() < 1.0) {
		//given program can decide specifically when to update the bar
		bar.updateProgress(0.18); //for demonstrative purposes
		bar.display();
	}
	std::cout<<"\nDownload complete!";
	return 0;
}