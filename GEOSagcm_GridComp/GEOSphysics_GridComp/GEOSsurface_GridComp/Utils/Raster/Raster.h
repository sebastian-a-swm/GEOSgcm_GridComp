
#define VERIFY_(A)   IF(A/=0)THEN;PRINT *,'ERROR AT LINE ', __LINE__;STOP;ENDIF 
#define _ASSERT(A,msg)   if(.not.A)then;print *,'Error:',__FILE__,__LINE__;stop;endif 
#define REAL_        real(kind=REAL64)
#define RASTER_PI    3.14159265358979323846264338_REAL64
#define RASTERUNDEF  -999
