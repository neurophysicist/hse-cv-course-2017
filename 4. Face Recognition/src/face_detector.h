#pragma once

#include <opencv2/opencv.hpp>

class FaceDetector
{
public:
	struct FaceRegion
	{
		cv::Rect rect;
		cv::Mat image;
	};

	FaceDetector(const std::string& configPath);
	std::vector<FaceRegion> detect(cv::Mat img);

private:
	cv::CascadeClassifier m_classifier;
};
