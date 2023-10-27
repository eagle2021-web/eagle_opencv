#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
using namespace cv;
using namespace std;
int main() {
	Mat image;
	image = imread("E:/tmp/1.jpg");
	if (image.empty()) {
		std::cout << "aaa" << std::endl;
		return -1;
	}
	std::cout << "hello world" << std::endl;
	namedWindow("Display", WINDOW_AUTOSIZE);
	imshow("DSAFS", image);
	waitKey(0);
	return 0;
}