
#ifndef NDK_DEMO_T98_H //如果没有定义这个宏
#define NDK_DEMO_T98_H //定义这个宏


//自定义宏
#ifndef isRelease
#define isRelease 1 //是否是正式环境下

#if isRelease == true
#define RELEASE //正式环境下

#elif  isRelease == false
#define DEBUG

#endif
#endif

#endif //NDK_DEMO_T98_H
