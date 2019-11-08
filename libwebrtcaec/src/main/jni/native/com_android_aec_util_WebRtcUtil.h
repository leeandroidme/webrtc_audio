/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_android_aec_util_WebRtcUtil */

#ifndef _Included_com_android_aec_util_WebRtcUtil
#define _Included_com_android_aec_util_WebRtcUtil
#ifdef __cplusplus
extern "C" {
#endif

void shortTobyte(int , short * , unsigned char *);
/*
 * Class:     com_android_aec_util_WebRtcUtil
 * Method:    init
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_android_aec_util_WebRtcUtil_init
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_android_aec_util_WebRtcUtil
 * Method:    free
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_android_aec_util_WebRtcUtil_free
  (JNIEnv *, jclass);

/*
 * Class:     com_android_aec_util_WebRtcUtil
 * Method:    BufferFarend
 * Signature: ([BJ)I
 */
JNIEXPORT jint JNICALL Java_com_android_aec_util_WebRtcUtil_BufferFarend
  (JNIEnv *, jclass, jbyteArray, jlong);
/*
 * Class:     com_android_aec_util_WebRtcUtil
 * Method:    test1
 * Signature: (V)I
 */
JNIEXPORT jint JNICALL Java_com_android_aec_util_WebRtcUtil_test1
  (JNIEnv *, jclass);
/*
 * Class:     com_android_aec_util_WebRtcUtil
 * Method:    process
 * Signature: ([B[BJJJ)I
 */
JNIEXPORT jint JNICALL Java_com_android_aec_util_WebRtcUtil_process
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jlong, jlong, jlong);

/*
 * Class:     com_android_aec_util_WebRtcUtil
 * Method:    bufferFarendAndProcess
 * Signature: ([B[B[BIIIFF)I
 */
JNIEXPORT jint JNICALL Java_com_android_aec_util_WebRtcUtil_bufferFarendAndProcess
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jbyteArray, jint, jint, jint, jfloat, jfloat);




/*
 * Class:     com_webrtc_ns_AudioProcessJni
 * Method:    AgcFree
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_android_aec_util_WebRtcUtil_AgcFree
  (JNIEnv *, jclass);

/*
 * Class:     com_webrtc_ns_AudioProcessJni
 * Method:    AgcFun
 * Signature: ([S[SI)I
 */
JNIEXPORT jint JNICALL Java_com_android_aec_util_WebRtcUtil_AgcFun
  (JNIEnv *, jclass, jshortArray, jshortArray, jint);

/*
 * Class:     com_webrtc_ns_AudioProcessJni
 * Method:    AgcInit
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_android_aec_util_WebRtcUtil_AgcInit(JNIEnv *, jclass, jlong, jlong, jlong);

JNIEXPORT jint JNICALL  Java_com_android_aec_util_WebRtcUtil_processNS32K(JNIEnv *, jclass, jobject ,
                                                jshortArray, jint);
JNIEXPORT jint JNICALL  Java_com_android_aec_util_WebRtcUtil_AgcTransform(JNIEnv *, jclass, jstring ,
                                                jstring, jint);
JNIEXPORT jint JNICALL  Java_com_android_aec_util_WebRtcUtil_noiseSuppression(JNIEnv *, jclass, jstring ,
                                                jstring);
JNIEXPORT void JNICALL  Java_com_android_aec_util_WebRtcUtil_aec(JNIEnv *, jclass, jstring ,
                                                jstring,jstring);
#ifdef __cplusplus
}
#endif
#endif