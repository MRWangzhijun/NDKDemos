//
// Created by MR_Wang on 2017/5/15.
//

#include "com_wzj_ndkdemos_JNIUtil.h"

JNIEXPORT jstring JNICALL Java_com_wzj_ndkdemos_JNIUtil_test(JNIEnv *env, jobject obj)
{
return env -> NewStringUTF("Hello World!");
}