#include <iostream>
#include "../include/ProgressBar.hpp"

int main() {
	ProgressBar bar = ProgressBar("Download Progress", "[]", '#', 20);
	ProgressBar dflt = ProgressBar(); //default bar
	while (bar.getProgress() < 1.0) {
		//given program can decide specifically when to update the bar
		bar.updateProgress(0.35); //for demonstrative purposes
		bar.display();
	}
	std::cout<<"\nDownload complete!"<<std::endl;
	
	while (dflt.getProgress() < 1.0) {
		dflt.updateProgress(0.35); //for demonstrative purposes
		dflt.display();
	}
	return 0;
}