#include "frc_robot_jni_CodeJNI.h"

#include "wpi/jni_util.h"

extern "C" {
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved) {
    // Check to ensure the JNI version is valid

    JNIEnv* env;
    if (vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6) != JNI_OK)
        return JNI_ERR;

    // In here is also where you store things like class references
    // if they are ever needed

    return JNI_VERSION_1_6;
}

JNIEXPORT void JNICALL JNI_OnUnload(JavaVM* vm, void* reserved) {}

/*
 * Class:     frc_robot_jni_CodeJNI
 * Method:    myFunc
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_frc_robot_jni_CodeJNI_myFunc
  (JNIEnv *, jclass) {
      return 42;
  }


}