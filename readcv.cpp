#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <string>
using namespace cv;
using namespace std;

int ShowImage()
{
  String imageName("./image.png");

  Mat image;
  image = imread(imageName, IMREAD_COLOR);

  namedWindow("Display window", WINDOW_AUTOSIZE);
  imshow("Display window", image);
  waitKey(0);
}