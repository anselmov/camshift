//
// Created by glist on 31/05/16.
//

#ifndef DISPLAYIMAGE_MYCV_H
#define DISPLAYIMAGE_MYCV_H

#include <ml.h>

namespace cv {
    RotatedRect MyCamShift(InputArray _probImage, Rect &window,
                           TermCriteria criteria);

    int mycvMeanShift(const void *imgProb, CvRect windowIn,
                      CvTermCriteria criteria, CvConnectedComp *comp);


    namespace ndeke {
        extern int i, j;
        extern int movX[10], movY[10];
        extern int shouldMoveLeft(int windowX, int movX[10]);
    }

}
#endif //DISPLAYIMAGE_MYCV_H
