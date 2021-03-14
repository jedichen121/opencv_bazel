// C++ CLI test program to read an image and convert it to gray with OpenCV 4
// You can compile the program with:
//     g++ cli_cpp_test.cpp -o cli_cpp_test `pkg-config --cflags --libs opencv`
//     g++ cv_test.cpp -o cv_test `pkg-config --cflags --libs opencv4`
// Be sure that you have an image file named "lake.jpg" in the work folder and run the code with:
//     ./cli_cpp_test


#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
	std::cout << "Hello, OpenCV version " << CV_VERSION << '\n';

	cv::Mat input = cv::imread("test.jpeg", 1);
	if(!input.data) {
		std::cout << "Error! Unable to find the image file!\n";
		return -1;
	}

	cv::Mat gray;
	cvtColor(input, gray, cv::COLOR_BGR2GRAY);

	cv::imwrite("test_gray.jpeg", gray);
}