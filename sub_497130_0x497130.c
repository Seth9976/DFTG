// 函数名称: sub_497130
// 虚拟地址: 0x497130
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_497130(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59eeb8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_68 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 == 0)
        sub_489550(arg1, &data_5b2591, "texture", "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0xbc1, 
            "Draw3DSkyBox")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* esi = *fsbase->ThreadLocalStoragePointer
    
    if (data_1515678 s> *(esi + 4))
        __Init_thread_header(&data_1515678)
        
        if (data_1515678 == 0xffffffff)
            int32_t var_8_1 = 0
            data_151567c = sub_4d0b50("sys/skybox.material", 5)
            int32_t var_8_2 = 0xffffffff
            __Init_thread_footer(&data_1515678)
    
    uint32_t edx = data_151567c
    uint32_t var_38 = edx
    
    if (data_1515680 s> *(esi + 4))
        __Init_thread_header(&data_1515680)
        
        if (data_1515680 == 0xffffffff)
            int32_t var_8_3 = 1
            data_1515684 = sub_4d0b50("sys/skybox.structure", 2)
            int32_t var_8_4 = 0xffffffff
            __Init_thread_footer(&data_1515680)
        
        edx = var_38
    
    int32_t* eax_9 = data_1515684
    int32_t edi = 0
    int32_t* result
    
    for (int128_t* i = &data_aca24c; i s<= &data_aca284; )
        result = data_aca1ec
        
        if (*(result + 0x27) != 0 || edi == 2)
            if (data_114e7d9 == 0)
                sub_489550(result, &data_5b2591, "gDraw3DData.submittingRenderItems", 
                    "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0x31f, "Draw3DSetDrawEyeMask")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            float var_34 = 10f
            data_aca770 = 1 << edi.b
            int32_t eax_11 = *(i + 0x18)
            int128_t var_5c_1 = *i
            int32_t var_18_1 = eax_11
            int64_t var_20_1 = i[1].q
            int128_t var_30_1 = data_5d2b78
            result = sub_495460(eax_11, &var_34, eax_9, edx, arg1, 0)
        
        edx = var_38
        i += 0x1c
        edi += 1
    
    if (data_114e7d9 != 0)
        data_aca770 = 7
        fsbase->NtTib.ExceptionList = ExceptionList
        @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
        return result
    
    sub_489550(result, &data_5b2591, "gDraw3DData.submittingRenderItems", 
        "d:\ax\trunk\ax2017\engine\draw3d.cpp", 0x31f, "Draw3DSetDrawEyeMask")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
