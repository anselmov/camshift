//
// Created by glist on 31/05/16.
//

#ifndef DISPLAYIMAGE_MYCV_H
#define DISPLAYIMAGE_MYCV_H

#include <ml.h>

namespace cv {
    RotatedRect MyCamShift(InputArray _probImage, Rect &window,
                           TermCriteria criteria);
}
#endif //DISPLAYIMAGE_MYCV_H
