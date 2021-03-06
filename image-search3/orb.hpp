#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/nonfree/features2d.hpp> //
#include <opencv2/nonfree/nonfree.hpp>
#include <opencv2/imgproc/imgproc.hpp> // resize()

#include <iostream>
#include <algorithm> // sort()
#include <dirent.h>
#include <ctime>
#include <string>
#include <queue>
#include <vector>
#include <set>
#include <iomanip> // setfill, setw

using namespace cv;
using namespace std;

#define IMAGE_DIR "../Dataset/imageset1000/"
#define FEATURES_SIZE 500 
#define RATIO 0.8
#define SCALE_FACTOR 0.9

#define GROUPS 250
#define GROUP_SIZE 4

int  get_search_score(string input_image_prefix, int num, int k);
std::vector<string> searchImages_ORB(string input_image, string img_dir, int k, int nfeatures, double ratio);
vector<string> searchImages_SIFT(string input_image, string img_dir, int k, double ratio);



