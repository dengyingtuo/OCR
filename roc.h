#ifndef ROC_H
#define ROC_H

#include "ocr.h"

class ROC
{
public:
    ROC(Mat testlabels, Mat responses, float truelabel);
    float precision();
    float recall();
    float FScore();

private:
    Mat testlabels, responses;
    int TP, TN, FP, FN;
};

#endif // ROC_H