// Blob.h

#ifndef MY_BLOB
#define MY_BLOB

#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

///////////////////////////////////////////////////////////////////////////////////////////////////
class Tracker {
public:
    // member variables ///////////////////////////////////////////////////////////////////////////

    bool blnStillBeingTracked;


	double dblCurrentDiagonalSize;
	double dblCurrentAspectRatio;

	cv::Rect currentBoundingRect;
	std::vector<cv::Point> centerPositions;
    cv::Point predictedNextPosition;
	int numPositions;

    // function prototypes ////////////////////////////////////////////////////////////////////////
	cv::Point predictNextPosition(void);
	void addBoundingRect(cv::Rect BoundingRect);
	void addCenterPosition(cv::Point position){ centerPositions.push_back(position); }
	cv::Point getCurrentPosition(void){ return centerPositions.back(); }

};

#endif    // MY_BLOB


