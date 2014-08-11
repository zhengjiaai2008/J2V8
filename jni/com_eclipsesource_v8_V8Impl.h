/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_eclipsesource_v8_V8 */

#ifndef _Included_com_eclipsesource_v8_V8
#define _Included_com_eclipsesource_v8_V8
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _initExistingV8Object
 * Signature: (IILjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1initExistingV8Object
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _initNewV8Object
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1initNewV8Object
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _releaseRuntime
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1releaseRuntime
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _createIsolate
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1createIsolate
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeIntScript
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1executeIntScript
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeDoubleScript
 * Signature: (ILjava/lang/String;)D
 */
JNIEXPORT jdouble JNICALL Java_com_eclipsesource_v8_V8__1executeDoubleScript
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeStringScript
 * Signature: (ILjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_eclipsesource_v8_V8__1executeStringScript
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeBooleanScript
 * Signature: (ILjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1executeBooleanScript
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeObjectScript
 * Signature: (ILjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1executeObjectScript
  (JNIEnv *, jobject, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeVoidScript
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1executeVoidScript
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeArrayScript
 * Signature: (ILjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1executeArrayScript
  (JNIEnv *, jobject, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _release
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1release
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _contains
 * Signature: (IILjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1contains
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getKeys
 * Signature: (I)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_eclipsesource_v8_V8__1getKeys
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getType
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1getType
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getInteger
 * Signature: (IILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1getInteger
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getBoolean
 * Signature: (IILjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1getBoolean
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getDouble
 * Signature: (IILjava/lang/String;)D
 */
JNIEXPORT jdouble JNICALL Java_com_eclipsesource_v8_V8__1getDouble
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getString
 * Signature: (IILjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_eclipsesource_v8_V8__1getString
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getArray
 * Signature: (IILjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1getArray
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getObject
 * Signature: (IILjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1getObject
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeIntFunction
 * Signature: (IILjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1executeIntFunction
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeDoubleFunction
 * Signature: (IILjava/lang/String;I)D
 */
JNIEXPORT jdouble JNICALL Java_com_eclipsesource_v8_V8__1executeDoubleFunction
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeStringFunction
 * Signature: (IILjava/lang/String;I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_eclipsesource_v8_V8__1executeStringFunction
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeBooleanFunction
 * Signature: (IILjava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1executeBooleanFunction
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeArrayFunction
 * Signature: (IILjava/lang/String;II)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1executeArrayFunction
  (JNIEnv *, jobject, jint, jint, jstring, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeObjectFunction
 * Signature: (IILjava/lang/String;II)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1executeObjectFunction
  (JNIEnv *, jobject, jint, jint, jstring, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeVoidFunction
 * Signature: (IILjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1executeVoidFunction
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _add
 * Signature: (IILjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1add__IILjava_lang_String_2I
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addObject
 * Signature: (IILjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addObject
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _add
 * Signature: (IILjava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1add__IILjava_lang_String_2Z
  (JNIEnv *, jobject, jint, jint, jstring, jboolean);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _add
 * Signature: (IILjava/lang/String;D)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1add__IILjava_lang_String_2D
  (JNIEnv *, jobject, jint, jint, jstring, jdouble);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _add
 * Signature: (IILjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1add__IILjava_lang_String_2Ljava_lang_String_2
  (JNIEnv *, jobject, jint, jint, jstring, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addArray
 * Signature: (IILjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addArray
  (JNIEnv *, jobject, jint, jint, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _registerJavaMethod
 * Signature: (ILjava/lang/Object;Ljava/lang/String;[Ljava/lang/Class;)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1registerJavaMethod
  (JNIEnv *, jobject, jint, jobject, jstring, jobjectArray);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _initNewV8Array
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1initNewV8Array
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _releaseArray
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1releaseArray
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetSize
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1arrayGetSize
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetInteger
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1arrayGetInteger
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetBoolean
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1arrayGetBoolean
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetDouble
 * Signature: (III)D
 */
JNIEXPORT jdouble JNICALL Java_com_eclipsesource_v8_V8__1arrayGetDouble
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetString
 * Signature: (III)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_eclipsesource_v8_V8__1arrayGetString
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetObject
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1arrayGetObject
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetArray
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1arrayGetArray
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addArrayIntItem
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addArrayIntItem
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addArrayBooleanItem
 * Signature: (IIZ)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addArrayBooleanItem
  (JNIEnv *, jobject, jint, jint, jboolean);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addArrayDoubleItem
 * Signature: (IID)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addArrayDoubleItem
  (JNIEnv *, jobject, jint, jint, jdouble);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addArrayStringItem
 * Signature: (IILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addArrayStringItem
  (JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addArrayArrayItem
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addArrayArrayItem
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addArrayObjectItem
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addArrayObjectItem
  (JNIEnv *, jobject, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
