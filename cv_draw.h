#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>


  
// Driver Code
int main(int argc, char** argv)
{
    // Creating a blank image with
    // white background
    cv::Mat image(500, 500, CV_8UC3,
              cv::Scalar(255, 255, 255));
  
    // Check if the image is created
    // successfully or not
    if (!image.data) {
        std::cout << "Could not open or "
                  << "find the image\n";
  
        return 0;
    }
  
    // Top Left Corner
    cv::Point p1(30, 30);
  
    // Bottom Right Corner
    cv::Point p2(255, 255);
  
    int thickness = 2;
  
    // Drawing the Rectangle
    cv::rectangle(image, p1, p2,
              cv::Scalar(255, 0, 0),
              thickness, cv::LINE_8);
  
    // Show our image inside a window
    cv::imshow("Output", image);
    cv::waitKey(0);
  
    return 0;
}