/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_libjpegturbo_turbojpeg_TJ */

#ifndef _Included_org_libjpegturbo_turbojpeg_TJ
#define _Included_org_libjpegturbo_turbojpeg_TJ
#ifdef __cplusplus
extern "C" {
#endif
#undef org_libjpegturbo_turbojpeg_TJ_NUMSAMP
#define org_libjpegturbo_turbojpeg_TJ_NUMSAMP 6L
#undef org_libjpegturbo_turbojpeg_TJ_SAMP_444
#define org_libjpegturbo_turbojpeg_TJ_SAMP_444 0L
#undef org_libjpegturbo_turbojpeg_TJ_SAMP_422
#define org_libjpegturbo_turbojpeg_TJ_SAMP_422 1L
#undef org_libjpegturbo_turbojpeg_TJ_SAMP_420
#define org_libjpegturbo_turbojpeg_TJ_SAMP_420 2L
#undef org_libjpegturbo_turbojpeg_TJ_SAMP_GRAY
#define org_libjpegturbo_turbojpeg_TJ_SAMP_GRAY 3L
#undef org_libjpegturbo_turbojpeg_TJ_SAMP_440
#define org_libjpegturbo_turbojpeg_TJ_SAMP_440 4L
#undef org_libjpegturbo_turbojpeg_TJ_SAMP_411
#define org_libjpegturbo_turbojpeg_TJ_SAMP_411 5L
#undef org_libjpegturbo_turbojpeg_TJ_NUMPF
#define org_libjpegturbo_turbojpeg_TJ_NUMPF 12L
#undef org_libjpegturbo_turbojpeg_TJ_PF_RGB
#define org_libjpegturbo_turbojpeg_TJ_PF_RGB 0L
#undef org_libjpegturbo_turbojpeg_TJ_PF_BGR
#define org_libjpegturbo_turbojpeg_TJ_PF_BGR 1L
#undef org_libjpegturbo_turbojpeg_TJ_PF_RGBX
#define org_libjpegturbo_turbojpeg_TJ_PF_RGBX 2L
#undef org_libjpegturbo_turbojpeg_TJ_PF_BGRX
#define org_libjpegturbo_turbojpeg_TJ_PF_BGRX 3L
#undef org_libjpegturbo_turbojpeg_TJ_PF_XBGR
#define org_libjpegturbo_turbojpeg_TJ_PF_XBGR 4L
#undef org_libjpegturbo_turbojpeg_TJ_PF_XRGB
#define org_libjpegturbo_turbojpeg_TJ_PF_XRGB 5L
#undef org_libjpegturbo_turbojpeg_TJ_PF_GRAY
#define org_libjpegturbo_turbojpeg_TJ_PF_GRAY 6L
#undef org_libjpegturbo_turbojpeg_TJ_PF_RGBA
#define org_libjpegturbo_turbojpeg_TJ_PF_RGBA 7L
#undef org_libjpegturbo_turbojpeg_TJ_PF_BGRA
#define org_libjpegturbo_turbojpeg_TJ_PF_BGRA 8L
#undef org_libjpegturbo_turbojpeg_TJ_PF_ABGR
#define org_libjpegturbo_turbojpeg_TJ_PF_ABGR 9L
#undef org_libjpegturbo_turbojpeg_TJ_PF_ARGB
#define org_libjpegturbo_turbojpeg_TJ_PF_ARGB 10L
#undef org_libjpegturbo_turbojpeg_TJ_PF_CMYK
#define org_libjpegturbo_turbojpeg_TJ_PF_CMYK 11L
#undef org_libjpegturbo_turbojpeg_TJ_NUMCS
#define org_libjpegturbo_turbojpeg_TJ_NUMCS 5L
#undef org_libjpegturbo_turbojpeg_TJ_CS_RGB
#define org_libjpegturbo_turbojpeg_TJ_CS_RGB 0L
#undef org_libjpegturbo_turbojpeg_TJ_CS_YCbCr
#define org_libjpegturbo_turbojpeg_TJ_CS_YCbCr 1L
#undef org_libjpegturbo_turbojpeg_TJ_CS_GRAY
#define org_libjpegturbo_turbojpeg_TJ_CS_GRAY 2L
#undef org_libjpegturbo_turbojpeg_TJ_CS_CMYK
#define org_libjpegturbo_turbojpeg_TJ_CS_CMYK 3L
#undef org_libjpegturbo_turbojpeg_TJ_CS_YCCK
#define org_libjpegturbo_turbojpeg_TJ_CS_YCCK 4L
#undef org_libjpegturbo_turbojpeg_TJ_FLAG_BOTTOMUP
#define org_libjpegturbo_turbojpeg_TJ_FLAG_BOTTOMUP 2L
#undef org_libjpegturbo_turbojpeg_TJ_FLAG_FASTUPSAMPLE
#define org_libjpegturbo_turbojpeg_TJ_FLAG_FASTUPSAMPLE 256L
#undef org_libjpegturbo_turbojpeg_TJ_FLAG_FASTDCT
#define org_libjpegturbo_turbojpeg_TJ_FLAG_FASTDCT 2048L
#undef org_libjpegturbo_turbojpeg_TJ_FLAG_ACCURATEDCT
#define org_libjpegturbo_turbojpeg_TJ_FLAG_ACCURATEDCT 4096L
/*
 * Class:     org_libjpegturbo_turbojpeg_TJ
 * Method:    bufSize
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_org_libjpegturbo_turbojpeg_TJ_bufSize
(JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     org_libjpegturbo_turbojpeg_TJ
 * Method:    bufSizeYUV
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_org_libjpegturbo_turbojpeg_TJ_bufSizeYUV__IIII
(JNIEnv *, jclass, jint, jint, jint, jint);

/*
 * Class:     org_libjpegturbo_turbojpeg_TJ
 * Method:    bufSizeYUV
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_org_libjpegturbo_turbojpeg_TJ_bufSizeYUV__III
(JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     org_libjpegturbo_turbojpeg_TJ
 * Method:    planeSizeYUV
 * Signature: (IIIII)I
 */
JNIEXPORT jint JNICALL Java_org_libjpegturbo_turbojpeg_TJ_planeSizeYUV__IIIII
(JNIEnv *, jclass, jint, jint, jint, jint, jint);

/*
 * Class:     org_libjpegturbo_turbojpeg_TJ
 * Method:    planeWidth
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_org_libjpegturbo_turbojpeg_TJ_planeWidth__III
(JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     org_libjpegturbo_turbojpeg_TJ
 * Method:    planeHeight
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_org_libjpegturbo_turbojpeg_TJ_planeHeight__III
(JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     org_libjpegturbo_turbojpeg_TJ
 * Method:    getScalingFactors
 * Signature: ()[Lorg/libjpegturbo/turbojpeg/TJScalingFactor;
 */
JNIEXPORT jobjectArray JNICALL Java_org_libjpegturbo_turbojpeg_TJ_getScalingFactors
(JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
