// egl_loader_autogen.h:
//   Simple EGL function loader lifted from ANGLE.

#ifndef EGL_LOADER_H_
#define EGL_LOADER_H_

#include <EGL/egl.h>
#include <EGL/eglext.h>

#define eglChooseConfig l_eglChooseConfig
#define eglCopyBuffers l_eglCopyBuffers
#define eglCreateContext l_eglCreateContext
#define eglCreatePbufferSurface l_eglCreatePbufferSurface
#define eglCreatePixmapSurface l_eglCreatePixmapSurface
#define eglCreateWindowSurface l_eglCreateWindowSurface
#define eglDestroyContext l_eglDestroyContext
#define eglDestroySurface l_eglDestroySurface
#define eglGetConfigAttrib l_eglGetConfigAttrib
#define eglGetConfigs l_eglGetConfigs
#define eglGetCurrentDisplay l_eglGetCurrentDisplay
#define eglGetCurrentSurface l_eglGetCurrentSurface
#define eglGetDisplay l_eglGetDisplay
#define eglGetError l_eglGetError
#define eglGetProcAddress l_eglGetProcAddress
#define eglInitialize l_eglInitialize
#define eglMakeCurrent l_eglMakeCurrent
#define eglQueryContext l_eglQueryContext
#define eglQueryString l_eglQueryString
#define eglQuerySurface l_eglQuerySurface
#define eglSwapBuffers l_eglSwapBuffers
#define eglTerminate l_eglTerminate
#define eglWaitGL l_eglWaitGL
#define eglWaitNative l_eglWaitNative
#define eglBindTexImage l_eglBindTexImage
#define eglReleaseTexImage l_eglReleaseTexImage
#define eglSurfaceAttrib l_eglSurfaceAttrib
#define eglSwapInterval l_eglSwapInterval
#define eglBindAPI l_eglBindAPI
#define eglQueryAPI l_eglQueryAPI
#define eglCreatePbufferFromClientBuffer l_eglCreatePbufferFromClientBuffer
#define eglReleaseThread l_eglReleaseThread
#define eglWaitClient l_eglWaitClient
#define eglGetCurrentContext l_eglGetCurrentContext
#define eglCreateSync l_eglCreateSync
#define eglDestroySync l_eglDestroySync
#define eglClientWaitSync l_eglClientWaitSync
#define eglGetSyncAttrib l_eglGetSyncAttrib
#define eglCreateImage l_eglCreateImage
#define eglDestroyImage l_eglDestroyImage
#define eglGetPlatformDisplay l_eglGetPlatformDisplay
#define eglCreatePlatformWindowSurface l_eglCreatePlatformWindowSurface
#define eglCreatePlatformPixmapSurface l_eglCreatePlatformPixmapSurface
#define eglWaitSync l_eglWaitSync
#define eglSetBlobCacheFuncsANDROID l_eglSetBlobCacheFuncsANDROID
#define eglCreateNativeClientBufferANDROID l_eglCreateNativeClientBufferANDROID
#define eglGetCompositorTimingANDROID l_eglGetCompositorTimingANDROID
#define eglGetCompositorTimingSupportedANDROID l_eglGetCompositorTimingSupportedANDROID
#define eglGetFrameTimestampSupportedANDROID l_eglGetFrameTimestampSupportedANDROID
#define eglGetFrameTimestampsANDROID l_eglGetFrameTimestampsANDROID
#define eglGetNextFrameIdANDROID l_eglGetNextFrameIdANDROID
#define eglGetNativeClientBufferANDROID l_eglGetNativeClientBufferANDROID
#define eglDupNativeFenceFDANDROID l_eglDupNativeFenceFDANDROID
#define eglPresentationTimeANDROID l_eglPresentationTimeANDROID
#define eglCreateDeviceANGLE l_eglCreateDeviceANGLE
#define eglReleaseDeviceANGLE l_eglReleaseDeviceANGLE
#define eglAcquireExternalContextANGLE l_eglAcquireExternalContextANGLE
#define eglReleaseExternalContextANGLE l_eglReleaseExternalContextANGLE
#define eglQueryDisplayAttribANGLE l_eglQueryDisplayAttribANGLE
#define eglQueryStringiANGLE l_eglQueryStringiANGLE
#define eglCopyMetalSharedEventANGLE l_eglCopyMetalSharedEventANGLE
#define eglForceGPUSwitchANGLE l_eglForceGPUSwitchANGLE
#define eglHandleGPUSwitchANGLE l_eglHandleGPUSwitchANGLE
#define eglReacquireHighPowerGPUANGLE l_eglReacquireHighPowerGPUANGLE
#define eglReleaseHighPowerGPUANGLE l_eglReleaseHighPowerGPUANGLE
#define eglPrepareSwapBuffersANGLE l_eglPrepareSwapBuffersANGLE
#define eglProgramCacheGetAttribANGLE l_eglProgramCacheGetAttribANGLE
#define eglProgramCachePopulateANGLE l_eglProgramCachePopulateANGLE
#define eglProgramCacheQueryANGLE l_eglProgramCacheQueryANGLE
#define eglProgramCacheResizeANGLE l_eglProgramCacheResizeANGLE
#define eglQuerySurfacePointerANGLE l_eglQuerySurfacePointerANGLE
#define eglCreateStreamProducerD3DTextureANGLE l_eglCreateStreamProducerD3DTextureANGLE
#define eglStreamPostD3DTextureANGLE l_eglStreamPostD3DTextureANGLE
#define eglSwapBuffersWithFrameTokenANGLE l_eglSwapBuffersWithFrameTokenANGLE
#define eglGetMscRateANGLE l_eglGetMscRateANGLE
#define eglExportVkImageANGLE l_eglExportVkImageANGLE
#define eglWaitUntilWorkScheduledANGLE l_eglWaitUntilWorkScheduledANGLE
#define eglGetSyncValuesCHROMIUM l_eglGetSyncValuesCHROMIUM
#define eglQueryDeviceAttribEXT l_eglQueryDeviceAttribEXT
#define eglQueryDeviceStringEXT l_eglQueryDeviceStringEXT
#define eglQueryDisplayAttribEXT l_eglQueryDisplayAttribEXT
#define eglQueryDmaBufFormatsEXT l_eglQueryDmaBufFormatsEXT
#define eglQueryDmaBufModifiersEXT l_eglQueryDmaBufModifiersEXT
#define eglCreatePlatformPixmapSurfaceEXT l_eglCreatePlatformPixmapSurfaceEXT
#define eglCreatePlatformWindowSurfaceEXT l_eglCreatePlatformWindowSurfaceEXT
#define eglGetPlatformDisplayEXT l_eglGetPlatformDisplayEXT
#define eglDebugMessageControlKHR l_eglDebugMessageControlKHR
#define eglLabelObjectKHR l_eglLabelObjectKHR
#define eglQueryDebugKHR l_eglQueryDebugKHR
#define eglClientWaitSyncKHR l_eglClientWaitSyncKHR
#define eglCreateSyncKHR l_eglCreateSyncKHR
#define eglDestroySyncKHR l_eglDestroySyncKHR
#define eglGetSyncAttribKHR l_eglGetSyncAttribKHR
#define eglCreateImageKHR l_eglCreateImageKHR
#define eglDestroyImageKHR l_eglDestroyImageKHR
#define eglLockSurfaceKHR l_eglLockSurfaceKHR
#define eglQuerySurface64KHR l_eglQuerySurface64KHR
#define eglUnlockSurfaceKHR l_eglUnlockSurfaceKHR
#define eglSetDamageRegionKHR l_eglSetDamageRegionKHR
#define eglSignalSyncKHR l_eglSignalSyncKHR
#define eglCreateStreamKHR l_eglCreateStreamKHR
#define eglDestroyStreamKHR l_eglDestroyStreamKHR
#define eglQueryStreamKHR l_eglQueryStreamKHR
#define eglQueryStreamu64KHR l_eglQueryStreamu64KHR
#define eglStreamAttribKHR l_eglStreamAttribKHR
#define eglStreamConsumerAcquireKHR l_eglStreamConsumerAcquireKHR
#define eglStreamConsumerGLTextureExternalKHR l_eglStreamConsumerGLTextureExternalKHR
#define eglStreamConsumerReleaseKHR l_eglStreamConsumerReleaseKHR
#define eglSwapBuffersWithDamageKHR l_eglSwapBuffersWithDamageKHR
#define eglWaitSyncKHR l_eglWaitSyncKHR
#define eglPostSubBufferNV l_eglPostSubBufferNV
#define eglStreamConsumerGLTextureExternalAttribsNV l_eglStreamConsumerGLTextureExternalAttribsNV

