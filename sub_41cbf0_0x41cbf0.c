// 函数名称: sub_41cbf0
// 虚拟地址: 0x41cbf0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_41cbf0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59cd85
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_34 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t xmm0 = sub_41e120(0.261799395f)
    void* eax_3 = data_aca1ec
    data_1511af4 = xmm0
    data_1511afc = 0x3dcccccd
    data_1511b00 = 0x40400000
    data_1511b24 = 0
    data_1511b28 = 0x40400000
    uint128_t xmm1 = zx.o(*(eax_3 + 0x18))
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x14)))
    int32_t var_18 = 0xbf800000
    float xmm1_2 = _mm_cvtepi32_ps(xmm1) / xmm0_2
    int128_t xmm0_3 = data_63c264
    data_1511af8 = xmm1_2
    data_1511b04 = xmm0_3
    data_1511b14 = data_63c274
    data_1511b14:0xc = 0x40400000
    int64_t var_20 = _mm_unpacklo_ps(0x80000000, 0x80000000)
    void var_30
    data_1511b04:4.o = *sub_41e000(&var_30, &data_5d2300, &var_20, &var_30)
    void* eax_6 = sub_492b90(&data_1511af4)
    
    if (data_114e7d9 == 0)
        sub_489550(eax_6, &data_5b2591, "gDraw3DData.submittingRenderItems", 
            "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0x307, "Draw3DOverlayColor")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    bool cond:1 = data_6cfe4c != 0
    data_aca6b8 = data_60c800
    data_aca6a4 = 1
    data_aca230 = 0xff000000
    
    if (cond:1)
        sub_489550(0xff000000, &data_5b2591, "gClient == NULL", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x88, "EnterClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (data_6cfe48 != 0)
        sub_489550(0xff000000, &data_5b2591, "gServer == NULL", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x89, "EnterClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    data_6cfe4c = 0x62a5d8
    int32_t var_8_1 = 0
    int32_t result = sub_424930()
    int32_t var_8_2 = 1
    
    if (data_6cfe4c == 0)
        sub_489550(result, &data_5b2591, "gClient != NULL", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x8f, "ExitClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    if (data_6cfe48 == 0)
        data_6cfe4c = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
        return result
    
    sub_489550(result, &data_5b2591, "gServer == NULL", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x90, "ExitClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
