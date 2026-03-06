// 函数名称: sub_539d00
// 虚拟地址: 0x539d00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_539d00(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = sub_53e610(arg1 + 0x38, arg2)
    int32_t* eax = sub_53e610(arg1 + 0x38, arg2)
    bool cond:0 = *eax == 0
    eax[3] = 0
    eax[4] = 0
    eax[5] = 0
    int32_t var_1c
    char* ecx_1
    
    if (not(cond:0))
        char const* const var_18_1 = "Dx11GraphicsInterface::LockVertexBuffer"
        var_1c = 0x121
        ecx_1 = "bufferData->mBufferType == DX11BUFFER_VERTEX"
    else if (eax[1].b != 0)
        int32_t* eax_1 = *(arg1 + 8)
        int64_t var_10 = 0
        int32_t var_8_1 = 0
        eax = (*(*eax_1 + 0x38))(eax_1, eax[6], 0, 4, 0, &var_10)
        
        if (eax s>= 0)
            return var_10.d
        
        char const* const var_18_4 = "Dx11GraphicsInterface::LockVertexBuffer"
        var_1c = 0x126
        ecx_1 = "SUCCEEDED(hr)"
    else
        char const* const var_18_2 = "Dx11GraphicsInterface::LockVertexBuffer"
        var_1c = 0x122
        ecx_1 = "bufferData->mDynamic"
    
    sub_489550(eax, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\engine\windows\windowsdx11.cpp", var_1c, 
        "Dx11GraphicsInterface::LockVertexBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