#if defined(__cplusplus)
extern "C" {
#endif  // defined(__cplusplus)
extern PFNEGLCHOOSECONFIGPROC l_eglChooseConfig;
extern PFNEGLCOPYBUFFERSPROC l_eglCopyBuffers;
extern PFNEGLCREATECONTEXTPROC l_eglCreateContext;
extern PFNEGLCREATEPBUFFERSURFACEPROC l_eglCreatePbufferSurface;
extern PFNEGLCREATEPIXMAPSURFACEPROC l_eglCreatePixmapSurface;
extern PFNEGLCREATEWINDOWSURFACEPROC l_eglCreateWindowSurface;
extern PFNEGLDESTROYCONTEXTPROC l_eglDestroyContext;
extern PFNEGLDESTROYSURFACEPROC l_eglDestroySurface;
extern PFNEGLGETCONFIGATTRIBPROC l_eglGetConfigAttrib;
extern PFNEGLGETCONFIGSPROC l_eglGetConfigs;
extern PFNEGLGETCURRENTDISPLAYPROC l_eglGetCurrentDisplay;
extern PFNEGLGETCURRENTSURFACEPROC l_eglGetCurrentSurface;
extern PFNEGLGETDISPLAYPROC l_eglGetDisplay;
extern PFNEGLGETERRORPROC l_eglGetError;
extern PFNEGLGETPROCADDRESSPROC l_eglGetProcAddress;
extern PFNEGLINITIALIZEPROC l_eglInitialize;
extern PFNEGLMAKECURRENTPROC l_eglMakeCurrent;
extern PFNEGLQUERYCONTEXTPROC l_eglQueryContext;
extern PFNEGLQUERYSTRINGPROC l_eglQueryString;
extern PFNEGLQUERYSURFACEPROC l_eglQuerySurface;
extern PFNEGLSWAPBUFFERSPROC l_eglSwapBuffers;
extern PFNEGLTERMINATEPROC l_eglTerminate;
extern PFNEGLWAITGLPROC l_eglWaitGL;
extern PFNEGLWAITNATIVEPROC l_eglWaitNative;
extern PFNEGLBINDTEXIMAGEPROC l_eglBindTexImage;
extern PFNEGLRELEASETEXIMAGEPROC l_eglReleaseTexImage;
extern PFNEGLSURFACEATTRIBPROC l_eglSurfaceAttrib;
extern PFNEGLSWAPINTERVALPROC l_eglSwapInterval;
extern PFNEGLBINDAPIPROC l_eglBindAPI;
extern PFNEGLQUERYAPIPROC l_eglQueryAPI;
extern PFNEGLCREATEPBUFFERFROMCLIENTBUFFERPROC l_eglCreatePbufferFromClientBuffer;
extern PFNEGLRELEASETHREADPROC l_eglReleaseThread;
extern PFNEGLWAITCLIENTPROC l_eglWaitClient;
extern PFNEGLGETCURRENTCONTEXTPROC l_eglGetCurrentContext;
extern PFNEGLCREATESYNCPROC l_eglCreateSync;
extern PFNEGLDESTROYSYNCPROC l_eglDestroySync;
extern PFNEGLCLIENTWAITSYNCPROC l_eglClientWaitSync;
extern PFNEGLGETSYNCATTRIBPROC l_eglGetSyncAttrib;
extern PFNEGLCREATEIMAGEPROC l_eglCreateImage;
extern PFNEGLDESTROYIMAGEPROC l_eglDestroyImage;
extern PFNEGLGETPLATFORMDISPLAYPROC l_eglGetPlatformDisplay;
extern PFNEGLCREATEPLATFORMWINDOWSURFACEPROC l_eglCreatePlatformWindowSurface;
extern PFNEGLCREATEPLATFORMPIXMAPSURFACEPROC l_eglCreatePlatformPixmapSurface;
extern PFNEGLWAITSYNCPROC l_eglWaitSync;
extern PFNEGLSETBLOBCACHEFUNCSANDROIDPROC l_eglSetBlobCacheFuncsANDROID;
extern PFNEGLCREATENATIVECLIENTBUFFERANDROIDPROC
    l_eglCreateNativeClientBufferANDROID;
extern PFNEGLGETCOMPOSITORTIMINGANDROIDPROC l_eglGetCompositorTimingANDROID;
extern PFNEGLGETCOMPOSITORTIMINGSUPPORTEDANDROIDPROC
    l_eglGetCompositorTimingSupportedANDROID;
extern PFNEGLGETFRAMETIMESTAMPSUPPORTEDANDROIDPROC
    l_eglGetFrameTimestampSupportedANDROID;
extern PFNEGLGETFRAMETIMESTAMPSANDROIDPROC l_eglGetFrameTimestampsANDROID;
extern PFNEGLGETNEXTFRAMEIDANDROIDPROC l_eglGetNextFrameIdANDROID;
extern PFNEGLGETNATIVECLIENTBUFFERANDROIDPROC l_eglGetNativeClientBufferANDROID;
extern PFNEGLDUPNATIVEFENCEFDANDROIDPROC l_eglDupNativeFenceFDANDROID;
extern PFNEGLPRESENTATIONTIMEANDROIDPROC l_eglPresentationTimeANDROID;
extern PFNEGLCREATEDEVICEANGLEPROC l_eglCreateDeviceANGLE;
extern PFNEGLRELEASEDEVICEANGLEPROC l_eglReleaseDeviceANGLE;
extern PFNEGLACQUIREEXTERNALCONTEXTANGLEPROC l_eglAcquireExternalContextANGLE;
extern PFNEGLRELEASEEXTERNALCONTEXTANGLEPROC l_eglReleaseExternalContextANGLE;
extern PFNEGLQUERYDISPLAYATTRIBANGLEPROC l_eglQueryDisplayAttribANGLE;
extern PFNEGLQUERYSTRINGIANGLEPROC l_eglQueryStringiANGLE;
extern PFNEGLCOPYMETALSHAREDEVENTANGLEPROC l_eglCopyMetalSharedEventANGLE;
extern PFNEGLFORCEGPUSWITCHANGLEPROC l_eglForceGPUSwitchANGLE;
extern PFNEGLHANDLEGPUSWITCHANGLEPROC l_eglHandleGPUSwitchANGLE;
extern PFNEGLREACQUIREHIGHPOWERGPUANGLEPROC l_eglReacquireHighPowerGPUANGLE;
extern PFNEGLRELEASEHIGHPOWERGPUANGLEPROC l_eglReleaseHighPowerGPUANGLE;
extern PFNEGLPREPARESWAPBUFFERSANGLEPROC l_eglPrepareSwapBuffersANGLE;
extern PFNEGLPROGRAMCACHEGETATTRIBANGLEPROC l_eglProgramCacheGetAttribANGLE;
extern PFNEGLPROGRAMCACHEPOPULATEANGLEPROC l_eglProgramCachePopulateANGLE;
extern PFNEGLPROGRAMCACHEQUERYANGLEPROC l_eglProgramCacheQueryANGLE;
extern PFNEGLPROGRAMCACHERESIZEANGLEPROC l_eglProgramCacheResizeANGLE;
extern PFNEGLQUERYSURFACEPOINTERANGLEPROC l_eglQuerySurfacePointerANGLE;
extern PFNEGLCREATESTREAMPRODUCERD3DTEXTUREANGLEPROC
    l_eglCreateStreamProducerD3DTextureANGLE;
extern PFNEGLSTREAMPOSTD3DTEXTUREANGLEPROC l_eglStreamPostD3DTextureANGLE;
extern PFNEGLSWAPBUFFERSWITHFRAMETOKENANGLEPROC
    l_eglSwapBuffersWithFrameTokenANGLE;
extern PFNEGLGETMSCRATEANGLEPROC l_eglGetMscRateANGLE;
extern PFNEGLEXPORTVKIMAGEANGLEPROC l_eglExportVkImageANGLE;
extern PFNEGLWAITUNTILWORKSCHEDULEDANGLEPROC l_eglWaitUntilWorkScheduledANGLE;
extern PFNEGLGETSYNCVALUESCHROMIUMPROC l_eglGetSyncValuesCHROMIUM;
extern PFNEGLQUERYDEVICEATTRIBEXTPROC l_eglQueryDeviceAttribEXT;
extern PFNEGLQUERYDEVICESTRINGEXTPROC l_eglQueryDeviceStringEXT;
extern PFNEGLQUERYDISPLAYATTRIBEXTPROC l_eglQueryDisplayAttribEXT;
extern PFNEGLQUERYDMABUFFORMATSEXTPROC l_eglQueryDmaBufFormatsEXT;
extern PFNEGLQUERYDMABUFMODIFIERSEXTPROC l_eglQueryDmaBufModifiersEXT;
extern PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC
    l_eglCreatePlatformPixmapSurfaceEXT;
extern PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC
    l_eglCreatePlatformWindowSurfaceEXT;
extern PFNEGLGETPLATFORMDISPLAYEXTPROC l_eglGetPlatformDisplayEXT;
extern PFNEGLDEBUGMESSAGECONTROLKHRPROC l_eglDebugMessageControlKHR;
extern PFNEGLLABELOBJECTKHRPROC l_eglLabelObjectKHR;
extern PFNEGLQUERYDEBUGKHRPROC l_eglQueryDebugKHR;
extern PFNEGLCLIENTWAITSYNCKHRPROC l_eglClientWaitSyncKHR;
extern PFNEGLCREATESYNCKHRPROC l_eglCreateSyncKHR;
extern PFNEGLDESTROYSYNCKHRPROC l_eglDestroySyncKHR;
extern PFNEGLGETSYNCATTRIBKHRPROC l_eglGetSyncAttribKHR;
extern PFNEGLCREATEIMAGEKHRPROC l_eglCreateImageKHR;
extern PFNEGLDESTROYIMAGEKHRPROC l_eglDestroyImageKHR;
extern PFNEGLLOCKSURFACEKHRPROC l_eglLockSurfaceKHR;
extern PFNEGLQUERYSURFACE64KHRPROC l_eglQuerySurface64KHR;
extern PFNEGLUNLOCKSURFACEKHRPROC l_eglUnlockSurfaceKHR;
extern PFNEGLSETDAMAGEREGIONKHRPROC l_eglSetDamageRegionKHR;
extern PFNEGLSIGNALSYNCKHRPROC l_eglSignalSyncKHR;
extern PFNEGLCREATESTREAMKHRPROC l_eglCreateStreamKHR;
extern PFNEGLDESTROYSTREAMKHRPROC l_eglDestroyStreamKHR;
extern PFNEGLQUERYSTREAMKHRPROC l_eglQueryStreamKHR;
extern PFNEGLQUERYSTREAMU64KHRPROC l_eglQueryStreamu64KHR;
extern PFNEGLSTREAMATTRIBKHRPROC l_eglStreamAttribKHR;
extern PFNEGLSTREAMCONSUMERACQUIREKHRPROC l_eglStreamConsumerAcquireKHR;
extern PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALKHRPROC
    l_eglStreamConsumerGLTextureExternalKHR;
extern PFNEGLSTREAMCONSUMERRELEASEKHRPROC l_eglStreamConsumerReleaseKHR;
extern PFNEGLSWAPBUFFERSWITHDAMAGEKHRPROC l_eglSwapBuffersWithDamageKHR;
extern PFNEGLWAITSYNCKHRPROC l_eglWaitSyncKHR;
extern PFNEGLPOSTSUBBUFFERNVPROC l_eglPostSubBufferNV;
extern PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALATTRIBSNVPROC
    l_eglStreamConsumerGLTextureExternalAttribsNV;

typedef void (*GenericProc)(void);
typedef GenericProc(KHRONOS_APIENTRY *LoadProc)(const char *);
void LoadEGL(LoadProc loadProc);

#if defined(__cplusplus)
}       // extern "C"
#endif  // defined(__cplusplus)

#endif  // EGL_LOADER_H_