#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_whiteknifestudios_com_photochess_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
