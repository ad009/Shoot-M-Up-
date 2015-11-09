//
//  VideoFrame.h

#ifndef OpenCVTutorial_VideoFrame_h
#define OpenCVTutorial_VideoFrame_h

#include <cstddef>

struct VideoFrame
{
    size_t width;
    size_t height;
    size_t stride;
    
    unsigned char * data;
};

#endif
