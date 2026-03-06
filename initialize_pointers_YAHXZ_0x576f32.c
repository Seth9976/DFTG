// 函数名称: ?initialize_pointers@@YAHXZ
// 虚拟地址: 0x576f32
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t?initialize_pointers@@YAHXZ()
{
    // 第一条实际指令: HMODULE hModule = GetModuleHandleW(u"kernel32.dll")
    HMODULE hModule = GetModuleHandleW(u"kernel32.dll")
    data_6cf278 = GetProcAddress(hModule, "FlsAlloc") ^ __security_cookie
    data_6cf27c = GetProcAddress(hModule, "FlsFree") ^ __security_cookie
    data_6cf280 = GetProcAddress(hModule, "FlsGetValue") ^ __security_cookie
    data_6cf284 = GetProcAddress(hModule, "FlsSetValue") ^ __security_cookie
    data_6cf288 = GetProcAddress(hModule, "InitializeCriticalSectionEx") ^ __security_cookie
    data_6cf28c = GetProcAddress(hModule, "InitOnceExecuteOnce") ^ __security_cookie
    data_6cf290 = GetProcAddress(hModule, "CreateEventExW") ^ __security_cookie
    data_6cf294 = GetProcAddress(hModule, "CreateSemaphoreW") ^ __security_cookie
    data_6cf298 = GetProcAddress(hModule, "CreateSemaphoreExW") ^ __security_cookie
    data_6cf29c = GetProcAddress(hModule, "CreateThreadpoolTimer") ^ __security_cookie
    data_6cf2a0 = GetProcAddress(hModule, "SetThreadpoolTimer") ^ __security_cookie
    data_6cf2a4 = GetProcAddress(hModule, "WaitForThreadpoolTimerCallbacks") ^ __security_cookie
    data_6cf2a8 = GetProcAddress(hModule, "CloseThreadpoolTimer") ^ __security_cookie
    data_6cf2ac = GetProcAddress(hModule, "CreateThreadpoolWait") ^ __security_cookie
    data_6cf2b0 = GetProcAddress(hModule, "SetThreadpoolWait") ^ __security_cookie
    data_6cf2b4 = GetProcAddress(hModule, "CloseThreadpoolWait") ^ __security_cookie
    data_6cf2b8 = GetProcAddress(hModule, "FlushProcessWriteBuffers") ^ __security_cookie
    data_6cf2bc = GetProcAddress(hModule, "FreeLibraryWhenCallbackReturns") ^ __security_cookie
    data_6cf2c0 = GetProcAddress(hModule, "GetCurrentProcessorNumber") ^ __security_cookie
    data_6cf2c4 = GetProcAddress(hModule, "CreateSymbolicLinkW") ^ __security_cookie
    data_6cf2c8 = GetProcAddress(hModule, "GetCurrentPackageId") ^ __security_cookie
    data_6cf2cc = GetProcAddress(hModule, "GetTickCount64") ^ __security_cookie
    data_6cf2d0 = GetProcAddress(hModule, "GetFileInformationByHandleEx") ^ __security_cookie
    data_6cf2d4 = GetProcAddress(hModule, "SetFileInformationByHandle") ^ __security_cookie
    data_6cf2d8 = GetProcAddress(hModule, "GetSystemTimePreciseAsFileTime") ^ __security_cookie
    data_6cf2dc = GetProcAddress(hModule, "InitializeConditionVariable") ^ __security_cookie
    data_6cf2e0 = GetProcAddress(hModule, "WakeConditionVariable") ^ __security_cookie
    data_6cf2e4 = GetProcAddress(hModule, "WakeAllConditionVariable") ^ __security_cookie
    data_6cf2e8 = GetProcAddress(hModule, "SleepConditionVariableCS") ^ __security_cookie
    data_6cf2ec = GetProcAddress(hModule, "InitializeSRWLock") ^ __security_cookie
    data_6cf2f0 = GetProcAddress(hModule, "AcquireSRWLockExclusive") ^ __security_cookie
    data_6cf2f4 = GetProcAddress(hModule, "TryAcquireSRWLockExclusive") ^ __security_cookie
    data_6cf2f8 = GetProcAddress(hModule, "ReleaseSRWLockExclusive") ^ __security_cookie
    data_6cf2fc = GetProcAddress(hModule, "SleepConditionVariableSRW") ^ __security_cookie
    data_6cf300 = GetProcAddress(hModule, "CreateThreadpoolWork") ^ __security_cookie
    data_6cf304 = GetProcAddress(hModule, "SubmitThreadpoolWork") ^ __security_cookie
    data_6cf308 = GetProcAddress(hModule, "CloseThreadpoolWork") ^ __security_cookie
    data_6cf30c = GetProcAddress(hModule, "CompareStringEx") ^ __security_cookie
    data_6cf310 = GetProcAddress(hModule, "GetLocaleInfoEx") ^ __security_cookie
    data_6cf314 = GetProcAddress(hModule, "LCMapStringEx") ^ __security_cookie
    return 0
}
