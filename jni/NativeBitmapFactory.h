#include <jni.h>
#include <SkBitmap.h>

#ifndef _Included_tv_cjump_jni_NativeBitmapFactory
#define _Included_tv_cjump_jni_NativeBitmapFactory
#ifdef __cplusplus
extern "C" {
#endif
jobject createBitmap(JNIEnv * env ,jobject  obj,jint w,jint h,SkBitmap::Config config,jboolean hasAlpha,int isMuttable);

JNIEXPORT jobject JNICALL Java_tv_cjump_jni_NativeBitmapFactory_createBitmap(JNIEnv * env ,jobject  obj,jint w,jint h,SkBitmap::Config config,jboolean hasAlph);

JNIEXPORT jobject JNICALL Java_tv_cjump_jni_NativeBitmapFactory_createBitmap19(JNIEnv * env ,jobject  obj,jint w,jint h,SkBitmap::Config config,jboolean hasAlph);
#ifdef __cplusplus
}
#endif
#endif