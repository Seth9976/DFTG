// 函数名称: sub_520b40
// 虚拟地址: 0x520b40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __stdcallsub_520b40(uint64_t (* arg1)[0x2])
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a1218
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx = arg1[0x35][0].d
    int32_t* esi = *ebx
    
    if (esi != ebx[0xfc])
        sub_489550(arg1, &data_5b2591, "pVertexShader->assetShader == pPixelShader->assetShader", 
            "d:\ax\trunk\ax2017\engine\openglgraphics.cpp", 0x1010, 
            "OpenGLInterface::GraphicsMaterialSetup")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* var_14
    int32_t* var_30 = &var_14
    int32_t* var_18
    sub_4889e0(&var_18, esi, 4)
    int32_t var_8_1 = 0
    void* edi = var_14
    char* eax_4 = *(edi + 0x10)
    
    if (eax_4 == 0)
        eax_4 = (*(*data_114ec78 + 0x44))(esi, 0)
        *(edi + 0x10) = eax_4
    
    int32_t var_8_2 = 0xffffffff
    int32_t* ecx_2 = var_18
    
    if (ecx_2 != 0)
        ecx_2[7] -= 1
    
    if (eax_4 == 0)
        eax_4.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    void* ecx_5 = data_1151adc
    
    if (*(ecx_5 + 0x404c) != eax_4)
        *(ecx_5 + 0x404c) = eax_4
        int32_t* eax_6 = sub_5232e0(ecx_5 + 0x4240, eax_4)
        (*__glewUseProgram)(*eax_6)
        eax_4 = _memset(data_1151adc + 0x28, 0xfe, eax_6[0x40] << 4)
    
    int32_t i_1 = ebx[0xfd]
    
    if (i_1 s> 0)
        void* esi_2 = &ebx[0x100]
        int32_t i
        
        do
            eax_4 = sub_51ec40(eax_4, *esi_2, *(esi_2 - 4), *(esi_2 + 8), *(esi_2 - 8), arg1)
            
            if (eax_4.b == 0)
                eax_4 = sub_51f6c0(esi_2 - 8, arg1)
            
            esi_2 += 0x14
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_520400(&ebx[0x1fb], ebx[0x1f8])
    int32_t eax_11
    eax_11.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_11
}
