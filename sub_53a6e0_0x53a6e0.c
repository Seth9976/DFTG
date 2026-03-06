// 函数名称: sub_53a6e0
// 虚拟地址: 0x53a6e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_53a6e0(void* arg1, char arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a2d58
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* arg_8
    int32_t* eax_3 = sub_53e610(arg1 + 0x38, arg_8)
    
    if (*eax_3 != 2)
        sub_489550(eax_3, &data_5b2591, "bufferData->mBufferType == DX11BUFFER_TEXTURE", 
            "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x2b5, 
            "Dx11GraphicsInterface::LockTextureBuffer")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* var_24_1 = &arg_8
    int32_t* arg_4
    sub_4889e0(&arg_4, arg_4, 3)
    int32_t var_8_1 = 0
    int32_t* ebx = *arg_8
    uint32_t edi_1 = *ebx u>> arg2
    
    if (edi_1 u< 1)
        edi_1 = 1
    
    uint32_t edx_1 = ebx[1] u>> arg2
    
    if (edx_1 u< 1)
        edx_1 = 1
    
    *arg4 = 1
    int32_t eax_6 = sub_5235a0(arg4, edx_1, edi_1, ebx[6])
    
    if (eax_3[2] != 0)
        sub_489550(eax_6, &data_5b2591, "bufferData->mBufferPtr == 0", 
            "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", 0x2c1, 
            "Dx11GraphicsInterface::LockTextureBuffer")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    eax_3[2] = sub_4c2e40(eax_6)
    int32_t edx_2 = ebx[6]
    
    if (edx_2 s< 0xd || (edx_2 s> 0x12 && edx_2 != 0x15))
        *arg3 = sub_5234e0(edi_1, edx_2)
    else
        *arg3 = 0
    
    int32_t* ecx_7 = arg_4
    int32_t result = eax_3[2]
    
    if (ecx_7 != 0)
        ecx_7[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
