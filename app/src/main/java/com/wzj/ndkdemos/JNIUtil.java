package com.wzj.ndkdemos;

/**
 * Created by MR_Wang on 2017/5/15.
 */

public class JNIUtil {

    static {
        System.loadLibrary("NDKDemos");

    }
    public native String test();
}
