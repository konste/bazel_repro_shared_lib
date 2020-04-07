#ifdef _MSC_VER
    #define EXPORT __declspec(dllexport)
#else
    #define EXPORT extern
#endif

EXPORT unsigned int base_shared(void);
