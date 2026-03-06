// 函数名称: sub_51d520
// 虚拟地址: 0x51d520
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __thiscallsub_51d520(void* arg1, int32_t* arg2, uint32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59eb78
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* eax_3 = sub_5232e0(arg1 + 0x4240, arg3)
    
    if (eax_3[4] != 0)
        sub_489550(eax_3, &data_5b2591, "bufferData->mIsLoading == 0", 
            "d:\ax\trunk\ax2017\engine\openglgraphics.cpp", 0x5a9, 
            "OpenGLInterface::UnlockTextureBuffer")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    uint32_t texture_1 = *eax_3
    (*__glewUnmapBuffer)(0x88ec)
    uint32_t width
    int32_t* var_30_1 = &width
    int32_t* result_1
    sub_4889e0(&result_1, arg2, 3)
    int32_t var_8_1 = 0
    int32_t* width_1 = width
    int32_t* ebx = *width_1
    int32_t edi_2 = ebx[4] * arg5 + arg4
    
    if (edi_2 s>= ebx[0xf])
        sub_489550(width_1, &data_5b2591, "imageIndex < pTextureData->imageCount", 
            "d:\ax\trunk\ax2017\engine\openglgraphics.cpp", 0x5b8, 
            "OpenGLInterface::UnlockTextureBuffer")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t esi_1 = eax_3[0x51]
    int32_t* edi_4 = (edi_2 << 4) + ebx[0x12]
    uint32_t width_2 = divu.dp.d(0:(*ebx), esi_1) u>> arg4.b
    
    if (width_2 u< 1)
        width_2 = 1
    
    width = width_2
    uint32_t eax_9 = divu.dp.d(0:(ebx[1]), esi_1) u>> arg4.b
    
    if (eax_9 u< 1)
        eax_9 = 1
    
    arg2 = eax_9
    void* eax_10 = sub_51d2e0(ebx[6])
    int32_t eax_11 = ebx[7]
    
    if (eax_11 != 0)
        if (eax_11 != 1)
            sub_489550(eax_11, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\openglgraphics.cpp", 
                0x5e4, "OpenGLInterface::UnlockTextureBuffer")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        sub_51c870(texture_1, 0)
        glTexImage2D(*((arg5 << 2) + &data_5d36b0), arg4, *(eax_10 + 4), width, arg2, 0, *(eax_10 + 8), 
            *(eax_10 + 0xc), nullptr)
    else
        void* eax_12 = data_1151adc
        uint32_t texture = texture_1
        
        if (*(eax_12 + 0x409c) != texture)
            *(eax_12 + 0x409c) = texture
            
            if (*(eax_12 + 0x4098) != 0)
                *(eax_12 + 0x4098) = 0
                (*__glewActiveTexture)(0x84c0)
                texture = texture_1
            
            glBindTexture(0xde1, texture)
        
        int32_t eax_14 = ebx[6]
        
        if (eax_14 s< 0xd || (eax_14 s> 0x12 && eax_14 != 0x15))
            glTexImage2D(0xde1, arg4, *(eax_10 + 4), width, arg2, 0, *(eax_10 + 8), *(eax_10 + 0xc), 
                nullptr)
        else
            (*__glewCompressedTexImage2D)(0xde1, arg4, *(eax_10 + 4), width, arg2, 0, *edi_4, 0)
        
        if (*(data_aca1ec + 0x21) != 0 && ebx[6] s< 0x6f)
            (*__glewGenerateMipmap)(0xde1)
    
    (*__glewBindBuffer)(0x88ec, 0)
    eax_3[0x36] = 0
    int32_t* result = result_1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
